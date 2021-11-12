#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    const double y_to_d = 0.008774;
    const double e_to_d = 1.1462;
    const double p_to_d = 1.3392;
    double input,dollar;
    string money;

    cout << "Please enter the money you want to change to dollar(euro,yan and pond).\n";
    cin >> money >> input;
    if (money == "euro")
    {
        dollar = input * e_to_d;
        cout << "The  euro "<< input << " change to " << dollar<< "dollar.\n";
    }
    else if (money == "yan")
    {
        dollar = input * y_to_d;
        cout << "The  yan "<< input << " change to "<< dollar << "dollar.\n";
    }
    else if (money == "pond")
    {
        dollar = input * p_to_d;
        cout << "The  pond "<< input << " change to "<< dollar << "dollar.\n";
    }
    else
        cout << "Sorry, I'm not able to convert currency " << input << '\n';
    
    return 0;   
}