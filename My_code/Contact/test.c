//功能测试
#include "Contacts.h"

void menu()
{
    printf("*******************************************\n");
    printf("***********  1. add      2. del     *******\n");
    printf("***********  3. search   4. modify  *******\n");
    printf("***********  5. show     6.GroupByR  ******\n");
    printf("***********  0. exit                 ******\n");
    printf("*******************************************\n");
}
int main()
{
    int input = 0;
    Contact con;
    //初始化通讯录
    InitContact(&con);
    do
    {
        menu();
        printf("请选择—>");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                AddContact(&con);
                break;
            case 2:
                DelContact(&con);
                break;
            case 3:
                SearchContact(&con);
                break;
            case 4:
                ModifyContact(&con);
                break;
            case 5:
                ShowContact(&con);
                break;
            case 6:
                GroupByR(&con); 
                break;
            case 0:
                SaveContact(&con);
                printf("退出通讯录\n");
                break;
            default: 
                printf("选择错误,请重新选择\n");
                break;
        }
    } while (input);
    
    return 0;
}
