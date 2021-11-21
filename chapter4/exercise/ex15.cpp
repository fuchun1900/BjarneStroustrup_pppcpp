#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int primer(void);
int main()
{
    int count = 1,i = 1,judge;

    cout << "Please enter the number of primer : ";
    cin >> count;
    cout << '\n';

    while (i <= count)
    {
        while ((judge = primer()))
        {
            cout << "The "<< i << " primer number is "<< judge << endl;
            i++;
        }
    }
    return 0;
}

int primer(void) 
{
   static int start = 2;
   int primer = 1;

    for (size_t i = 1; i*i <= start; i++)
    {
        if (start % i == 0 && i != 1)
        {
            primer = 0;
            break;
        }
    }
    if (primer)
        primer = start;
    start++;

    return primer;
}