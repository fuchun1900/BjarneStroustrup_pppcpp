#include "/Users/fuchun/Document/c++_language_project/pppc++/std_lib_facilities.h"
class Bad_area{};
int area(int length, int width);
int framed_area(int x, int y);

int main()
try {
        int x = -1;
        int y = 2;
        int z = 4;

        int area1 = area(x, y);
        int area2 = framed_area(1, z);
        int area3 = framed_area(y, z);
        double ratio = area1 / area3;
    }
catch(Bad_area)
{
    cout << "Opps ! bad arguments !\n";
}

int framed_area(int x, int y)
{
    constexpr int frame_width = 2;

    return area(x - frame_width, y - frame_width);
}