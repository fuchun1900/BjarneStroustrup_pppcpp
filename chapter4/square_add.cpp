#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

void suare_add(int);
int main()
{
    for (size_t i = 0; i < 10; i++)
        suare_add(i);
    
    return 0;
}

void suare_add(int x)
{
    int i = 0; int ans = 0;

    while (i++ < x)
        ans+= x;
    cout << x << '\t' << ans << '\n';    
}