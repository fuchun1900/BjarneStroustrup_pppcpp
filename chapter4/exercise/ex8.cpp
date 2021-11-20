#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    double count = 0,i = 0,limit = 0;

    cout <<  "How many grains do you want?\n";
    cin >> limit;

    while (count <= limit)
    {
        count += pow(2,i);  //一个格子的数量为2的i次方
        i++;
    }
    cout << "Need " << i << " square !";

    return 0;
}