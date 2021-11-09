#include "std_lib_facilities.h"

int main()
{
    int number;

    cout << "Please enter the number :";
    cin >> number;
    (number %2 == 0)? cout << "This number is even\n" : cout <<"This number is odd\n";  //判断奇数还是偶数

    return 0;
}