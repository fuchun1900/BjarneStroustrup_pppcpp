#include "std_lib_facilities.h"

int main()
{
    cout <<"Please enter your firstname and age:\n";
    string firstname; double age;
    cin >>firstname>>age;
    cout << "Hello, "<< firstname<<"(age "<<age<<')'<<"(month "<< age*12 <<")\n";

    return 0;
}