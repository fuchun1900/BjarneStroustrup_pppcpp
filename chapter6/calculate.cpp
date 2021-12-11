#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
int main()
{
    cout << "Please enter expression (we can handle + and - * /):";
    cout << "Add an x to end expression(e.g.,1+2*3x):";
    int lval = 0;
    int rval;
    cin >> lval;  //读入最左边的操作数
    if(!cin) error("No first operand.");
    for (char op; cin >> op; )  //读入运算符和右操作数
    {
        if(op != 'x') cin >> rval;
        if(!cin) error("No second operand.");
        switch (op)
        {
        case '+':
            lval += rval;
            break;
        case '-':
            lval -= rval;
            break;
        case '*':
            lval *= rval;
            break;
        case '/':
            lval /= rval;
            break;
        default:
            cout << "Result : "<< lval << '\n';
            keep_window_open();
            return 0;
        }
    }
    error("Bad experssion.");
}