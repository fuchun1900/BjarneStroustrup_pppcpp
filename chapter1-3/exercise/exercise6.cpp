#include "std_lib_facilities.h"

int main()
{
    int val[3];
    int temp;

    cout << "Please enter 3 number: ";
    cin >> val[0] >> val[1] >> val[2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < (3-i-1); j++)
        {
            if (val[j] > val[j+1])
            {
                temp = val[j];
                val[j] = val[j+1];
                val[j+1] = temp;
            }
        }
    }
    cout << val[0] <<',' << val[1]  << ',' << val[2];

    return 0;
}