#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    char up = 'A'; //初始化字母
    char low = 'a';
    char number = '0';
    const int count = 26;  //26个小写字母和26个大写字母

    for (size_t i = 0; i < count; i++)  //大小字母asc码
    {
        cout << up << '\t' << up + 0 << '\n';
        up +=1;
    }
    cout << '\n';
    for (size_t i = 0; i < count; i++) //小写字母asc码
    {
        cout << low << '\t' << low + 0 << '\n';
        low ++;
    }
    cout << '\n';
    for (size_t i = 0; i < 10; i++)  //阿拉伯数字asc码
    {
        cout << number << '\t' << number + 0 << '\n';
        number ++;
    }

    return 0;
}