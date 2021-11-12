#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    int i = 0;
    char c = 'a';

    while (i < 26)
    {
        cout << c << '\t' << c + i << '\n';
        c++;
        i+=1;
    }
    return 0;
}