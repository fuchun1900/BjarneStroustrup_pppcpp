#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

double ctok(double c)
{ 
    constexpr double k_conversion = 273.15;
    double k =c + k_conversion;

    return k;
}

int main()
{
    constexpr double c_conversion = -273.15;
    double c = 0; //输入变量
    cin >> c; //输入温度值
    if (c < c_conversion)
        error("Input temp is lower than absolute 0.\n");
    
    double k = ctok(c); //转换温度
    cout << k << endl;
}
