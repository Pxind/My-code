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
            printf("扩容成功，当前最大容量为 %d\n", pc->count1);
        }
        else
        {
            perror("realloc");
            printf("扩容失败，无法添加新联系人\n");
            return;
        }
    }

    printf("请输入你想添加人的姓名：\n");
    scanf("%s", pc->data[pc->count].name);
    printf("请输入手机号：\n");
    scanf("%s", &pc->data[pc->count].tele);
    printf("请输入住宅电话：\n");
    scanf("%s", pc->data[pc->count].homeTele);
    printf("请输入办公电话：\n");
    scanf("%s", pc->data[pc->count].workTele);
    printf("请输入电子邮件：\n");
    scanf("%s", pc->data[pc->count].emal);
    printf("请输入与本人关系：\n");
    scanf("%s", pc->data[pc->count].relation);
    printf("请输入备注：\n");
    scanf("%s", pc->data[pc->count].remark);

    pc->count++;
    printf("添加成功\n");
}

void ShowContact(const Contact* pc)
{
    assert(pc);
    int i = 0;
    printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", "名字", "手机号", "住宅电话", "办公电话", "电子邮件", "与本人关系", "备注");

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
        printf("通讯录为空，无法删除\n");
        return;
    }
    printf("请输入要删除人的名字:>");
    char name[15];
    scanf("%s",name);

    //删除联系人
    int pos = FindByName(pc,name);
    if(pos == -1)
    {
        printf("要删除的人不存在\n");
        return;
    }
    //利用覆盖删除法
    for(int i = pos;i<pc->count-1;i++)
    {
        pc->data[i] = pc->data[i+1];
    }
    pc->count--;
    printf("删除中...\n");
    Sleep(1000);
    printf("删除成功\n");
}
void SearchContact(const Contact* pc)
{
    assert(pc);
    char name[15];
    printf("请输入要查找人与您的关系:>");
    scanf("%s",name);
    int pos = FindByName(pc,name);
    if(pos == -1)
    {
        printf("没有与您是这个关系的人\n");
        return;
    }
    printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", "名字", "手机号", "住宅电话", "办公电话", "电子邮件", "与本人关系", "备注");
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
    printf("请输入要修改人的名字:>");
    scanf("%s",name);
    printf("查找中...\n");
    Sleep(1000);
    int pos = FindByName(pc,name);
    if(pos == -1)
    {
        printf("要修改的人不存在\n");
        return;
    }
    printf("请输入名字:>");
    scanf("%s", pc->data[pos].name);
    printf("请输入手机号：>");
    scanf("%s", pc->data[pos].tele);
    printf("请输入住宅电话：>");
    scanf("%s", pc->data[pos].homeTele);
    printf("请输入办公电话：>");
    scanf("%s", pc->data[pos].workTele);
    printf("请输入电子邮件：>");
    scanf("%s", pc->data[pos].emal);
    printf("请输入与本人关系：>");
    scanf("%s", pc->data[pos].relation);
    printf("请输入备注：>");
    scanf("%s", pc->data[pos].remark);
    printf("修改中...\n");
    Sleep(1000);
    printf("修改成功\n");
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
    while(fread(&tmp,sizeof(PeoInfo),1,pfRead))//fread返回值为读取元素成功的个数
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
    printf("请输入你想查找的分组:\n");
    scanf("%s",relation);
    for(int i=0;i<pc->count;i++)
    {
        if(strcmp(pc->data[i].relation,relation)==0)
        {
            count++;
            if(count==1)
            printf("%-15s\t%-11s\t%-15s\t%-15s\t%-30s\t%-8s\t%-30s\n", "名字", "手机号", "住宅电话", "办公电话", "电子邮件", "与本人关系", "备注");
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
    printf("此分组中无人\n");
}