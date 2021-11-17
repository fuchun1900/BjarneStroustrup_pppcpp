#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"

void gue(char *);
void bigger(int *,int *,int );
void smaller(int *,int *,int );

int main()
{
    int count = 0 ,top = 100, bottom = 1,guest = 0;
    char y_or_n;

    srand((int)time(0));
    guest = rand() % 100;
    cout << "I guess the number is :  "<< guest << " Is thar right?\n" << "y/n" << endl;
    gue(&y_or_n);
    if (y_or_n == 'y')
    {
        cout << "Yes i get it !" << endl;

        return 0;
    }
    while (count++ < 7 )
    {
        cout << "Is that number bigger than " << guest << endl;
        gue(&y_or_n);
        if (y_or_n == 'y')
        {
            bigger(&guest,&bottom,top);
            cout << "I guess the number is :  "<< guest << " Is thar right?\n" << "y/n" << endl;
        }
        else
        {
            smaller(&guest,&top,bottom);
            cout << "I guess the number is :  "<< guest << " Is thar right?\n" << "y/n" << endl;
        }
        gue(&y_or_n);
        if (y_or_n == 'y')
        {
            cout << "Yes i get it !" << endl;

            return 0;
        }
    }
    cout << " End of seven opportunities ， You didn't guess." << endl;

    return 0;
}

void gue(char * y_or_not)
{
    cin  >> *y_or_not;
    while (*y_or_not != 'y' && *y_or_not != 'n')
    {
        cout << "Illegal input ,plese press y or n ." << endl;
        cin  >> *y_or_not;
    }
}

//如果实际的数大于猜数，则取猜的数后面的数到最大的数当中的数
void bigger(int  * guest,int * bottom,int top)
{
    *bottom = *guest + 1; 
    *guest = (*bottom + top)/2;
}
//如果实际的数小于猜数，则最小的数到猜的数之前的数当中的数
void smaller(int  * guest,int  * top,int bottom)
{
    *top = *guest - 1;
    *guest = (*top + bottom)/2;
}