#include <iostream>
using namespace std;

// 继承,可以省区冗余代码
// 语法：class 子类：继承方式 父类
// class A :public B
// 子类也称为派生类
// 派生类中的成员包含两大部分，一类是从基类继承过来的，一类是自己增加的成员
// 继承来的成员表现共性，新增的成员表现个性
// 父类也成为基类
class BasePage
{
public:
    void header()
    {
        cout << "首页,公开课,登录,注册" << endl;
    }
    void footer()
    {
        cout << "帮助中心,站内地图" << endl;
    }
    void left()
    {
        cout << "C++,python ,javascript" << endl;
    }
};
// java页面
class Java : public BasePage
{
public:
    void content()
    {
        cout << "Java学科视频" << endl;
    }
};
// python页面
class Python : public BasePage
{
public:
    void content()
    {
        cout << "python学科视频" << endl;
    }
};
// c++页面
class CPP : public BasePage
{
public:
    void content()
    {
        cout << "C++学科视频" << endl;
    }
};
void test()
{
    Java java;
    Python py;
    CPP c;
    cout << "java页面如下" << endl;
    java.header();
    java.footer();
    java.left();
    java.content();
    cout << "---------------------------------" << endl;
    cout << "python页面如下" << endl;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "---------------------------------" << endl;
    cout << "C++页面如下" << endl;
    c.header();
    c.footer();
    c.left();
    c.content();
}
int main()
{
    test();
    return 0;
}