#include <iostream>
using namespace std;

// 继承中的对象模型

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};
class Son : public Base
{
public:
    int m_D;
};

void test()
{
    // 16
    // 父类中所有非静态成员属性都会被子类继承下去
    // 父类中的私有成员属性,是被编译器隐藏了,访问不到,但却是继承了
    cout << "size of Son =  " << sizeof(Son) << endl;
}
int main()
{
    test();
    return 0;
}