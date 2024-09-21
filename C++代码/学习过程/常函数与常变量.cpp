#include <iostream>
using namespace std;
// const修饰成员函数
// 常函数：就是普通函数加个const，常函数内不可修改成员属性
// 成员属性声明时加关键字mutable后，在常函数中依然可以修改

// 常对象，声明对象前加个const
// 常对象只能调用常函数
class Person
{
public:
    // this指针的本质是指针常量，指针的指向不可以修改
    // 在成员函数后加const，修饰了指针指向，让指针指向的值也不可以修改
    Person()
    {
    }
    void showPerson() const
    {
        this->m_B = 100;
        // this->m_A = 100;
        cout << m_B << endl;
        // this = NULL;
    }
    void func()
    {
    }
    int m_A;
    mutable int m_B; // 特殊变量，及时在const函数中也可以修改,加关键字mutable
};
void test()
{
    const Person p;
    // p.m_A = 100;
    p.m_B = 100;

    // 常对象只能调用常函数
    // 双方约定都只读,mutable除外
    p.showPerson();
    // 因为普通函数可以修改值
    // p.func();
}

void test01()
{
    Person p2;
    p2.showPerson();
}
int main()
{
    test01();
    return 0;
}
