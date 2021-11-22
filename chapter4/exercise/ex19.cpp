#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
void find_for_name(string);
void find_for_score(double);
static vector<string>names;  //设置全局变量
static vector<double>scores;
int main()
{

    string name;
    double score = 0; 
    int select;

    cout << "Please enter the name ande score : "<< endl;
    while (cin >> name >> score, (name != "NoMore" && score != 0))  //当姓名为NoMore且成绩为0时终止输入
    {
        bool Duplicate = false;
        for (string item : names)
        {
            if (item == name)
            {
                cout << "Duplicate input ." << endl;
                Duplicate = true;
                break;
            }
        }
        if (!Duplicate)  //当名字重复时不允许输入
        {
            names.push_back(name);
            scores.push_back(score);
        } 
    }
    
    for (string item : names)
        cout << item << '\t';
    cout << '\n' << "----------------------------------------------------" << '\n';
    for (int item : scores)
        cout << item << '\t';
    cout << "\nQuery mode : \n";   //设置查询模式
    cout << "1.  Find with score    2.  Find with name     0. Quit \n";
    while (cin >> select)
    {
        switch (select)
        {
        case 1:
            cout << "Please enter score : " << endl;
            cin >> score;
            find_for_score(score);
            break;
        case 2:
            cout << "Please enter name : " << endl;
            cin >> name;
            find_for_name(name);
            break;
        case 0:
            cout << "Bye !" << endl;
            return 0;
        default:
            cout << " Please enter a number in the range( 1 ,2 ,0 ) !" << endl;
            break;
        }
        cout << "1.  Find with score    2.  Find with name     0. Quit \n";
    }
    return 0;
}

void find_for_score(double score)
{
    bool exits = false;

    for (size_t i = 0; i < scores.size(); i++)
    {
        if (score == scores[i])
        {
            cout << names[i] << " : " << scores[i] << endl;
            exits = true;
        }
    }
    if (!exits)
        cout << "Score not found\n";
}

void find_for_name(string s)
{
    for (size_t i = 0; i < scores.size(); i++)
    {
        if (s == names[i])
        {
            cout << names[i] << " : " << scores[i] << endl;
            return;
        }
    }
    cout << "Name not found\n";
}