#include <iostream>
using namespace std;

// 静态成员函数
// 1.所有对象共享同一个函数
// 2.静态成员函数只能访问静态成员变量
class Person
{
public:
    static void func()
    {
        m_A = 10;
        // m_B = 250;//只能访问静态成员变量，函数无法区分改变了哪个成员的非静态变量
        cout << "static void func调用" << endl;
    }
    static int m_A;
    int m_B = 200; // 非静态成员变量 ，必须通过对象进项访问
private:           // 类外无法访问
    static void func1()
    {
        cout << "static void func1调用" << endl;
    }
};

int Person::m_A = 10;
void test01()
{
    // 1.通过对象进行访问
    Person p;
    p.func();
    // 2.通过类名进项访问
    Person::func();
    // 3.
    // Person::func1();
}
int main()
{
    test01();
    return 0;
}
