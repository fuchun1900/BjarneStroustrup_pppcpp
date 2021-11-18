#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

void add(double,double);
void sub(double,double);
void mult(double,double);
void dived(double,double);
void opt(double,double,char,void (*pf)(double,double));
int string_to_int(void);

int main()
{
    double val1 = 0.0, val2 = 0.0; int choose = 1;
    vector<double>ar;
    string input1,input2;
    char operation;
    void (*pf)(double,double); //声明一个函数指针

    cout << "Please enter choose mode : 1. numbers  2.strings "<< endl;  //数字模式和字符串模式
    while (cin >> choose)
    {
        if (choose == 1)  //选择数字模式
        {
            cin >> val1 >> val2 >> operation;
            opt(val1,val2,operation,pf);  //将两个数字和一个操作符代入函数中
        }
        else if (choose == 2) //选择字符串模式
        {
            int i = 0;
            while (i < 2) //输入两个字符串
            {
                ar.push_back(string_to_int());  //将输入的字符串转换成数字后添加到ar的第一和第二个元素
                if (ar[i] == -1)  //如果没有找到相应的字符串
                {
                    cout << "Your input Cant find "<< endl;
                    i = 0;  //重置循环
                    ar.clear();  //清空数组
                    continue ;
                }
                i++;
            }
            cout << "Please enter the operation "<< endl;
            cin >> operation;
            opt(ar[0],ar[1],operation,pf); //将两个数字和一个操作符代入函数中
            ar.clear(); //清空数组
        }
        else
            cout << "Please don't exceed the limit of 1 and 2 "<< endl;
        cout << "Please enter choose mode : 1. numbers  2.strings "<< endl;
    }

    return 0;
}

void add(double a,double b)
{
    cout << "The sum of "<< a << " and "<< b << " is " << a + b << endl;
}

void sub(double a,double b)
{
    cout << "The substract of "<< a << " and "<< b << " is " << a - b << endl;
}

void mult(double a,double b)
{
    cout << "The multiplication of "<< a << " and "<< b << " is " << a * b << endl;
}

void dived(double a,double b)
{
    cout << "The  division of "<< a << " and "<< b << " is " << a / b << endl;
}

void opt(double a,double b,char operation, void (*pf)(double,double))
{
    switch (operation)
        {
        case '+':
            pf = add;
            break;
        case '-':
            pf = sub;
            break;
        case '*':
            pf = mult;
            break;
        case '/':
            pf = dived;
            break;  
        default:
            cout << " Unrecognized operator " << endl;  
        }
    pf(a,b);
}

int string_to_int(void)
{
    vector<string>numbers = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string input;
    int num = 0;

    cout << "Please enter the string :\n";
    for (cin >> input ; num < numbers.size(); num ++)
    {
        if (input == numbers[num])
            return (num);
    }
    return -1;
}
