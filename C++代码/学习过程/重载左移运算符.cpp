#include <iostream>
using namespace std;
// 左移运算符重载

class Person
{

    friend ostream &operator<<(ostream &a, const Person &p);

public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }

private:
    // 通常不会利用成员函数重载左移运算符
    // void operator<<(Person &p)
    // {
    // }

    int m_A;
    int m_B;
};

// 利用全局函数重载左移运算符
// cout必须传入引用，因为cout只能有一个
// 如果想要后面还能接<<,必须设置返回值为ostream &，并且返回
ostream &operator<<(ostream &a, const Person &p)
{
    a << "m_A=" << p.m_A << endl
      << "m_B=" << p.m_B;
    return a;
}
void test01()
{
    Person p(10, 18);
    cout << p << endl;
}
int main()
{
    test01();
    return 0;
}
// 总结：全局函数重载左移运算符，配合友元技术，可以实现输出自定义数据类型