#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    int itme,input,ans = 0;
    vector<int>vec;

    cout << "Please enter the itmes you want to add : ";
    cin >> itme;
    cout << "Please enter some integers (Press '|' to stop):";
    while (cin >> input)
        vec.push_back(input);
    if (itme > vec.size())  //如果项数大于数组个数则报错
        error("The number of items added cannot be greater than the length of the array .");
    for (int i = 0; i < itme; i++)
        ans += vec[i];  //项数累加
    cout << "The sum of the first " << itme << " numbers (";
    for (int item : vec)
        cout <<' '<< item;
    cout << ") is "<< ans << endl;

    return 0;
}