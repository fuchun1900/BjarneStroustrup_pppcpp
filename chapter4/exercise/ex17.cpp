#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    vector<string>hashmap;
    string mode,input;
    int max = 0;

    while (cin >> input)
        hashmap.push_back(input);
    
    for (string items : hashmap)
        cout << items << endl;

    sort(hashmap.begin(),hashmap.end());
    size_t lenght = hashmap.size();
    cout << "The biggest string is "<< hashmap[lenght - 1] << endl;
     cout << "The smallest string is "<< hashmap[0] << endl;

     for (size_t i = 0,count = 1; i < hashmap.size() -1 ; i++)
     {
         if (hashmap[i] == hashmap[i + 1])
         {
            count ++;  //两个相邻的字符串相等的情况下计时器加一
            if (count > max)
            {
                max = count;  //大于max时则将max记为该数
                mode = hashmap[i + 1];  //设置众数
            }
         }
         else
            count = 1;  //如果不想等，重置计数器为0
     }
     
    cout << "The mode string is "<< mode << " It's appear "<< max << " times ."<< endl;

    return 0;
}