#include <iostream>
using namespace std;
class Cube
{
private:
    int m_length;
    int m_width;
    int m_high;

public:
    void SetLength(int length)
    {
        m_length = length;
    }
    int GetLength()
    {
        return m_length;
    }
    void SetHigh(int high)
    {
        m_high = high;
    }
    int GetHigh()
    {
        return m_high;
    }
    void Setwidth(int width)
    {
        m_width = width;
    }
    int Getwidth()
    {
        return m_width;
    }
    int GetS()
    {
        return 2 * (m_width * m_length + m_width * m_high + m_high * m_length);
    }
    int GetV()
    {
        return m_length * m_width * m_high;
    }
    // 类内部函数判断
    bool is_same(Cube &c)
    {
        if (m_width == c.Getwidth() && m_high == c.GetHigh() && m_length == c.GetLength())
            return true;
        else
            return false;
    }
};
// 全局函数判断是否相等
bool is_Same(Cube &c1, Cube &c2)
{
    if (c1.Getwidth() == c2.Getwidth() && c1.GetLength() == c2.GetLength() && c1.Getwidth() == c2.Getwidth())
        return true;
    else
        return false;
}

int main()
{
    Cube c1;
    c1.SetHigh(3);
    c1.SetLength(4);
    c1.Setwidth(5);
    Cube c2;
    c2.SetHigh(3);
    c2.SetLength(4);
    c2.Setwidth(5);
    cout << is_Same(c1, c2) << endl;
    cout << c1.is_same(c2) << endl;
    cout << c1.GetV() << endl;
    cout << c1.GetS() << endl;
    return 0;
}
