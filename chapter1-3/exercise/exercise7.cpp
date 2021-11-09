#include "std_lib_facilities.h"

int main()
{
    string str[3]; //用数组来存储
    string temp;

    cout << "Please enter 3 string to sort: \n";
    cin >> str[0] >> str[1] >> str[2];
    for (int i = 0; i < 3; i++)  //冒泡排序
    {
        for (int j = 0; j < (3-i-1); j++)
        {
            if (str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    cout << str[0] <<',' << str[1]  << ',' << str[2];

    return 0;
}
