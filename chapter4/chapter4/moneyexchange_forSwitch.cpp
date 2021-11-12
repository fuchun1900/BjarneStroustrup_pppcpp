#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    const double y_to_d = 0.008774;
    const double e_to_d = 1.1462;
    const double p_to_d = 1.3392;
    const double k_to_d = 0.1542;
    const double r_to_d = 0.1563;
    double input,dollar;
    char money;

    cout << "Please enter the money you want to change to dollar(e,y p and k).\n";
    cin >> money >> input;
    switch (money)
    {
    case 'e':
        dollar = input * e_to_d;
        cout << "The "<< input << " EURO change to "<< dollar << " dollar.\n";
        break;
    case 'y':
        dollar = input * y_to_d;
        cout << "The "<< input << " YAN change to "<< dollar << " dollar.\n";
        break;    
    case 'p':
        dollar = input * p_to_d;
        cout << "The "<< input << " POND change to "<< dollar << " dollar.\n";
        break;
    case 'r':
        dollar = input * r_to_d;
        cout << "The "<< input << " RMB change to "<< dollar << " dollar.\n";
        break;
    case 'k':
        dollar = input * k_to_d;
        cout << "The "<< input << " DKK change to "<< dollar << " dollar.\n";
        break;    
    default:
        cout <<  "Sorry, I'm not able to convert currency " << input << '\n';
        break;
    }
    
    return 0;   
}