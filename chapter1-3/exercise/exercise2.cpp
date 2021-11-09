#include "std_lib_facilities.h"

int main()
{
    double miles;

    cout << "Please enter the miles you want to transfer to kilometers :";
    cin >> miles;
    cout << miles << " miles " << "= "<< miles*1.909 <<" kilometers";  //转换英里为公里数

    return 0;
}