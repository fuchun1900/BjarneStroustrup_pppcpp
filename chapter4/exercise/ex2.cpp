#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    double middle = 0; double number;
    vector<double>arr;

    cout << "Please enter number ,press | to termainate : " << endl;
    while (cin >> number)
        arr.push_back(number);
    sort(arr.begin(),arr.end());
    cout << "Sorted vector :";
    for (double x : arr)
        cout << x << '\t';
    cout << "The middle number is : ";
    //如果大小为双数数组输出当中两个的中值，如果是单数数组则输出当中的值
    (arr.size()%2 == 0)? cout << (arr[arr.size()/2] + arr[arr.size()/2 - 1])/2 : cout << arr[arr.size()/2];
    
    return 0;
}