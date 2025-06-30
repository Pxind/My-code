#include"Contacts.h"

int FindByName(const Contact* pc,char name[])
{
    assert(pc);
    int i = 0;
    for(i=0;i<pc->count;i++)
    {
        if(strcmp(pc->data[i].name,name) == 0)
        {
            return i;
        }
    }
    return -1;
}

void InitContact(Contact* pc)
{
    assert(pc);
    pc->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
    pc->count = 0;
    pc->count1 = 3;
    memset(pc->data, 0, sizeof(pc->data));
    LoadContact(pc);
}

void AddContact(Contact* pc)
{
    assert(pc);
    if(pc->count == pc->count1)
    {
        PeoInfo* p = (PeoInfo*)realloc(pc->data, sizeof(PeoInfo) * (pc->count1 + 2));
        if(p != NULL)
        {
            pc->data = p;
            pc->count1 += 2;
            printf("���ݳɹ�����ǰ�������Ϊ %d\n", pc->count1);
        }
        else
        {
            perror("realloc");
            printf("����ʧ�ܣ��޷��������ϵ��\n");
            return;
        }
    }

    printf("��������������˵�������\n");
    scanf("%s", pc->data[pc->count].name);
    printf("�������ֻ��ţ�\n");
    scanf("%s", &pc->data[pc->count].tele);
    printf("������סլ�绰��\n");
    scanf("%s", pc->data[pc->count].homeTele);
    printf("������칫�绰��\n");
    scanf("%s", pc->data[pc->count].workTele);
    printf("����������ʼ���\n");
    scanf("%s", pc->data[pc->count].emal);
    printf("�������뱾�˹�ϵ��\n");
    scanf("%s", pc->data[pc->count].relation);
    printf("�����뱸ע��\n");
    scanf("%s", pc->data[pc->count].remark);

    pc->count++;
    printf("��ӳɹ�\n");
}

void ShowContact(const Contact* pc)
{
    assert(pc);
    int i = 0;
    printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", "����", "�ֻ���", "סլ�绰", "�칫�绰", "�����ʼ�", "�뱾�˹�ϵ", "��ע");

    while(i < pc->count)
    {
        printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", 
               pc->data[i].name, 
               pc->data[i].tele, 
               pc->data[i].homeTele, 
               pc->data[i].workTele, 
               pc->data[i].emal, 
               pc->data[i].relation, 
               pc->data[i].remark);
        i++;
    }
}

void DelContact(Contact* pc)
{
    assert(pc);
    if(pc->count == 0 )
    {
        printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
        return;
    }
    printf("������Ҫɾ���˵�����:>");
    char name[15];
    scanf("%s",name);

    //ɾ����ϵ��
    int pos = FindByName(pc,name);
    if(pos == -1)
    {
        printf("Ҫɾ�����˲�����\n");
        return;
    }
    //���ø���ɾ����
    for(int i = pos;i<pc->count-1;i++)
    {
        pc->data[i] = pc->data[i+1];
    }
    pc->count--;
    printf("ɾ����...\n");
    Sleep(1000);
    printf("ɾ���ɹ�\n");
}
void SearchContact(const Contact* pc)
{
    assert(pc);
    char name[15];
    printf("������Ҫ�����������Ĺ�ϵ:>");
    scanf("%s",name);
    int pos = FindByName(pc,name);
    if(pos == -1)
    {
        printf("û�������������ϵ����\n");
        return;
    }
    printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", "����", "�ֻ���", "סլ�绰", "�칫�绰", "�����ʼ�", "�뱾�˹�ϵ", "��ע");
    printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", 
           pc->data[pos].name, 
           pc->data[pos].tele, 
           pc->data[pos].homeTele, 
           pc->data[pos].workTele, 
           pc->data[pos].emal, 
           pc->data[pos].relation, 
           pc->data[pos].remark);
}
void ModifyContact(Contact* pc)
{
    assert(pc);
    char name[15];
    printf("������Ҫ�޸��˵�����:>");
    scanf("%s",name);
    printf("������...\n");
    Sleep(1000);
    int pos = FindByName(pc,name);
    if(pos == -1)
    {
        printf("Ҫ�޸ĵ��˲�����\n");
        return;
    }
    printf("����������:>");
    scanf("%s", pc->data[pos].name);
    printf("�������ֻ��ţ�>");
    scanf("%s", pc->data[pos].tele);
    printf("������סլ�绰��>");
    scanf("%s", pc->data[pos].homeTele);
    printf("������칫�绰��>");
    scanf("%s", pc->data[pos].workTele);
    printf("����������ʼ���>");
    scanf("%s", pc->data[pos].emal);
    printf("�������뱾�˹�ϵ��>");
    scanf("%s", pc->data[pos].relation);
    printf("�����뱸ע��>");
    scanf("%s", pc->data[pos].remark);
    printf("�޸���...\n");
    Sleep(1000);
    printf("�޸ĳɹ�\n");
}

void SaveContact(const Contact* pc)
{
    assert(pc);
    FILE* pfWrite = fopen("contact.txt","wb");
    if(pfWrite == NULL)
    {
        perror("SaveContact");
        return;
    }
    int i = 0;
    for(i=0;i<pc->count;i++)
    {
        fwrite(pc->data+i,sizeof(PeoInfo),1,pfWrite);
    }
    fclose(pfWrite);
}

void LoadContact(Contact* pc)
{
    assert(pc);
    FILE* pfRead = fopen("contact.txt","rb");
    if(pfRead == NULL)
    {
        perror("LoadContact");
        return;
    }
    PeoInfo tmp = {0};
    while(fread(&tmp,sizeof(PeoInfo),1,pfRead))//fread����ֵΪ��ȡԪ�سɹ��ĸ���
    {
        pc->data[pc->count] = tmp;
        pc->count++;
         if(pc->count == pc->count1)
         {
            PeoInfo* p = (PeoInfo*)realloc(pc->data,sizeof(PeoInfo)*(pc->count1+2));
            if(p!= NULL)
            {
                pc->data = p;
                pc->count1 += 2;
            }
        }
    }
    fclose(pfRead);
}

void GroupByR(const Contact* pc)
{
    int count = 0;
    char relation[10];
    printf("������������ҵķ���:\n");
    scanf("%s",relation);
    for(int i=0;i<pc->count;i++)
    {
        if(strcmp(pc->data[i].relation,relation)==0)
        {
            count++;
            if(count==1)
            printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", "����", "�ֻ���", "סլ�绰", "�칫�绰", "�����ʼ�", "�뱾�˹�ϵ", "��ע");
            printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", 
           pc->data[i].name, 
           pc->data[i].tele, 
           pc->data[i].homeTele, 
           pc->data[i].workTele, 
           pc->data[i].emal, 
           pc->data[i].relation, 
           pc->data[i].remark);
        }
    }
    if(count==0)
    printf("�˷���������\n");
}