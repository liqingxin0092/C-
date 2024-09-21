#include <iostream>
using namespace std;
// 函数调用运算符()重载
// 重载后的使用方式非常像函数的调用，所以叫仿函数
// 仿函数没有固定写法非常灵活
class Print
{
public:
    // 函数调用运算符重载
    void operator()(string test)
    {
        cout << test << endl;
    }
};
class Add
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};
void print1(string test)
{
    cout << test << endl;
}
void test1()
{
    Print print;
    print("hello world");
    print1("hello world");
}
int main()
{
    test1();
    Add add;
    cout << add(1, 2) << endl;
    // 匿名函数对象,这行结束立马释放
    cout << Add()(1, 2) << endl;
    return 0;
}