#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    double a = 0,b = 0, c = 0,delta = 0, x_1 = 0, x_2 = 0 ;

    cout << "Please enter a factor a ,b ,c for ax^2 + bx + c = 0 " << endl;
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    if (delta > 0)
    {
        x_1 = (-b + sqrt(delta))/ (2*a);
        x_2 = (-b - sqrt(delta))/ (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x_1 << endl;
        cout << "x2 = " << x_2 << endl;
    }
    else if (delta == 0)
    {
        x_1 = x_1 = (-b + sqrt(delta))/ (2*a);
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << x_1 << endl;
    }
    else
        cout << "Sorry, no complex math here - can't solve that! Try again:\n";
    
    return 0;
}