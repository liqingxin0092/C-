#include <iostream>
using namespace std;
//--运算符重载
class my_int
{
    friend ostream &operator<<(ostream &cout, my_int a);

public:
    my_int()
    {
        this->num = 0;
    }
    // 前置--
    my_int &operator--()
    {
        this->num--;
        return *this;
    }
    // 后置--
    my_int operator--(int)
    {
        my_int temp = *this;
        this->num--;
        return temp;
    }

private:
    int num;
};
ostream &operator<<(ostream &cout, my_int a)
{
    cout << a.num;
    return cout;
}
void test0()
{
    my_int a;
    cout << --(--a) << endl;
    cout << a << endl;
}
void test1()
{
    my_int a;
    cout << a-- << endl;
    cout << a << endl;
}
int main()
{
    test1();
    return 0;
}