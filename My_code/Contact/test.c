//���ܲ���
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
    //��ʼ��ͨѶ¼
    InitContact(&con);
    do
    {
        menu();
        printf("��ѡ��>");
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
                printf("�˳�ͨѶ¼\n");
                break;
            default: 
                printf("ѡ�����,������ѡ��\n");
                break;
        }
    } while (input);
    
    return 0;
}
