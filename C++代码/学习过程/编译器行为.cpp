#include <iostream>
using namespace std;
// 1.创建一个类，c++编译器会给每个类都至少添加3个函数
// 默认构造函数（空实现）
// 析构函数（空实现）
// 拷贝构造（值拷贝）
// 2.如果写了有参构造函数，编译器不会提供默认构造函数，依然提供拷贝构造函数
// 3.如果写了拷贝构造函数，编译器不再提供构造函数
class Person
{
public:
    // Person()
    // {
    //     std::cout << "默认构造函数调用" << endl;
    // }
    Person(int age)
    {
        m_age = age;
        cout << "有参构造函数调用" << endl;
    }
    Person(const Person &p)
    {
        m_age = p.m_age;
        cout << "拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }
    int m_age;
};

void test1()
{
    Person p(18); // 在用户写了有参构造函数的情况下，默认构造函数不会由编译器生成，如果用户也没写的话会报错
    Person p2(p); // p2拷贝了p的某些属性
    cout << "p2的年龄为" << p2.m_age << endl;
}
int main()
{
    test1();
    return 0;
}
