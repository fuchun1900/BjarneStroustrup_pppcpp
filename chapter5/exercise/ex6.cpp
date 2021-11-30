#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
double ctof(double);
double ftoc(double);

int main()
{
    double input,k;
    int choice;

   do
   {
        cout << "Please choose mode :\n"
         << "1.c to f           2.f to c\n"
         << "3. 3 to quit"
         << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Pleas enter centigrade.\n";
        cin >> input; //输入摄氏温度
        k = ctof(input);
        cout << "Convert to "<< k << " Fahrenheit. " << endl;
        break;
    case 2:
        cout << "Pleas enter Fahrenheit scale.\n";
        cin >> input; ///输入华氏温度
        k = ftoc(input);
        cout << "Convert to "<< k << " centigrade. " << endl;
        break;
    case 3:  //退出
        cout << "Thank you for use!" << endl;
        break;
    default:
        cout << "Please enter 1 ，2 and 3 .\n";
        break;
    }
   } while (choice != 3);
   
    return 0;
}

double ctof(double dc)
{
    double df = 9.0/5*dc + 32;

    return df;
}

double ftoc(double df)
{
    double dc = (df - 32)*5/9.0;

    return dc;
}