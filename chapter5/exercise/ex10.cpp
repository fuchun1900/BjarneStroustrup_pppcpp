#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
try
{
    int itme;
    double input,ans = 0.0;
    vector<double>vec;
    vector<double>diff;

    cout << "Please enter the itmes you want to add : ";
    cin >> itme;
    cout << "Please enter some numbers (Press '|' to stop):";
    while (cin >> input)
        vec.push_back(input);
    /*if (itme > vec.size())  //如果项数大于数组个数则报错
        error("The number of items added cannot be greater than the length of the array .");
        */
    for (int i = 0; i < itme; i++)
    {
        ans += vec[i];  //项数累加
        diff.push_back((i == 0)? vec[i]:vec[i] - vec[i-1]); //如果是第一个元素则直接加入，其余加入相邻元素的差
    }
    cout << "The sum of the first " << itme << " numbers (";
    for (int item : vec)
        cout <<' '<< item;
    cout << ") is "<< ans << endl;
    cout << "The diff of the array is " << "(";
    for (int item : diff)
        cout <<' '<< item;
    cout << ") " << endl;

    return 0;
}
catch(exception& e)
{
    cerr << "Error is "<< e.what() << endl;
    return -1;
}
catch(...)
{
    cerr << "Unknown exception!\n";
    return -2;
}