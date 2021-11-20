#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

char figuer_c(void);
void opt(char,char);
int main()
{
    char pass,repass;

    cout << "Please pass 'S,R,P'，enter q to end ."<< endl;
    while ((pass = getchar()) != 'q')
    {
        while (getchar() != '\n')  //去掉换行符
            continue;
        repass = figuer_c();  //电脑猜拳
        cout <<"You pass "<< pass << '\t'<< " The computer pass "<< repass << endl;
        opt(pass,repass);
        cout << "Please pass 'S,R,P'，enter q to end ."<< endl;
    }
    cout << "Thank you for playying ."<< endl;

    return 0;
}

char figuer_c(void)
{
    char watchout;
    vector<char>reference = {'S','R','P'};  //vector来保存三个结果

    srand((unsigned)time(0));
    watchout = reference[rand()%3];  //用随机数索引猜拳结果
    
    return watchout;
}

void opt(char pass ,char repass)
{
    static int win = 0;  //静态局部变量来保存比赛结果
    static int loss = 0;
    static int tie = 0;


    switch (pass)
    {
    case 'S':
        if (repass == 'P')
        {
            win ++;
            cout << "Player WIN ! "<< endl;
            cout << "Number of Wins  : "<< win << endl;
        }
        else if (repass == 'R')
        {
            loss ++;
            cout << "Computer WIN ! "<< endl;
            cout << "Number of Loss: "<< loss << endl;
        }
        else
        {
            tie ++;
            cout << "Tie games ! "<< endl;
            cout << "Tie numbers : "<< tie << endl;
        }
        break;
    case 'R':
        if (repass == 'S')
        {
            win ++;
            cout << "Player WIN ! "<< endl;
            cout << "Number of Wins  : "<< win << endl;
        }
        else if (repass == 'P')
        {
            loss ++;
            cout << "Computer WIN ! "<< endl;
            cout << "Number of Loss: "<< loss << endl;
        }
        else
        {
            tie ++;
            cout << "Tie games ! "<< endl;
            cout << "Tie numbers : "<< tie << endl;
        }
        break;
    case 'P':
        if (repass == 'R')
        {
            win ++;
            cout << "Player WIN ! "<< endl;
            cout << "Number of Wins  : "<< win << endl;
        }
        else if (repass == 'S')
        {
            loss ++;
            cout << "Computer WIN ! "<< endl;
            cout << "Number of Loss: "<< loss << endl;
        }
        else
        {
            tie ++;
            cout << "Tie games ! "<< endl;
            cout << "Tie numbers : "<< tie << endl;
        }
        break;
    default:
        cout << " Illegal input ."<< endl;
        break;
    }
}