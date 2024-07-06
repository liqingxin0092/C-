#ifndef __CONTACT_H
#define __CONTACT_H

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 50
typedef struct
{
    string name;
    string sex;
    int age;
    string tele;
    string add;
} People;
typedef struct
{
    People PeopleArr[MAX];
    int count = 0;
} Book;
void menu();                                       // 菜单
void add(Book *Book_p);                            // 增加
void show(const Book *Book_p);                     // 展示
void search(const Book *const Book_p, string str); // 搜索
void delet(Book *const Book_p, string str);        // 删除
void modify(Book *const Book_p, string str);       // 修改
void clear(Book *const Book_p);                    // 全清
#endif