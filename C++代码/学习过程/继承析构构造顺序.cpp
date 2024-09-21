#include <iostream>
using namespace std;

// 子类继承父类后，当创建子类对象时，也会调用父类的构造函数
// 父类和子类的构造和析构函数谁先谁后

class Base
{
public:
    int m_A;
    Base()
    {
        cout << "Base的构造函数" << endl;
    }
    ~Base()
    {
        cout << "Base的析构函数" << endl;
    }

protected:
    int m_B;

private:
    int m_C;
};
class Son : public Base
{
public:
    int m_D;
    Son()
    {
        cout << "Son的构造函数" << endl;
    }
    ~Son()
    {
        cout << "Son的析构函数" << endl;
    }
};

void test()
{
    // 先构造父类，再构造子类，析构的顺序与构造的顺序相反
    Son s;
}
int main()
{
    test();
    return 0;
}