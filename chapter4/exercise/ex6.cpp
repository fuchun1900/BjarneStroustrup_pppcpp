#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int string_to_int(void);
/*
int main()
{
    int ans;

    ans = string_to_int();
    if (ans)
        cout << "The index of input is " << ans << endl;
    else
        cout << "Cant find" << endl;
    
}
*/

int string_to_int(void)
{
    vector<string>numbers = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string input;
    int num = 0;

    cout << "Please enter the string :\n";
    for (cin >> input ; num < numbers.size(); num ++)
    {
        if (input == numbers[num])
            return num; //返回索引
    }
    return -1;
}