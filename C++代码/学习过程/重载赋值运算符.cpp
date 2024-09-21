#include <iostream>
using namespace std;
// 赋值运算符重载

class Person
{
public:
    Person(int age)
    {
        m_age = new int(age);
    }
    ~Person()
    {
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }
    // 编译器提供的是浅拷贝
    // 赋值运算符重载
    Person &operator=(Person &p)
    {
        // 判断是否有属性再堆区，如果有先释放干净，然后再深拷贝
        if (this->m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        // 新开辟一片空间，指针指向的值和参数指针指向的值相同
        this->m_age = new int(*p.m_age);
        //
        return *this;
    }
    int *m_age;
};
void test1()
{
    Person p1(18);
    cout << "p1的年龄为" << *p1.m_age << endl;

    Person p2(20);
    // 编译器提供的第四个函数是：重载后的类赋值运算符
    // 复制粘贴式的将一个类成员的东西赋值给另一个类成员，连开辟的地址也相同
    // 这样会导致析构函数释放地址时候重复释放
    Person p3(30);
    p3 = p2 = p1;
    cout << "p2的年龄为" << *p2.m_age << endl;
    cout << "p3的年龄为" << *p3.m_age << endl;
}
int main()
{
    test1();
    return 0;
}