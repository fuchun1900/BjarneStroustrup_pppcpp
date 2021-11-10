#include "std_lib_facilities.h"

int main()
{
    char operation;  //字符保存操作赋
    double val1,val2,res;

    cout << "Please enter one operation and two numbers .\n";
    while (cin >> operation >> val1 >> val2)  //switch函数来选择
    {
        switch (operation)
        {
        case '+':
            res = val1 + val2;
            break;
        case '-':
            res = val1 - val2;
            break;
        case '*':
            res = val1 * val2;
            break;
        case '/':
            res = val1 / val2;
            break;
        case 'q':
            return 1;
        default:
            cout << "This operation cant be loaded.\n";
            continue;
        }
        cout << val1 << operation << val2 << " = "<< res <<'\n';
    }
    return 0;    
}