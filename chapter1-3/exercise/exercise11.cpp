#include "std_lib_facilities.h"

int main()
{
    int pennies;int nickels;int dimes;int quarters;
    int half_dollars;int dollars;
    double total;

    cout << "How many pennies you have ?\n";
    cin >>  pennies;
    cout << "How many nickels you have ?\n";
    cin >>  nickels;
    cout << "How many dimes you have ?\n";
    cin >> dimes;
    cout << "How many quarters you have ?\n";
    cin >> quarters;
    cout << "How many half_dollars you have ?\n";
    cin >> half_dollars;
    cout << "How many dollars you have ?\n";
    cin >> dollars;

    total = pennies + nickels + dimes + quarters + half_dollars + dollars;
    (pennies > 1)? cout << "You have " << pennies <<" pennies\n" : cout << "You have " << pennies <<" pennie\n";
    (nickels > 1)? cout << "You have " << nickels <<" nickels\n" : cout << "You have " << nickels <<" nickel\n";
    (dimes > 1)? cout << "You have " << dimes <<" dimes\n" : cout << "You have " << dimes <<" dime\n";
    (quarters > 1)? cout << "You have " << quarters <<" quarters\n" : cout << "You have "<< quarters << " quarter\n";
    (half_dollars > 1)? cout << "You have " << half_dollars <<" half_dollars\n" : cout << "You have " << half_dollars <<" half_dollar\n";
    (dollars > 1)? cout << "You have " << dollars <<" dollars\n" : cout << "You have " << dollars <<" dollar\n";
    cout << '\n' << "You have total $ " << total/100 <<" in all!\n";

    return 0;
}