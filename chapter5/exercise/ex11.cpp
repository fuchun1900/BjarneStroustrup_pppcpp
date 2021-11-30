#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
int main()
{
    try
    {
        constexpr int biggest_int = 100000;
        int a =0 ,b = 1,fibo;
        while (fibo <= biggest_int)
        {
            fibo = a + b;
            a = b;
            b = fibo;   
        }
        cout << a << ' ';
    }
    catch(exception &e)
    {
        cerr << "Error is "<< e.what() << '\n';
        return -1;
    }
    catch(...)
    {
        cerr << "Unknown exception!\n";
        return -2;
    }
    
}
