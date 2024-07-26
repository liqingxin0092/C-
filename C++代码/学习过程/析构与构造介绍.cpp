#include <iostream>
using namespace std;

// 对象的初始化和清理
// 构造函数
class Person
{
public:
    // 构造函数
    // 构造函数没有返回值，不用写void
    // 函数名与类的名称相同
    // 可以有参数，可以发生重载
    // 创建对象的时候，构造函数会自动调用，而且只调用一次
    Person()
    {
        cout << "构造函数的调用" << endl;
    }
    // 析构函数
    // 构造函数没有返回值，不用写void
    // 函数名字和类名相同，左面加一个~
    // 不可以可以有参数，不可以发生重载
    // 对象在销毁前，会自动调用析构函数，调用一次
    ~Person()
    {
        cout << "析构函数调用" << endl;
    }
};

int main()
{
    Person p; // 栈上的数据
    system("pause");
    return 0;
}
