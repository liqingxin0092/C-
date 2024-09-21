#include <iostream>
using namespace std;
// 友元：声明一些特殊的函数和一个特殊的类，作为另一个类的好朋友，访问到这一类的私有成员。
// 关键字friend
// 全局函数做友元
class Building
{ // 这个全局函数是Building类友元
    friend void goodGay(Building &a);

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_Bedroom = "卧室";
    }

public:
    string m_SittingRoom; // 客厅

private:
    string m_Bedroom; // 卧室
};
// 全局函数
void goodGay(Building &a)
{
    cout << "goodGay" << ",全局函数正在访问" << a.m_SittingRoom << endl;
    cout << "goodGay" << ",全局函数正在访问" << a.m_Bedroom << endl;
}
void test()
{
    Building building;
    goodGay(building);
}

int main()
{
    test();
    return 0;
}
