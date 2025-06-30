//通讯录相关声明
#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100

typedef struct PeoInfo 
{
    char name[10];
    char tele[11];
    char homeTele[15];
    char workTele[15];
    char emal[30];
    char relation[8];
    char remark[30];
} PeoInfo;

typedef struct Contact
{
    PeoInfo* data;//存放人的信息
    int count;//记录当前已经有的元素个数
    int count1;
} Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人信息
void AddContact(Contact* pc);

//显示联系人信息
void ShowContact(const Contact* pc); //const修饰的是*pc，保护了pc指向的内容

//删除指定联系人信息
void DelContact(Contact* pc);

//查找指定联系人信息
void SearchContact(const Contact* pc);

//修改指定联系人信息
void ModifyContact(Contact* pc);

//保存通讯录信息到文件中
void SaveContact(const Contact* pc);

//加载文件中的信息到通讯录中
void LoadContact(Contact* pc);

//按照联系人关系分组
void GroupByR(const Contact* pc);