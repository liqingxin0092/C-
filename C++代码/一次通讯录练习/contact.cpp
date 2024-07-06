#include "contact.h"
void menu()
{
    cout << "     ******1.add******" << endl;
    cout << "     ******2.show*****" << endl;
    cout << "     ******3.delet****" << endl;
    cout << "     ******4.search***" << endl;
    cout << "     ******5.modify***" << endl;
    cout << "     ******6.clear****" << endl;
    cout << "     ******0.exit*****" << endl;
}
void add(Book *Book_p)
{
    cout << "请输入名字：" << endl;
    cin >> Book_p->PeopleArr[Book_p->count].name;
    cout << "请输入性别：" << endl;
    cin >> Book_p->PeopleArr[Book_p->count].sex;
    cout << "请输入电话：" << endl;
    cin >> Book_p->PeopleArr[Book_p->count].tele;
    cout << "请输入年龄：" << endl;
    cin >> Book_p->PeopleArr[Book_p->count].age;
    cout << "请输入地址：" << endl;
    cin >> Book_p->PeopleArr[Book_p->count].add;
    Book_p->count++;
}
void show(const Book *Book_p)
{
    int i;
    cout << "名字\t" << "性别\t" << "年龄\t" << "电话\t\t" << "地址" << endl;
    cout << "pxd\t" << "male\t" << "20\t" << "15930367311\t" << "11A (例子)" << endl;
    for (i = 0; i < Book_p->count; i++)
    {
        cout << Book_p->PeopleArr[i].name << "\t"
             << Book_p->PeopleArr[i].sex << "\t"
             << Book_p->PeopleArr[i].age << "\t"
             << Book_p->PeopleArr[i].tele << "\t"
             << Book_p->PeopleArr[i].add
             << endl;
    }
}
void search(const Book *const Book_p, string str)
{
    int i;
    for (i = 0; i < Book_p->count; i++)
    {
        if (str == Book_p->PeopleArr[i].name)
        {
            cout << "名字\t" << "性别\t" << "年龄\t" << "电话\t\t" << "地址" << endl;
            cout << Book_p->PeopleArr[i].name << "\t"
                 << Book_p->PeopleArr[i].sex << "\t"
                 << Book_p->PeopleArr[i].age << "\t"
                 << Book_p->PeopleArr[i].tele << "\t"
                 << Book_p->PeopleArr[i].add
                 << endl;
            break;
        }
    }
}
void delet(Book *const Book_p, string str)
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (str == Book_p->PeopleArr[i].name)
        {
            memset(Book_p->PeopleArr+i, 0, sizeof(Book_p->PeopleArr[i]));
            Book_p->count--;
            break;
        }
    }
}
void modify(Book *const Book_p, string str)
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (str == Book_p->PeopleArr[i].name)
        {
            cout << "请输入名字：" << endl;
            cin >> Book_p->PeopleArr[i].name;
            cout << "请输入性别：" << endl;
            cin >> Book_p->PeopleArr[i].sex;
            cout << "请输入电话：" << endl;
            cin >> Book_p->PeopleArr[i].tele;
            cout << "请输入年龄：" << endl;
            cin >> Book_p->PeopleArr[i].age;
            cout << "请输入地址：" << endl;
            cin >> Book_p->PeopleArr[i].add;
            break;
        }
    }
}
void clear(Book *const Book_p)
{
    int i;
    for (i = 0; i < MAX;i++)
    {
        memset(Book_p->PeopleArr + i, 0, sizeof(Book_p->PeopleArr + i));
    }
    Book_p->count = 0;
}