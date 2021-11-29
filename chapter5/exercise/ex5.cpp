#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

double ctok(double c)
{
    if (c < -273.15)  //前置条件判断
        error("Bad arguments!; Must above -273.15");
    
    double k =c +273.15;

    return k;
}

double ktoc(double k)
{
    if (k < 0)  //前置条件判断
        error("Bad arguments!; Must above 0 k");
    
    double c = k - 273.15;

    return c;
}

int main()
{
    int choice;
    double c = 0; //输入变量
    double k = 0;

    cout << "Please choose mode :\n"
         << "1.c to k           2.k to c"
         << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Pleas enter centigrade.\n";
        cin >> c; //输入温度值
        k = ctok(c);
        break;
    case 2:
        cout << "Pleas enter  Absolute temperature.\n";
        cin >> c; ///输入绝对
        k = ktoc(c);
        break;
    default:
        cout << "Please enter 1 and 2 .\n";
        break;
    }

    cout << k << endl;
}