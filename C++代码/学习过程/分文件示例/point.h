#pragma once
#include <iostream>
using namespace std;
class Point
{
public:
    // 公共接口
    // 设置y坐标
    void SetY(int y);
    // 获取y坐标
    int GetY();
    // 设置x坐标
    void SetX(int x);
    // 获取x坐标
    int GetX();

private:
    int m_X;
    int m_Y;
};