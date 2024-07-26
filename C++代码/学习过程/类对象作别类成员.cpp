#include <iostream>
using namespace std;

// 类的对象作为另一个类的成员

// 手机类
class Phone
{
public:
    Phone(string pName)
    {
        m_pName = pName;
        cout << "手机构造" << endl;
    }
    ~Phone()
    {
        cout << "手机的析构函数调用" << endl;
    }
    // 手机品牌名称
    string m_pName;
};
// 人类
class Person
{
public:
    // 初始化列表
    Person(string name, string pName) : m_name(name), m_phone(pName) // 相当于Phone m_phone=pName
    {                                                                // Phone类里面的隐式转换法，调用了有参
        cout << "人的构造" << endl;                                  // 构造函数
    }
    ~Person()
    {
        cout << "人的析构函数调用" << endl;
    }
    // 姓名
    string m_name;

    // 手机
    Phone m_phone; // 先构造成员类的对象，在构造自身
                   // 析构销毁时，先外部类销毁，在内部类销毁
};
// 总结：构造时先构造类对象，然后自身，西沟销毁时相反
void test01()
{
    Person p("张三", "appleMax");
    cout << p.m_name << "拿着" << p.m_phone.m_pName << "牌子的手机" << endl;
}
int main()
{
    test01();
    return 0;
}
