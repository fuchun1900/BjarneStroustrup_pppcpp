#include "std_lib_facilities.h"
int main()
{
    cout <<"Please enter your first name(follow by enter'):\n";
    string firstname;  //firstname是字符型变串
    cin >> firstname;  //读取字符串到firstname
    cout <<"Hello," <<firstname<<"!\n"; //和c语言printf的差别

    return 0;
}

//编译命令 c++ -std=c++11 -stdlib=libc++ -o hello_world hello_world.cpp