#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
class NegativeRoot{};
void Quadratic(double,double,double);

int main()
try
{
    double a,b,c;

    cout << "Please enter coefficient of a and b and constant for c : ";
    cin >> a >> b >> c;
    Quadratic(a,b,c);
}
catch(NegativeRoot)
{
    cout << "The square root cannot be negative!" << endl;
}
catch(...) {
    cout << "Exception: something went wrong.\n";
}

void Quadratic(double a,double b,double c )
{
    double root = b*b - 4*a*c;
    double x1,x2;

    if (root < 0)
        throw NegativeRoot{};
    else
    {
        x1 = (-b + root) / (2*a);
        x2 = (-b - root) / (2*a);
        cout << "The solution values are: x1 = " << x1
             << ", x2 = " << x2 << '\n';
    }
}