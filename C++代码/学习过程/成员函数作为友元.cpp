#include <iostream>
using namespace std;

// 注意类与类之间的先后顺序，作必要的声明
//  成员函数作友元
class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();  // 让visit访问Building中私有成员
    void visit2(); // 让visit2不可以访问Building中私有成员
    Building *building;
};

class Building
{
    // 告诉编译GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
    friend void GoodGay::visit();

public:
    Building();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

// 类外实现成员函数
Building::Building()
{
    m_BedRoom = "卧室";
    m_SittingRoom = "客厅";
}
GoodGay::GoodGay()
{
    building = new Building;
}
void GoodGay::visit()
{
    cout << "visit" << "访问" << building->m_SittingRoom << endl;
    cout << "visit" << "访问" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
    cout << "visit" << "访问" << building->m_SittingRoom << endl;
    // cout << "visit" << "访问" << building->m_BedRoom << endl;
}
void test1()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}
int main()
{
    test1();
    return 0;
}