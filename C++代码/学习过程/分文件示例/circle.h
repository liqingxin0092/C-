#pragma once
#include <iostream>
using namespace std;
#include "point.h"
class Circle
{
public:
    // 设置圆心
    void SetCenter(Point Center);
    // 获取圆心
    Point GetCenter();
    // 设置半径
    void SetR(int r);
    // 获取半径
    int GetR();

private:
    int m_R;
    Point m_Center;
};