#include "contact.h"
int main()
{

    Book book;
    int input;

    string name_to_be_searched;
    do
    {
        menu();
        cout << "please choose your function:" << endl;
        cin >> input;
        switch (input)
        {
        case 1:
            // 增加
            add(&book);
            break;
        case 2:
            show(&book);
            break;
        case 3:
            // 删除
            cout << "please input your name:" << endl;
            cin >> name_to_be_searched;
            delet(&book, name_to_be_searched);
            break;
        case 4:
            // 搜索;
            cout << "please input your name:" << endl;
            cin >> name_to_be_searched;
            search(&book, name_to_be_searched);
            break;
        case 5:
            // 修改
            cout << "please input your name:" << endl;
            cin >> name_to_be_searched;
            modify(&book, name_to_be_searched);
            break;
        case 6:
            // 清除
            clear(&book);
            break;
        case 0:
            // 退出
            cout << "欢迎下次使用~" << endl;
            break;
        }
    } while (input);
    return 0;
}