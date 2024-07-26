#include <iostream>
using namespace std;

// 对象的初始化和清理
class Person
{
public:
    // 构造函数
    // 按照参数分类：有参构造和无参构造(也叫默认构造)
    // 按类型分为：普通构造  和  拷贝构造
    Person() // 无参构造(也叫默认构造)
    {
        cout << "默认构造函数的调用" << endl;
    }
    Person(int a) // 有参构造
    {
        age = a;
        cout << "有参构造函数的调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &a) // 拷贝构造，只要参数不是这样的都叫普通构造函数
    {
        // 将传入的人身上所有属性，拷贝到我身上
        age = a.age;
        cout << "拷贝构造函数的调用" << endl;
    }
    // 析构函数

    ~Person()
    {
        cout << "析构函数调用" << endl;
    }

private:
    int age;
};
// 调用
void test()
{
    // 1.括号法

    //  Person p1;     // 调用了默认构造函数，注意不能加括号，会被认为函数声明
    // Person p2(10); // 有参构造函数
    //  Person p3(p2); // 调用拷贝构造函数

    // 2.显式法
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);

    Person(10); // 匿名对象  特点：当前行执行结束后，系统立即回收掉匿名对象

    // 注意：不能使用拷贝构造函数初始化匿名对象 因为 Person (p2)  起始就是 Person p2  括号不被认为是函数操作符，被编译器当成对象声明

    //  3.隐式转换法
    Person p4 = 10; // 相当于Person p4= Person(10)
    Person p5 = p4; // 相当于Person p5= Person(p4)
}
int main()
{
    test();
    system("pause");
    return 0;
}
