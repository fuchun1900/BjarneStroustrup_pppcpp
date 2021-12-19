#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

/*
Exercise #5
GRAMMAR
=======
Sentence:
    Noun Verb
    Article Noun Verb
    Sentence Conjunction Sentence
Conjunction:
    "and"
    "or"
    "but"
Noun:
    "birds"
    "fish"
    "C++"
Verb:
    "rules"
    "fly"
    "swim"
Article:
    "the"
*/
string Sentence();

class String_stream
{
    public:
        string get();
        void putback(string s);
    private:
        bool full = false;
        string buffer = "";
};

string String_stream::get()
{
    if(full)
    {
        full = false;
        return buffer;  //缓冲区满则提取缓冲区数
    }
    string s;
    cin >> s;

    return s;
}

void String_stream::putback(string s)
{
    if(full) error ("Buffer is full ,put back failed.");  //如果缓冲区满报错
    buffer = s;
    full = true;
}

String_stream ss;

bool Conjunction()
{
    vector<string>conj = { "and", "or", "but" };
    bool found = false;
    string word = ss.get();
    for(string item : conj)
    {
        if (item == word)
        {
            found = true;
            break;
        }
    }
    if(!found)
        ss.putback(word);  //没找到的话返回缓冲区
    return found;
}

bool Noun()
{
    vector<string>noun = { "birds", "fish", "C++" };
    bool found = false;
    string word = ss.get();
    for(string item : noun)
    {
        if (item == word)
        {
            found = true;
            break;
        }
    }
    if(!found)
        ss.putback(word);  //没找到的话返回缓冲区
    return found;
}

bool Verb()
{
    vector<string>verb = { "rules", "fly", "swim" };
    bool found = false;
    string word = ss.get();
    for(string item : verb)
    {
        if (item == word)
        {
            found = true;
            break;
        }
    }
    if(!found)
        ss.putback(word);  //没找到的话返回缓冲区
    return found;
}

bool Article()
{
    vector<string>conj = { "the" };
    bool found = false;
    string word = ss.get();
    if (conj[0] == word)
        found = true;
    else
        ss.putback(word);  //没找到的话返回缓冲区
    return found;
}

bool sentence()
{
    if ((Noun() || (Article() && Noun())) && Verb())
    {
        if(Conjunction())
            sentence();
        return true;
    }
    else
        return false;   
}

int main()
{
    cout << "PLease enter the sentence ,end with .";
    if (sentence())
    {
        string s = ss.get();
        if (s == ".")
            cout << "OK!\n";
    }
    else
        cout << "Not OK!\n";
}