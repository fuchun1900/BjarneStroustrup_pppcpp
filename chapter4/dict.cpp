#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    vector<string>words;
    vector<string> dislikes = { "aws", "salesforce", "java" };  //不喜欢的词组

    for (string temp; cin >> temp;)
        words.push_back(temp);

    for (string x : words)
    {
        bool ls = true;   //用来判断是否在不喜欢的数组中
        for (string bad : dislikes)
        {
            if (x == bad)
            {
                cout << "BLEEP!" << '\n';
                ls = false;  //设置为flase
                break;
            }
        }
        if (ls)  //打印正常单词
            cout << x << '\n';
    }
    return 0;
}