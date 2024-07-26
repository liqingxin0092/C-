#include <iostream>
using namespace std;
#include "point.h"
#include "circle.h"
void is_in_circle(Circle &circle, Point &point)
{
    // 计算两点间距离平法
    int dis2 = (circle.GetCenter().GetX() - point.GetX()) * (circle.GetCenter().GetX() - point.GetX()) + (circle.GetCenter().GetY() - point.GetY()) * (circle.GetCenter().GetY() - point.GetY());
    // 计算半径平方
    int r2 = circle.GetR() * circle.GetR();
    // 判断关系
    if (r2 > dis2)
        cout << "点在圆内" << endl;
    else if (r2 < dis2)
        cout << "点在圆外" << endl;
    else
        cout << "点在圆上" << endl;
}
int main()
{
    //创建圆
    Circle c;
    c.SetR(10);
    Point center;
    center.SetX(0);
    center.SetY(0);
    c.SetCenter(center);
    //创建点
    Point p;
    p.SetX(0);
    p.SetY(20);
    //判断关系
    is_in_circle(c,p);
    return 0;
}
