#include <iostream>
using namespace std;

// 成员变量和成员函数分开存储
class Person
{
public:
    int m_A;        // 属于类的对象
    static int m_B; // 不属于类的对象

    void func() // 不属于类的对象
    {
        cout << "123" << endl;
    }
    static void func() // 不属于类的对象
    {
    }
    // 只有非静态成员变量属于类的对象
};
int Person::m_B = 100;
void test01()
{
    Person p;
    // 空对象占用内存为1
    // c++会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存的地址

    // 如果已经有了数据，就按照数据的类型来看了，就没有空时候的一个字节了

    // 类有了函数，也不算类的大小，因为成员函数和成员变量分开存储
    cout << "sizeof(p)=" << sizeof(p) << endl;
    // sizeof只计成员变量
}
int main()
{
    test01();
    return 0;
}
