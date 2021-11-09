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

//1.
//2 . cin>>
//3.int number;
//  cin >> number;
//4.换行符
//5.空白符
//6.空白符
//7. cout << "Hello, " << firstname <<"!\n";
//8.对象是保存特定值的内存单元
//9.字符串常量是双引号内的字符串
//10.字符和字符串
//11.为对象命名以后
//12. char 1字节 int 4字节 double 8字节
//13. 用字节数判断
//14. =是赋值符号  ==是相等符号
//15 定义是为一个对象声明类别，向系统申请内存大小，并赋值
//16.初始化是在定义时赋值，在程序中只能有一次，赋值是可以多次
//17. +字符串链接，将字符串合并在一起
//21.类型安全是指使用的对象符合他们的规定的类型
//22.因为double是8字节，int是4字节，会将小数点位数截断。造成精度误差
//23.当将大字节的值赋给小字节变量时是类型不安全的，小字节值赋给大字节变量时会隐式转换为大字节的值，是类型安全的
