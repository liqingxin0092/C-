#include <iostream>
using namespace std;

class Phone
{
public:
    Phone(string pName)
    {
        m_pName = pName;
        cout << "手机构造" << endl;
    }
    ~Phone()
    {
        cout << "手机的析构函数调用" << endl;
    }
    // 手机品牌名称
    string m_pName;
};
// 人类
class Person
{
public:
    // 1.所有成员共享同一份数据
    // 2.编译阶段分配内存
    // 3.类内声明
    static int m_A;

    // 静态成员变量也有访问权限
private:
    static int m_B; // 私有权限类外访问不到
};
// 类外初始化
int Person::m_A = 10;
int Person::m_B = 20;

void test01()
{
    Person p;
    cout << p.m_A << endl;

    // 共享一份数据
    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl;
}
void test2()
{
    // 静态成员变量，不属于某一个对象，所有对象共享同一份数据
    // 所以有两种方式方式：
    // 1.通过对象进行访问
    Person p;
    cout << p.m_A << endl;
    // 2.用类名访问
    cout << Person::m_A << endl;
    // cout << Person::m_B << endl;
}
int main()
{
    test2();
    return 0;
}
