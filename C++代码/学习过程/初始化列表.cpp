#include <iostream>
using namespace std;
class Person
{
public:
    // 传统初始化
    //  Person(int a, int b, int c)
    //  {
    //      m_a = a;
    //      m_b = b;
    //      m_c = c;
    //      cout << "有参构造函数" << endl;
    //  }

    // 初始化列表形式1
    // Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c)
    // {
    // }
    // 初始化列表形式2
    Person() : m_a(30), m_b(20), m_c(10)
    {
    }
    Person(const Person &p)
    {

        cout << "有参构造函数" << endl;
    }
    ~Person()
    {
        cout << "析构函数" << endl;
    }
    int m_a;
    int m_b;
    int m_c;
};
void test01()
{
    // 初始化列表形式1
    // Person p(30, 20, 10);
    // 初始化列表形式2
    Person p;
    cout << "m_a=" << p.m_a << endl;
    cout << "m_b=" << p.m_b << endl;
    cout << "m_c=" << p.m_c << endl;
}
int main()
{
    test01();
    return 0;
}
