#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
int main()
try {
    vector<int>v;
    for (int x; cin >> x;)
        v.push_back(x);
    for (int i = 0; i <= v.size(); i++)
        cout<< "v[" << i << "]==" << v[i] << '\n';
} 
catch(out_of_range)
{
    cerr << "Oops ! range error !\n";
    return 1;
}
catch(...)
{
    cerr << "Excpetion : something went wrong \n";
    return 2;
}