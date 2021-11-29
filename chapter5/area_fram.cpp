 //一个专门报告area错误的类

//在参数错误时抛出 Bad_area异常
int area(int length, int width)
{
    // Callee deals with errors (better)
   if (length <= 0 || width <= 0) throw Bad_area{};

    return length * width;
}
