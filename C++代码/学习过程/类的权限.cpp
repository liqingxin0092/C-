#include <iostream>
using namespace std;
class Student
{
public:
    // 类中的属性和行为统一称为成员
    // 属性也叫  成员变量  或者  成员属性
    // 行为也叫  成员函数   成员方法
    string name;
    string number;
    void GiveValue(string str, string num)
    {
        name = str;
        number = num;
    }
    void show()
    {
        cout << name << endl;
        cout << number << endl;
    }
};

int main()
{
    Student stu1;
    stu1.GiveValue("pxd", "2308070106");
    stu1.show();
    return 0;
}
