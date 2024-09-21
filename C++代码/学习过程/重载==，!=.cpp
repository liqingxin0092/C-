#include <iostream>
using namespace std;
// 关系运算符重载
// 编译器不知道自定义数据类型如何比较
class Person
{
public:
    Person(string name, int age)
    {
        m_age = age;
        m_name = name;
    }
    ~Person()
    {
    }
    // 重载==号
    bool operator==(Person &p)
    {
        if (this->m_age == p.m_age && this->m_name == p.m_name)
            return true;
        else
            return false;
    }
    bool operator!=(Person &p)
    {
        if (this->m_age == p.m_age && this->m_name == p.m_name)
            return false;
        else
            return true;
    }
    string m_name;
    int m_age;
};
void test1()
{
    Person p1("tom", 18);
    Person p2("tom", 17);
    if (p1 != p2)
    {                                                        
        cout << "p1和p2不相等的" << endl;
    }
    else
        cout << "p1和p2相等" << endl;
}
int main()
{
    test1();
    return 0;
}