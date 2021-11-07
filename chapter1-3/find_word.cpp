#include "std_lib_facilities.h"

int main()
{
    string previous = " "; //第一个单词，初始化为空
    string current; //当前单词
    int number = 0; //统计重复单词数

    while (cin >> current) //读入单词流
    {
        if (current == previous)  //检查读入单词是否与上一个单词相同
        {
            number++;
            cout <<"Repeat word number :" << number <<'\n' << "Repeat word:" << current <<'\n';
        }
        previous = current;  //将当前单词变为上一个单词
    }
    return 0;
}