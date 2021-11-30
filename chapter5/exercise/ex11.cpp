#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
int main()
{
    try
    {
        //constexpr int biggest_int = 100000; //当输入int最大数时注意因为超过int容量而产生无限循环
        int a =0 ,b = 1,fibo = 1;
        while (fibo >= a)  //当int溢出后为负数，相加后必定比最后一个数小，所以输出最后一个数
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
