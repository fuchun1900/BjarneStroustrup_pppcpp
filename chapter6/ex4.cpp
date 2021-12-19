#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

class Name_value
{
    public:
        string key;
        double value;
        Name_value(string st, double val)     // make a Token from a char and a double
            :key(st),value(val) { }
};

int main()
{
    vector<Name_value>vect;

    cout << "Please enter string and value,enter NoMore 0 to quit:";
    do
    {
        double val;
        string name;
        bool repeat = false;
        cin >> name >> val;
        if (name == "NoMore" && val == 0)  //如果名字时NoMore且成绩为0则退出
            break;
        Name_value vc = Name_value{name,val};
        for(Name_value item : vect)
        {
            if (item.key == vc.key)
            {
                cout << "Duplicate input ." << endl;
                repeat = true;
            }              
        }
        if (!repeat || vect.size() == 0 )
            vect.push_back(vc);
    } while (true);
    cout << "Result:" << endl;
    for(Name_value item : vect)
        cout << item.key << '\t';
    cout << '\n';
    for(Name_value item : vect)
        cout << item.value << '\t';
    
    return 0;
}