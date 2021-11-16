#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

int main()
{
    vector <double> dist;
    double max = 0, min = 0, avg = 0,total = 0;
    int i;

    cout << "Please enter the distence,press | to termanate :";
    for(double input; cin >> input ;)
        dist.push_back(input);       
    for (i = 0 ,min = dist[0] ,max = dist[0]; i < dist.size(); i++)
    {
        if (dist[i] < min)
            min = dist[i];
        else if(dist[i] > max)
            max = dist[i];
        total += dist[i];
        avg = total/dist.size();
    }
    cout << "The max distence are " << max << endl;
    cout << "The minimum distence are " << min << endl;
    cout << "The average distence are "<< avg <<endl;
    
    return 0;
}