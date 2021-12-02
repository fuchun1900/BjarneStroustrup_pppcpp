#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

vector<int> mondays;
vector<int> tuesdays;
vector<int> wednesdays;
vector<int> thursdays;
vector<int> fridays;
vector<int> saturdays;
vector<int> sundays;
static int reject = 0;
int handle_input(string day,int val);
void prt_vector(string day,vector<int>v);
int sum_vector(vector<int>v);
void prt_result(void);
int main()
try
{
    string weekday;
    int numbers;
    do
    {
        cout << "Enter weekday/value pairs, exit with 'q 0' : "<< endl;
        if(!(cin >> weekday >> numbers))
            error("Counld read the string and int.");  //如果输入格式错误则报错
    } while (handle_input(weekday,numbers)); //持续输入直到输入q 0
    prt_result();
    cout << "Bye";

    return 0;
}
catch(exception& e)
{
    cerr << "Have some problem: " << e.what() << endl;
    return -1;
}
catch(...)
{
    cerr << "Other problem."<< endl;
    return -2;
}

int handle_input(string day,int val)
{

    if (day=="Monday" || day=="monday" || day=="Mon" || day=="mon")
        mondays.push_back(val);
    else if (day=="Tuesday" || day=="tuesday" || day=="Tue" || day=="tue")
        tuesdays.push_back(val);
    else if (day=="Wednesday" || day=="wednesday" || day=="Wed" || day=="wed")
        wednesdays.push_back(val);
    else if (day=="Thursday" || day=="thursday" || day=="Thu" || day=="thu")
        thursdays.push_back(val);
    else if (day=="Friday" || day=="friday" || day=="Fri" || day=="fri")
        fridays.push_back(val);
    else if (day=="Saturday" || day=="saturday" || day=="Sat" || day=="sat")
        saturdays.push_back(val);
    else if (day=="Sunday" || day=="sunday" || day=="Sun" || day=="sun")
        sundays.push_back(val);
    else if (day=="q" && val==0)
        return 0; //退出时返回0进入main中的循环
    else
    {
        cout << "Can’t read ."<<endl;
        reject++;
    }
    return 1;
}

void prt_vector(string day,vector<int>v)
{
    cout << "(Sum of " << day << "): "<< sum_vector(v) << " elements ：";
    for (int items : v)
        cout << items << ' ';
    cout << endl;
}

int sum_vector(vector<int>v)
{
    int count = 0;

    for (int items : v)
        count += items;
    
    return count;
}
void prt_result()
{
    prt_vector("Monday",mondays);
    prt_vector("Tuesday",tuesdays);
    prt_vector("Wednesday",wednesdays);
    prt_vector("Thursday",thursdays);
    prt_vector("Friday",fridays);
    prt_vector("Saturdays",saturdays);
    prt_vector("Sunday",sundays);
    cout << reject << " values rejected\n";
    return ;
}