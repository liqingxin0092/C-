#include <iostream>
using namespace std;

class Person
{
    public :
    void SetName(string name)
    {
        m_name = name;
    }
    void ShowName()
    {
        cout << m_name << endl;
    }
    int GetAge()
    {
        return m_age;
    }

private:
    string m_name; // 可读可写
    int m_age=18;     // 年龄，只读
    string m_Idol; //  偶像，只写
};
int main()
{
    Person stu;
    stu.SetName("庞旭东");
    stu.ShowName();
    cout << stu.GetAge() << endl;
    return 0;
}
