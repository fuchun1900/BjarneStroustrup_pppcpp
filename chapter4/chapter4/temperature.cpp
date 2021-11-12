#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    vector<double>temps;  //温度数组
    for (double temp; cin >> temp;)
        temps.push_back(temp);  //将数据压入vector

    //计算温度的均值
    double sum = 0;
    for (int x:temps)
        sum += x;
    cout << "Average temperature: "<< sum/temps.size() << '\n';

    //计算温度的中值
    sort(temps);
    cout << "Median temperature :" << temps[temps.size()/2] << '\n';
}