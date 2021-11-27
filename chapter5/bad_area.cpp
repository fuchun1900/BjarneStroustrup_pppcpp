#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
int area(int length,int width);
int main()
{
    int a,b;

    cin >> a >> b;
    area(a,b);

    return 0;
}


int area(int length,int width)
{
    if(length <= 0 || width << 0)
        error("area() pre - condition"); //前置条件
    int a = length*width;
    if(a < 0 )
        error("area() post - condition");
    cout << "answer is " << a;
    return a;
}