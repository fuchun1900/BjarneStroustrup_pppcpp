#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

double ctok(double c)
{
    double k =c +273.15;

    return k;
}

int main()
{
    double c = 0; //输入变量
    cin >> c; //输入温度值
    double k = ctok(c); //转换温度

    cout << k << endl;
}