#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    const double cm_per_inch = 2.54;
    double length = 1;
    char unit = 'a';
    cout << "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;

    switch (unit)
    {
    case 'i':
        cout << length << "in == "<< cm_per_inch*length << " cm\n";
    case 'c':
        cout << length << "cm == "<< length/cm_per_inch << " in\n"; //没有加break所有这条语句也执行了
    default:
        break;
    }
}