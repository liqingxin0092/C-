#include <iostream>
using namespace std;
// 运算符重载
class Person
{
public:
    Person()
    {
        this->m_age = 18;
        this->m_number = 1;
    }
    // 实现两个类相加
    // Person PersonAdd(Person &p)
    // {

    //     Person temp;
    //     temp.m_age = this->m_age + p.m_age;
    //     temp.m_number = this->m_number + p.m_number;
    //     return temp;
    // }
    // 编译器提供了这种名字
    // 使用的时候可以直接用加号
    Person operator+(Person &p)
    {

        Person temp;
        temp.m_age = this->m_age + p.m_age;
        temp.m_number = this->m_number + p.m_number;
        return temp;
    }
    // 运算符重载也可以发生函数重载（传的参数不同来复用函数名字）
    Person operator+(int a)
    {
        Person temp;
        temp.m_age = this->m_age + a;
        temp.m_number = this->m_number + a;
        return temp;
    }
    int m_age;
    int m_number;
};

//  全局函数也可以实现符号重载
// Person operator+(Person &p1, Person &p2)
// {

//     Person temp;
//     temp.m_age = p1.m_age + p2.m_age;
//     temp.m_number = p1.m_number + p2.m_number;
//     return temp;
// }
int main()
{
    Person p1;
    Person p2;
    // 成员函数本质调用
    // Person p4 = p1.operator+(p2);
    // 全局函数本质调用
    // Person p5 = operator+(p1, p2);
    // 都可以写成
    Person p3 = p1 + 10;
    cout << p3.m_age << "  " << p3.m_number << endl;
    return 0;
}