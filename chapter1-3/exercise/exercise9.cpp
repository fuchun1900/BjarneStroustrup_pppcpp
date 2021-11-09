#include "std_lib_facilities.h"
#define LEN 10

int main()
{
    string numbers[LEN] = {"one","two","three","four","five","six","seven","eight","nine","ten"}; //用字符串数组来保存
    string input;
    int i;
    cout << "Please enter the  Spelled numbers :";
    while (cin >> input)
    {
        while (getchar() != '\n')
            continue;      
        if (input == "quit")
            break;
        for (i = 0; i < LEN; i++)
        {
            if (input == numbers[i])  //查找数字
            {                        
                cout << "The number is " << i+1 << '\n';  //位置加1并退出for循环
                break;
            }
        }
        if (i == LEN)  //查找一遍还没找到则输出
            cout <<"Not a number i konw .\n";
    }
    
    return 0;
}