//ͨѶ¼�������
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
    PeoInfo* data;//����˵���Ϣ
    int count;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
    int count1;
} Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ����Ϣ
void AddContact(Contact* pc);

//��ʾ��ϵ����Ϣ
void ShowContact(const Contact* pc); //const���ε���*pc��������pcָ�������

//ɾ��ָ����ϵ����Ϣ
void DelContact(Contact* pc);

//����ָ����ϵ����Ϣ
void SearchContact(const Contact* pc);

//�޸�ָ����ϵ����Ϣ
void ModifyContact(Contact* pc);

//����ͨѶ¼��Ϣ���ļ���
void SaveContact(const Contact* pc);

//�����ļ��е���Ϣ��ͨѶ¼��
void LoadContact(Contact* pc);

//������ϵ�˹�ϵ����
void GroupByR(const Contact* pc);