#include "std_lib_facilities.h"

int main()
{
    int val1,val2;  //int 计算结果也为int

    cout << "Please enter two int numbers: ";
    cin >> val1 >> val2;
    (val1 > val2)? cout << "val1 is bigger \n" : cout << "val2 is bigger \n";
    (val1 < val2)? cout << "val1 is lesser \n" : cout << "val2 is lesser \n";
    cout << "Their sum is " << val1 + val2 <<'\n'
         << "Their diifference is " << val1 - val2 << '\n'
         << "Their product is " << val1 * val2 << '\n'
         << "Their ratio is " <<val1 /val2 << '\n';

    return 0;
}