#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    int total = 0; int items = 0; 
    const double micro = 1.0/100;  //差值衡量
    const double cm_to_m = 0.01;
    const double in_to_m = 0.0254;
    const double ft_to_m = 0.0254*12;
    double a,b,diff,min,max,ans = 0;
    vector<double>vals;
    string unit;

    cout << "Please enter number and unit ,press '|' to terminate.\n";
    /*
    while (cin >> a)
    {
        if (a == b)
        {
            cout << "The number are equal\n";
            continue;
        }
        
        diff = abs(a - b);
        (a<b)? cout << "The smaller values Is : " << a << '\n' :
               cout << "The smaller values Is : " << b << '\n';
        (a>b)? cout << "The larger values Is : " << a << '\n' :
               cout << "The larger values Is : " << b << '\n';
        if (diff < micro)  // 如果小于micro就输出近乎相等
           cout << a << " and "<< b <<" are almost equal.\n";
    }
    */
   // 在for循环中初始化最大值最小值，在递增语句中清空字符串并重新输入；在判断条件中检测字符串是否为空，为空结束循环。
   for (cin >> a >> unit , min = a , max = a ;!(unit.empty());unit.clear(),cin >> a >> unit)
   {
       if (unit == "cm")  //转换为米
        {
            ans = a * cm_to_m;
            cout << a << "cm" << " == " << ans <<" m\n";
        }
        else if (unit == "in")
        {   
            ans = a * in_to_m;
            cout << a << "inch" << " == "<< ans <<" m\n";
        }
        else if (unit == "ft")
        {
            ans = a * ft_to_m;
            cout << a << " == "<< ans <<" inch\n";
        }
        else if (unit == "m")
        {
            ans = a;
            cout << ans << "m" <<'\n';
        }
        else
        {
            cout << "invalid unit\n";       
            continue;
        }  
        if (a < min)
        {
            min = a;
            cout << " The smallest so far.\n";
        }
        if (a > max)
        {
            max = a;
            cout << " The largest so far.\n";
        }
        vals.push_back(ans);
        items ++;  //次数加一
        total += ans;
   }
    sort(vals.begin(),vals.end());
    cout << "The list of input for sort:" << endl; //从小到大打印vector
    for (double x : vals)
        cout << x << '\t';
    cout <<'\n';
    cout << "The smalleset number is : "<< min <<'\n'
         << "The largest number is : "<< max <<'\n'
         << "Number of values are : "<< items <<'\n'
         << "Sum of values are : "<< total <<'\n';

    return 0;
}

//思考题
//1.计算是用从一些输入中产生输出的行为
//2.输入是参数，输出是计算后得到的值 如 输入 2，3 幂运算 等到 8
//3.正确、简单、效率
//4.表达式是用于计算的一组语句
//5.表达式是用来求值，语句包含声明和定义
//6.左值储存运算结果的变量，或赋值  =  += -= 等，是可修改的值
//7.常量表达式 是由常数或符号常量组成的
//8.字面常量就是用阿拉伯数字或其他字符串
//9.符号常量是命名过的的字面常量
//10.用来计算的科学计数，如exp
//11.加减乘除
//12.取模
//13.大小与相等
//14.switch当选择分支过多且判断条件能使用整数或字符类型时
//15.漏了break导致会执行其他分支，switch值不能是字符串，case语句的值必须是常量而不能是变量
//16.for循环语句保护初始值，判断语句，递增语句。
//先初始值后，如判断为真则执行循环体，循环结束，执行递增语句，再进行下一次判断
//17.当循环次数固定或者需要初始变量可以用for，其他情况用while
//18.利于类型转换（int)
//19.函数名为foo，接受int类型参数，返回char类型的值
//20.当有有操作需要多次执行时，用函数可以增加耦合度。
//21.除了加号以外的运算符
//22.字符串可以连接，数字型变量不可以
//23.vector[2]
//24.for(类型x : vector) cout < x
//25.创建一个26个字符的数组，并初始化为‘’
//26.将数据从vecot尾部推入
//27.返回vecot的大小
//28.可以收集储存相同类型的值 ，在处理数组时比c语言数组方便，因为不需要提供指针和数组大小
//29.使用sort(vector.begin(),vector.end())