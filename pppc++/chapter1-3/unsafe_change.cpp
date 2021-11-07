#include "std_lib_facilities.h"
/*
int main()
{
    int a = 20000;
    char c = a;
    int b =c;
    if(a != b)
        cout << "Oops!:" << a << " != "<< b <<'\n';
    else
        cout << "We have large characters\n";

    return 0;
}
*/
int main()
{
    double d = 0;
    while (cin >> d)  //重复输入d的值
    {
        int i = d;  //压缩double到int
        char c = i; //压缩int到char
        int i2 = c; //获得字符的整数
        cout << "d ==" << d
             << " i ==" << i
             << " i2 ==" << i2
            << " char(" << c << ")\n";
    }
    return 0;
}