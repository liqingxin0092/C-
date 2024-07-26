#include "circle.h"
    // 设置圆心
    void Circle::SetCenter(Point Center)
    {
        m_Center = Center;
    }
    // 获取圆心
    Point Circle::GetCenter()
    {
        return m_Center;
    }
    // 设置半径
    void Circle::SetR(int r)
    {
        m_R = r;
    }
    // 获取半径
    int Circle::GetR()
    {
        return m_R;
    }
