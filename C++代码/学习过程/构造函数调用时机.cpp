#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "默认构造函数调用" << endl;
    }
    Person(int age)
    {
        m_Age = age;
        cout << "有参构造函数调用" << endl;
    }
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout << "拷贝构造函数调用,输出" << m_Age << endl;
    }
    ~Person()
    {
        cout << "析构函数调用" << endl;
    }

    int m_Age = 12;
};

// 1.使用一个已经创建完毕的对象来初始化一个新对象
void test0()
{
    Person p1(20);
    Person p2(p1);
    cout << "p2的年龄为" << p2.m_Age << endl;
}
// 2.值传递的方式给函数参数传值
void work0(Person p)
{
}
void test1()
{
    Person p;
    work0(p); // 这里函数形参会调用拷贝构造函数，把实参拷贝给了形参
}
// 3.以值方式返回局部对象
Person work1() // 值方式返回，不存在销毁，不是指针
{
    Person p1;
    return (Person)p1; // 加一个类型转换
}
void test2()
{
    Person p = work1();
}

int main()
{
    test2();
    return 0;
}
