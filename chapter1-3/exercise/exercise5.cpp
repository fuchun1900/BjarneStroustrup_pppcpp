#include "std_lib_facilities.h"

int main()
{
    double val1,val2;  //改为float

    cout << "Please enter two float numbers: ";
    cin >> val1 >> val2;
    (val1 > val2)? cout << "val1 is bigger \n" : cout << "val2 is bigger \n";
    (val1 < val2)? cout << "val1 is lesser \n" : cout << "val2 is lesser \n";
    cout << "Their sum is " << val1 + val2 <<'\n'
         << "Their diifference is " << val1 - val2 << '\n'
         << "Their product is " << val1 * val2 << '\n'
         << "Their ratio is " <<val1 /val2 << '\n';

    return 0;
}