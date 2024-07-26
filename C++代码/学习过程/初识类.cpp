#include <iostream>
using namespace std;

const double pi = 3.14;
#define PI 3.14
class Circle
{

    // 权限
    // 公共权限
public:
    // 属性
    // 半径
    int m_r;
    // 行为
    // 获取周长
    double calc_C()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    // 通过圆类创建一个具体的圆(对象)
    // 实例化（通过一个类创建一个对象）
    Circle c1;
    // 对圆对象的半径赋值
    c1.m_r = 10;
    cout << "圆的周长为" << c1.calc_C() << endl;
    return 0;
}
