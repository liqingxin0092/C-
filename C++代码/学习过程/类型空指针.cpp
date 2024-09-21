#include <iostream>
using namespace std;

// c++允许空指针调用成员函数，注意有没有用到this指针

// 空指针调用成员函数
class Person
{
public:
    void showClassName()
    {
        cout << "this is person class" << endl;
    }
    void showPersonName()
    {
        if (this == NULL) // 提高程序健壮性
            return;
        cout << "age=" << this->m_age << endl;
    }
    int m_age;
};
void test01()
{
    Person *p = NULL;
    p->showClassName();
    // 会报错，因为传入指针为空 ，无中生有
    p->showPersonName();
}

main()
{
    test01();
    return 0;
}
