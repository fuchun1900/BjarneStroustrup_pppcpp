#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    vector<int>numbers;
    vector<int>primer;
    int max;

    cout << "Please enter the number : ";
    cin >> max;

    //初始化数组
    for (size_t i = 0; i <= max; i++)
        numbers.push_back(i);
 
    for (size_t i = 2; i <= max; i++)
    {
        if (numbers[i] != 0)
        {
            primer.push_back(numbers[i]);
            for (size_t j = i; i*j <= max; j++)
                numbers[i*j] = 0;
        }
    }
    
    for (int itme : primer)
        cout << itme << '\t';

    return 0;
    
}