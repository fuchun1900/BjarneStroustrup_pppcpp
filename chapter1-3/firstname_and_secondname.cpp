#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and second name.\n";
    string firstname,secondname;

    cin >> firstname >> secondname; //cin连续输入多个字符串
    cout << "Hello "<< firstname <<" " << secondname <<'\n';
    
    return 0;
}