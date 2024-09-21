#include <iostream>
using namespace std;
// 继承语法：class 子类: 继承方式 父类
// 继承方式：公共继承，保护继承，私有继承
// 父类中可以有它的公共，保护，内容
// 父类中的私有内容，子类无论用何种继承方式都无法继承到这个私有内容
// 子类以公共方式访问：原公共还是公式，原来保护还是保护，私有继承不到
// 子类以保护方式访问：原公共是保护，原来保护还是保护，私有继承不到
// 子类以私有方式访问：原公共是私有，原来保护还是私有，私有继承不到
class Base
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
// 公共继承
class Son1 : public Base
{
public:
    void func()
    {
        m_a = 10; // 父类中公共权限内容拿到手了，依然是公共权限
        m_b = 10; // 也可以访问，到子类依然保护权限
                  // m_c = 10; // 私有成员不可以访问
    }
};
void test1()
{
    Son1 s;
    s.m_a = 4;
    //  s.m_b = 5;//保护权限内容类外访问不到
}
// 保护继承
class Son2 : protected Base
{
public:
    void func()
    {
        m_a = 10; // 保护权限
        m_b = 10; // 保护权限
                  // m_c = 10; // 私有成员不可以访问
    }
};
void test2()
{
    Son2 s1;
    // s1.m_a = 5;//都类外访问不到，都保护权限
    // s1.m_b = 5;
}
class Son3 : private Base
{
public:
    void func()
    {
        m_a = 5; // 这俩都是私有的
        m_b = 5;
    }
};
void test3()
{
    Son3 s0;
    // s0.m_a = 5; // 私有类外访问不到
    // s0.m_b = 6;
}
class GrandeSon : public Son3
{
public:
    void func()
    {
        // m_a = 15;//因为Son3类中这两个是私有的所以访问不到
        // m_b = 15;
    }
};
int main()
{
    test1();
    return 0;
}