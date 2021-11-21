#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    vector<int>primes;
    int max;

    cout << "Please enter the number : ";
    cin >> max;

    for (size_t i = 2; i <= max; i++)
    {
        bool isprimer = true;

        for (size_t j = 1; j <= pow(i,0.5); j++)
        {
            if (i%j == 0 && j != 1)
            { 
                isprimer = false;
                break;
            }
        }
        if (isprimer)
            primes.push_back(i);
    }
    for (int items : primes)
        cout << items << ' ';
    
    return 0;
}