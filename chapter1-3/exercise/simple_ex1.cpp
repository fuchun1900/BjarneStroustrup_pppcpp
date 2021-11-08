#include "std_lib_facilities.h"
int main()
{
    string firstname,friendname;
    char friend_sex = 0;
    int age = 0;

    cout <<"Enter the name of person you want to write to: ";
    cin >> firstname;  //输入名字
    cout << "Dear, " << firstname << "\n  How are you i am fine.i miss you.\n"  //ex2
         << "Enter your friends name :";
    cin >> friendname; //输入朋友名字
    cout << "Have you seen "<< friendname <<" lately?\n" //ex3
         << "Please enter the gender ,F for female M for male :";
    cin >> friend_sex;  //输入性别
    if (friend_sex == 'm')
        cout << "If you see "<<friendname <<" please ask him to call me.\n";
    else if (friend_sex == 'f')
        cout << "If you see "<<friendname <<" please ask her to call me.\n";
    else //错误输入
        cout << "Error input";
    cout << "Please enter the age: ";  //ex5
    cin >> age;
    if (age <= 0 || age >= 119)  //错误年龄
        simple_error("you'r kiding! \n");
    else
        cout << "I hear you just had a birthday and you are " << age <<" years old\n";
    if (age > 12) //ex6
        cout << "Next year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "Next year you will be vote\n";
    if (age > 70)
        cout << "I hope you are enjouying retirement.\n";
    cout << "Yours sincerely.\n\n" << firstname;  // ex7
    
    return 0;
}