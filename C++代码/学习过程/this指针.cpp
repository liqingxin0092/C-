#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        // 1.解决名称冲突
        // this指针指向成员函数的调用者，是一个成员
        this->age = age;
    }
    int age;
    // 2.返回对象本身用*this,可以把函数当成类成员用
    Person &person_add_age(Person &p)
    {
        this->age += p.age;
        return *this;
    }
    // 如果返回的是值，返回的只是一个和函数调用者值相等的数的集合，但是在地址上毫无关联
    // 返回 值本身会调用一个拷贝构造函数，完全复制粘贴出来的和以前的数据在地址上无关联
};
void test01()
{
    Person p1(18);
    cout << "p1年龄=" << p1.age << endl;
    Person p2(10);
    // 链式编程思想
    p2.person_add_age(p1).person_add_age(p1).person_add_age(p1);
    cout << "p2年龄=" << p2.age << endl;
}
int main()
{
    test01();
    return 0;
}
