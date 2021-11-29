#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
try
{
    //Cout << "Success!\n"; 首字母应该为小写
    //cout << "Success!\n;  缺少双引号
    //cout << "Sucess!" << !\n"; 缺少双引号
    //string res = 7 ;vector<int>v(10); v[5] = res; cout << "Success!"; 元素类型不符
    //if(cond) cout << "Success!\n"; else cout << "Fail!\n"; 变量未初始化
    //bool c = false ; if(c) cout << "Success!\n"; else cout << "Fail!\n"; 逻辑错误
    //string s = "ape"; boo c = "fool" > s;if(c) cout << "Success!\n"; //bool少了l;少了else导致没有输出
    //string s = "ape";if(s == "fool") cout << "Success!\n";少了else导致没有输出
    // string s = "ape";if(s == "fool") cout < "Success!\n"; 少了<
    //string s = "ape";if(s + "fool") cout << "Success!\n"; 逻辑判断符合错误；no viable conversion from 'std::__1::basic_string<char>' to 'bool'
    //vector<char>v(5); for(int i = 0;0 < v.size();i++);cout << "Success!\n"; 缺少循环体，逻辑判断有误，导致无限循环
    //vector<char>v(5); for(int i = 0;i <= v.size();i++){};cout << "Success!\n";正确
    //string s = "Success!\n"; for(int i = 0;i <= 6;i++) cout << s[i];cout << s.size(); 没有打印全
    //if(true) then cout << "Success!\n";else cout << "Fail!\n"; then非关键字
    //int x = 2000;char c = x;if(c == 256) cout << "Success!"; 窄化错误
    //string s = "Success!\n"; for(int i = 0; i <= 10;++i) cout << s[i]; 
    //if (true) cout << "Success!\n"; else cout << "Fail!\n";
    //vector v(5); for (int i = 0;i <= v.size();++i); cout << "Success!\n"; 未声明vector类型，缺少循环体
    //int i = 0;int j = 9;while (i<10) ++j; if(j < i) cout << "Success!\n"; while循环中条件判断有误导致无限循环
    //int x = 2; double d = 5/(x-2); if (d==2*(x+0.5)) cout << "Success!\n";除零错误
    //string<char>s = "Success!\n";for (int i = 0;i <= 10;i++) cout << s[i]; 多了char，i<10
    //int x = 4;double d = 5/(x-2);if(d = 2*x + 0.5) cout << "Success!\n"; 逻辑判断符应该用 ==
    cout << "Success!\n";
    keep_window_open();  //保持弹窗
    return 0;
}

catch(exception& e)
{
    cerr << "errpr: "<< e.what() << '\n';
    keep_window_open();
    return 1;
}
catch(...)  //其他错误
{
    cerr << "Oops:unknown exception\n";
    keep_window_open();
    return 2;
}
