#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
#define LEN 4
class Num_range{};
int main()
try
{
    vector<int>answer;
    vector<int>guess;
    int figure = 0;int figure_posiont = 0;

    srand((unsigned)time(NULL));  //用时间戳生成随机种子
    for (size_t i = 0 ; i < LEN; ) 
    {
        bool duplicate = false; //是否重复数
        int temp = rand() % 10;   //生成随机数
        for (size_t j = 0; j < i; j++)
        {
            if (answer[j] == temp)
            {
                duplicate = true;  //如果查到重复则退出内层循环
                continue;
            }
        }
        if (!duplicate) //如果不重复的话则压入数组
        {
            answer.push_back(temp);
            i++; //进入下一循环
        }
    }
    for (int items :answer )
        cout << items << ' ' ;  //用于测试
    
    do
    {
        figure = 0;  //重置计数器
        figure_posiont = 0;
        cout << "\nPlease enter your 4 number  split with spaces (0-9):\n";
        for (size_t i = 0; i < LEN; i++)
        {
            int input;
            
            cin >> input;
            if (input > 9 || input < 0)
                throw Num_range{};
            guess.push_back(input);
        }
        for (size_t i = 0; i < LEN; i++)
        {
            for (size_t j = 0; j < LEN; j++)
            {
                if (guess[i] == answer[j] && i == j) //数值相同且位置相同
                {
                    figure_posiont++;
                    break;
                }
                else if(guess[i] == answer[j])  //仅数值相同
                {
                    figure++;
                    break;
                }
            }
        }
        cout << figure_posiont << " " << figure << endl;
        cout  << figure_posiont << " BULL and "<< figure << " COW !" << endl;

        guess.clear(); //清空数组
    } while (figure_posiont != LEN);
    cout << "Bingo!";

    return 1;
}
catch(exception& e)
{
    cerr <<"Occur error : " << e.what() << endl;
    return 0;
}
catch(Num_range)
{
    cerr << "Please enter range of 0 - 9 !\n";
    return -1;
}
catch(...)
{
    cerr << "Unknown error !\n";
    return -2;
}

