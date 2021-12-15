#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
double expression();
class Token{   
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

class Token_stream
{
    public:  //公共（用户）接口
        Token_stream();
        Token get(); //获取一个单词
        void putback(Token T); //放回一个单词
    private: //私人接口（实现细节）
        bool full;  //缓冲区是否有单词
        Token buffer;  //存储putback放回单词的缓冲区
};

Token_stream::Token_stream()
    :full(false), buffer(0)    // no Token in buffer
{
}

void Token_stream ::putback(Token t)
{
    if(full) error("Putback() into full buffer."); //当连续两次放回，切中间没有去单词时则报错
    buffer = t;
    full = true;
}
Token Token_stream::get()
{
    if(full)  //如果缓冲区已经有一个单词
    {
        full = false;
        return buffer; //删除缓冲区中的单词
    }
    char ch;
    cin >> ch;  //cin会忽略空白符
    switch (ch)
    {
    case ';': //立即输出结果
    case 'q': //表示退出
    case '(':case ')':case '{':case '}':case '+':case '-':case '*':case '/':case '!':
        return Token{ch};
    case '.':
    case '0':case '1':case '2':case '3':case '4':
    case '5':case '6':case '7':case '8':case '9':
    {
        cin.putback(ch); //将数字或小数点放回输入流中
        double val;
        cin >> val;
        return Token{'8',val}; //用‘8’表示这是一个数字
    }
    default:
        error("Bad Token");
    }

}

Token_stream ts;  //类的实例

double primary()            // 处理数字和括号
{
    Token t = ts.get();
    switch (t.kind) 
    {
        case '(':                   // handle '(' expression ')'
            {
                double d = expression();
                t = ts.get();
                if (t.kind != ')') error("')' expected");
                return d;
            }
        case '{':
            {
                double d = expression();
                t = ts.get();
                if (t.kind != '}') error("'}' expected");
                
                return d;
            }
        case '8':                   // we use '8' to represent a number
            {
                double ans = t.value;
                t = ts.get();
                if (t.kind == '!')
                {
                    if(ans == 0) ans = 1;
                    int fact = ans-1;
                    while (fact)
                        ans *= fact--;
                }
                else
                    ts.putback(t);
                return ans;   // return the number's value
            }
        default:
            return -1;
            error("primary expected");
    }
}

double term()               // deal with * and /
{
    double left = primary();
    Token t = ts.get();             // get next token from Token_stream

    while (true) {
        switch (t.kind) {
            case '*':
                left *= primary();
                t = ts.get();
                break;
            case '/':
                {
                    double d = primary();
                    if (d == 0) error("divide by zero");
                    left /= d;
                    t = ts.get();
                    break;
                }
            default:
                ts.putback(t);      // put t back into the Token_stream
                return left;
        }
    }
}

double expression()         // deal with + and -
{
    double left = term();           // read and evaluate a term
    Token t = ts.get();             // get next token from Token_stream

    while (true) {
        switch (t.kind) {
            case '+':
                left += term();     // evaluate term and add
                t = ts.get();
                break;
            case '-':
                left -= term();     // evaluate term and subtract
                t = ts.get();
                break;
            default:
                ts.putback(t);      // put t back into the token stream
                return left;
        }
    }
}

int main()
try {
    double val = 0;
    while (cin) {
        Token t = ts.get();

        if (t.kind == 'q') break;       // 'q' for "quit"
        if (t.kind == ';')              // ';' for "print now"
            cout << "=" << val << '\n';
        else
            ts.putback(t);
        val = expression();
    }
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}