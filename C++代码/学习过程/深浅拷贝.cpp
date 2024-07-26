#include <iostream>
using namespace std;
// 1.深拷贝与浅拷贝问题
// 默认拷贝构造函数会完全原封不动的赋值粘贴，连指针的值也完全一致。这就是浅拷贝
// 释放空间时会导致重复释放
class Person
{
public:
    Person()
    {
        cout << "默认构造函数" << endl;
    }
    Person(int age, int height)
    {
        m_age = age;
        cout << "有参构造函数" << endl;
        m_height = new int(height);
    }
    Person(const Person &p)
    {
        m_age = p.m_age;
        // m_height = p.m_height; // 编译器的默认默认实现，指针值也是简单的复制,属于浅拷贝
        // 深拷贝操作
        m_height = new int(*p.m_height);
        cout << "有参构造函数" << endl;
    }
    ~Person()
    {
        if (m_height != NULL)
        {
            delete m_height;
            m_height = NULL;
        }
        cout << "析构函数" << endl;
    }
    int m_age;
    int *m_height;
};
// 总结：如果属性有在堆区开辟的，要自己提供拷贝构造函数进行深拷贝，并且在析构函数中释放内存，防止浅拷贝带来的问题
void test1()
{
    Person p1(18, 160);
    cout << "p1的年龄为" << p1.m_age << "身高" << *p1.m_height << endl;
    Person p2(p1);
    cout << "p2的年龄为" << p2.m_age << "身高" << *p2.m_height << endl;
}
int main()
{
    test1();
    return 0;
}
