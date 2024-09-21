#include <iostream>
using namespace std;
// 递增运算符重载++
class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger num);

public:
    MyInteger()
    {
        m_Num = 0;
    }
    // 重载前置++运算符
    // 返回引用是为了一直对一个数据进行递增
    MyInteger &operator++()
    {
        m_Num++;
        return *this;
    }
    // 重载后置++运算符,参数不一样发生重载了，占位符int用于区分前置和后置
    // 要以值方式返回一个值的上一个状态，如果都用引用来写的话会导致++也在操作同一个对象
    MyInteger operator++(int)
    {
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};
// 重载左移运算符
ostream &operator<<(ostream &cout, MyInteger num)
{
    cout << num.m_Num;
    return cout;
}
void test01()
{
    MyInteger i;
    cout << i++ << endl;
    cout << i << endl;
}
int main()
{
    test01();
    return 0;
}