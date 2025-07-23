#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <cstring>
#include <windows.h>
#include <unistd.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	int a ;
//	int b;
//	scanf("%d %d", &a, &b);
//	int r = Max(a, b);
//	printf("%d\n",r);
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d",&a);
//	if (a > 0) 
//		b = -1;
//	
//	else if (a == 0) 
//		b = 0;
//	
//	else
//		b = 1;
//	printf("%d\n", b);
//	return 0;
//
 
//
//
//int main() {
//	int a;
//	float c;
//	scanf("%d", &a);
//	if (a <= 150) {
//		c = a * 0.4463;
//	}
//	else if (150 < a && a <= 400) {
//		c = 150 * 0.4463 + (a - 150) * 0.4663;
//	}
//	else {
//		c = 150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663;
//	}
//	printf("%.1f\n", c);
//	return 0;
//}
//int main() {
//	float a=0;
//	float c = 2;
//	int ch=0;
//	scanf("%f", &a);
//	while(a>0) {//此处使用while循环更加合理
//		ch++;
//		a -=c;
//		c *= 0.98;
//		
//	
//	}
//	printf("%d\n", ch);
//	return 0;
//
//}
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int r = (a > b ? a : b);//此处格式为（条件a？目标b:目标c）;若a为真则执行b，若a为假则执行c。
//	printf("%d\n", r);
//
//
//	return 0;
//}
//逗号表达式 由逗号隔开的一串式子，从左向右依次计算。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	// c=8 a=28
//	int d = (c = a - 2, a = b + c, c - 3);//从左向右依次计算
//	printf("%d\n", d);
//	return 0;
//}
    //int main() {
    //	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //	printf("%d\n",arr[9]);//此处arr[9]中的9为下角标 表示第九个元素
    //	return 0;
    //				
    //}
//int add(int x, int y) {
//	return(x + y);
//}
//int main() {
//	int a = add(3, 2);//调用函数
//	printf("%d\n", a);
//}
//
//关键词重命名
//typedef unsigned int uint;//对unsigned int 进行重命名为uint，格式为typedef 原本关键词 转换后的关键词
//int main() {
//	unsigned int num = 1;
//	uint num2 = 1;//等同于unsigned int
//	printf("%d %d\n",num,num2);
//}
//static 1.修饰局部变量 2.修饰全局变量 3.修饰函数
//void test() {//（此处void表示此任务无需return 只执行人物）
//	static int a = 1;//static[（修饰局部变量出了作用域不销毁）改变了变量的存储位置]
//	a++;
//	printf("%d\n", a);//2-11
//}
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}
//[static修饰后不为 局部变量 由栈区(存储局部变量)转到静态区（直到程序销毁才消失）]
//extern[声明外部符号{指的是来自于另一个文件的变量}]注意不可extern带有static的变量
//#define 定义符号，标识常量，宏
//#define add(x,y)（（x）+（y））//定义宏 #define 宏名（宏的参数）（宏体）
//int main() {
//	int a = 1;
//	int b = 8;
//	add (a, b);
//	return 0;
//}
//指针
//
//int main()
//{
//	int x = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d %d", &x, &n);
//	for (int i = 0;  i< n; i++) {
//		
//		if (x<=5)
//			sum += 250;
//		x++;
//		if (x > 7)
//			x = 1;
//		
//		
//
//int main() {
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int hours = 0;
//    int min = 0;
//    hours = c - a;
//    min = d - b;
//    if (min < 0) {
//        hours -= 1;
//        min += 60;
//    }
//    if (min < 10) {
//        printf("%d 0%d\n", hours, min);
//    }
//    else{
//            printf("%d %d\n", hours, min);
//    }
//    return 0;
//}
//int main()
//{
//	double s;
//	double x;
//	scanf("%d %d", &s, &x);
//	double left = s - x;
//	double right = s + x;
//	double a = 0;
//	double b ;
//	b = 7;
//	double c = 0;
//	while ( a < left) {
//		a += b;
//			b *= 0.98;
//	}
//	c = a + b;
//	
//	if(c>right){
//		printf("n\n");
//	}
//	else {
//		printf("y\n");
//	}
//		return 0;
//}
//int main() {
//	int a = 10;//向内存申请地址,存储10.
//	&a;//取地址操作符
//	int* p = &a;//p此处就是指针变量（指针就是地址）此时p就是存放者a的地址
//	//*表示p是指针变量 int表示对象为int类
//	//存放地址的变量为指针变量
//	*p;//解引用操作符，就是通过p中所存放的地址，找到p所指的对象，*p就是p所指的对象
//	//存地址的作用是通过*p来改*p所指对象的值
//	return 0;
//}
//指针变量的大小取决于一个地址存放的时候需要多大的空间
//32位上 指针变量为4个字节 64位上指针变量为8个字节
//结构体
//学生
//struct stu {
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//int main() {
//	struct stu s = { "zhangsan","20","nan","110" };
//	return 0;
//}
//int main() {
//	
//	return 0;
//}
//int main()
//{
//	for (int a = 0; a < 100; a++) 
//	{
//		if(a%2!=0)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}
    //int main()
    //{
    //	int day;
    //	scanf("%d", &day);
    //	printf("星期%d", day);
    //	return 0;
    //}
//int main() 
//{
//	int a = -1;
//	while (a<=9)
//	{
//		a++;
//		if (5 == a)
//			continue;
//		}
//		printf("%d ",a);
//		
//	}
//	return 0;
//}
//continue跳过本次循环countinue后面的循环
//break 直接终止循环

//int main()
//{
//	int ch = 0;
//	char passport[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", passport);
//	//getchar();//缓冲\n(缓冲区)
//	while ((ch = getchar()) != '\n') //另一种缓冲区
//	{
//		;
//	}
//	printf("请确认密码(Y/N)：");
//	int ret = getchar();
//	if (ret == 'Y')
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	getchar();
//	int number = sizeof(getchar()) / sizeof(getchar(0));
//	while (i < number) 
//	{
//		printf("%c", getchar(i));
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);
//	
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}
//int main()
//{
//	int id = 0;
//	double cyuyan ;
//	double math ;
//	double english;
//	scanf("%d %lf %lf %lf",&id,&cyuyan,&math,&english);
//	printf("The each subject score of No. %d is %.2lf %.2lf %.2lf", id, cyuyan, math, english);
//	return 0;
//}
//int max(int x,int y) 
//{
//	if (x > y)
//	
//		return x;
//	
//	else
//	
//		return y;
//	
//}
////int main()
////{
////	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	int e = max(a, b);
//	int f = max(c, d);
//	if (e > f) {
//		
//		
//
//		printf("%d", e);
//	}
//	else {
//		;
//		printf("%d", f);
//	}
//	return 0;
//}
//int main()
//{
//	int i =0;
//	int arr[4] = { 0 };
//	
//	for (int i = 0; i < 4; i++) 
//	{
//		scanf("%d", &arr[i]);		
//	}
//	int max=arr[0] ;
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] >= max)
//			max=arr[i];
//	}
//	printf("%d\n",max);
//	return 0;
//}
//int main() 
//{
//	int l;
//	int g;
//	scanf("%d %d", &l, &g);
//	int tree[l8] = { 0 };
//	
//	for (int i = 0; i < g; i++)
//	{
//		int a = 0;
//		int b = 0;
//		scanf("%d %d", &a, &b);
//	}
//	
//
//	return 0;
//}
//int main()
//{
//	int ret = 1;
//	int n = 1;
//	int sum = 0;
//	scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//		{
//			ret *= i;
//			sum += ret;
//		}
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 9 ;
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < size; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("它的下标为:%d\n", i);
//			break;
//		}
//	}
//	if (i == size)
//	{
//		printf("无法找到");
//	}
//	return 0;
//}\\\\\\\\\\
//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,10 };
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()
//{
//	int n ;
//	scanf("%d\n", &n);
//	int temple ;
//	int c=0;
//	int count=0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &temple);
//		if (temple > c)
//		{
//			currentday++;
//		}
//		else
//		{
//			break;
//		}
//		c = temple;
//		
//
//	}
//	return 0;
//}

//int main() {
//    int n;
//    scanf("%d", &n);  // 输入天数
//
//    int temperatures[n];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &temperatures[i]);  // 输入每天的温度
//    }
//
//    int max_days = 1;  // 最大连续上升天数，至少为1
//    int current_days = 1;  // 当前连续上升天数
//
//    for (int i = 1; i < n; i++) {
//        if (temperatures[i] > temperatures[i - 1]) {
//            current_days++;  // 如果当前温度比前一天高，当前连续上升天数加1
//            if (current_days > max_days) {
//                max_days = current_days;  // 更新最大连续上升天数
//            }
//        }
//        else {
//            current_days = 1;  // 否则重置当前连续上升天数
//        }
//    }
//
//    printf("%d\n", max_days);  // 输出结果
//
//    return 0;
//}
/*int main()
{
    int num1 = 0;
    int num2 = 0;
    char ch = 0;
    int answer = 0;
    scanf("%d %d %ch", &num1, &num2, &ch);
    switch (ch)
    {
    case'+':answer = num1 + num2; break;
    case'-':answer = num1 - num2; break;
    case'*':answer = num1 * num2; break;
    case'/':
        if (num2 != 0)
        {
            answer = num1 / num2;
        }
        else
        {
            printf("Divided by zero!");
            return 1;
        }break;
    default:printf("Invalid operator!");
        return 1;
    }
    printf("%d", answer);
    return 0;
}*/
/*int main()
{
	int n ;
	int x ;
	int sum_infection = 1;
	scanf("%d %d",&x,&n);
	for(int i=0;i<n;i++)
	{
		
		sum_infection *= (x+1);
	}
	printf("%d",sum_infection);
	return 0;
}*/
/*int main() 
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	
	int left = 0;
	int right = strlen(arr2)-1;
	while(left<right)
	{
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf("%s\n",arr2);
	sleep(1);//等待时间 
	system("cls");//清空屏幕 
	left++;
	right--;
    }
	return 0;
}   */
/*int main()
{
	int i = 0;
	char password[20]={0};
	for(i = 0; i < 3;i++)
	{
	    if(0 == i)
		{
			printf("请输入密码:\n");
		}
		else
		{
			printf("请再次输入密码:\n");
		}
		scanf("%s",password);
		if(strcmp(password,"abcde")==0)//引用库函数strcmp 如果password的字符串等于abcde则值等于0 
		{
			printf("密码正确\n"); 
			break;
		} 
	    else
	    {
	        printf("密码错误!\n");
	    } 
	} 
	if(i==3)
	{
		printf("退出程序"); 
	}
	return 0; 
}*/
/*void game()
{
	int number;
	int ret = rand()%100 + 1;
	printf("请输入一个数字：\n");
	do
	{
		scanf("%d",&number);
		if(number<ret)
		{
			printf("您猜的数字小了\n");
		}
		else if(number>ret)
		{
			printf("您猜的数大了\n");
		}
		else
		{
			printf("您猜对了\n");break;
		}
	}while(number!=ret);
	
	
}
void menu()
{
	printf("*********************\n");
	printf("******* 1.play*******\n");
	printf("********2.exit*******\n");
}
int main() 
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
		game();break;
		case 2:
		printf("退出游戏\n");break;
		default:
		printf("选择错误，重新选择！\n");break;	
		}
	}while(input!=2);   
	return 0;
}*/ 
/*int main()
{
	float n ;
	scanf("%f",&n);
	if(n>=0)
	{
		printf("%.2f",n);
	}
	else
	{
	    float n1 = 0 - n;
		printf("%.2f",n1);
	}
	return 0;
}*/
/*int main() 
{
	int a , b;
	scanf("%d %d",&a,&b);
	printf("%d",(a*b));
	return 0;
}*/
/*int main()
{
long long a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    long long answer = (a*c)-(b*d);
    printf("%lld",answer);
    return 0;
}*/

/*int main()
{
	int n ;
	int number = 0;
	scanf("%d",&n);
	for(int i =1;i<=n; i++)
	{
		int sum = 0;
		for(int y=1;y<=i;y++)
		{
			sum += y;
		}
		number += sum;
	}
	printf("%d",number);
	return 0;
}*/
/*int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("60秒后关机，输入‘我是好儿子’解除 \n");
	scanf("%s",input);
	if(strcmp(input,"我是好儿子")==0)
	{
	system("shutdown -a");
	}
	else
	{
	goto again;
	}
	return 0;
} */
/*int warp(int *px,int *py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	warp(&a,&b);
	printf("%d %d",a,b);
	return 0;
}*/
/*int main()
{
    long long count = 0;
    long long c = 0;
    long long n = 0;
    scanf("%d",&n);
    for(long long i = 2;i<=n;i++)
        {
        c=0;
        for(long long a = 2;a<i;a++)
            {
                if(i%a==0)
                {
                    c = -1;
                }
            }
        if(c==0)
        {
            count++;
        }
        }
    printf("%d",count);
    return 0 ;
}*/
/*int main()
{
    char arr[100];
    int b;
    double c;
    scanf("%s %d %lf",&arr,&b,&c);
	size_t q= strlen(arr);
    printf("%s,%zu\n",arr,q);
    printf("%d,4\n",b);
    printf("%.6lf,8\n",c);
    return 0;
}*/
//姓名：周航 学号：2406110037 
/*int main()
{
    int count = 0;
    int n,number;
    int arr[100];
    int arr1[100];
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
        {
        scanf("%d",&number);
        arr[i] = number;
        }
for(int i = 1;i<n;i++)
    {
    	count = 0;
        for(int a = 0;a<i;a++)
            {
                if(arr[i]>arr[a])
                {
                    count++;
                }
            }
        arr1[i]=count;
    }
printf("0 ");
for(int i =1;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
return 0;
}*/
/*int main()
{
	int max = 0;
	int a = 0;
	int n;
	int number;
	int arr[100];
	int num_time = 0;
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		scanf("%d",&number);
		arr[i] = number;
		if(arr[i]>max)
        {
        	max = arr[i];
		}
	}
		for(int i=1;i++;i<=max)
		{
			for(int b=0;b<n;b++)
			{
				if(arr[b]==i)
				{
					num_time+=5;
					break;
				}
			    
			}
		}	
	num_time = num_time+n+max*10;
	printf("%d",num_time);
	return 0;
}*/
/*int main()
{
    int count = 0;
    int n,number;
    int arr[100];
    int arr1[100];
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
        {
        scanf("%d",&number);
        arr[i] = number;
        }
for(int i = 1;i<n;i++)
    {
    	count = 0;
        for(int a = 0;a<i;a++)
            {
                if(arr[i]>arr[a])
                {
                    count++;
                }
            }
        arr1[i]=count;
    }
printf("0 ");
for(int i =1;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
return 0;
}*/
/*int main()
{
	int max = 0;
	int a = 0;
	int n;
	int number;
	int arr[100];
	int num_time = 0;
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		scanf("%d",&number);
		arr[i] = number;
		if(arr[i]>max)
        {
        	max = arr[i];
		}
	}
		for(int i=1;i++;i<=max)
		{
			for(int b=0;b<n;b++)
			{
				if(arr[b]==i)
				{
					num_time+=5;
					break;
				}
			    
			}
		}	
	num_time = num_time+n+max*10;
	printf("%d",num_time);
	return 0;
}*/
/*int main() 
{
    int arr[100];
    int number;
    int sum_number;
    int max_number = 0;
    int sum = 0;
    int a ;
    scanf("%d",&sum_number);
    
    for(int i =0;i<sum_number;i++)
        {
            scanf("%d",&number);
            arr[i] = number;
            if(arr[i]>max_number)
            {
                max_number = arr[i];
            }
            sum+=arr[i];
        }
    a = sum - max_number;
    printf("%d",a);
    return 0;
}*/
/*int game(int x,int y)
{
	int count;
	for(int i = x;i<=y;i++)
        {
            int c = 0;
            for(int a =2;a<i;a++)
                {
                    if(i%a==0)
                    {
                        c=1;
                        break;
                    }
                }
            if(c==0)
            {
                count++;
            }
        }
        return count;
}
int main()
{
	int j ;
    int count1 ;
    int first_number,last_number;
    scanf("%d %d",&first_number,&last_number);
    if(first_number>last_number)
    {
	    j= last_number;
        last_number = first_number;
        first_number = j;
    }
    count1 = game(first_number,last_number);
    if(first_number==1)
        printf("%d",count1-1);
    else
        printf("%d",count1);
    return 0;
}*/

/*int main()
{
	for(int i=1;i<=100;i++)
	{
		if(i%3==0)
		{
			printf("%d /",i);
		}
	}
	return 0;
}*/
/*int main()
{
	int a,b,c;
	int max;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		int c =a;
		a = b;
		b = c;
	}
	for(int i=a;i>0;i--)
	{
		if(a%i==0&&b%i==0)
		{
			max = i;
			break;
		}
	}
	printf("%d",max);
	return 0;
}*/
/*int main()
{
double x,a;
scanf("%lf",&x);
if(x>=0)
{
   a = sqrt(x);
}
else
{
    a = (x+1)*(x+1)+2*x+1.0000/x;
}
printf("%.2lf",a);
    return 0;
}*/
/*int main()
{
    double pay;
    double a,b;
    int c;
    scanf("%lf %lf %s",&a,&b,&c);
    if(b==90)
    {
        switch(c)
        {
            case 'm':pay = (6.95*a)*0.95;
                break;
            case 'e':pay = (6.95*a)*0.97;
                break;
        }
    }
    if(b==93)
    {
        switch(c)
        {
            case 'm':pay = (7.44*a)*0.95;
                break;
            case 'e':pay = (7.44*a)*0.97;
                break;
        }
    }
    if(b==97)
    {
        switch(c)
        {
            case 'm':pay = (7.97*a)*0.95;
                break;
            case 'e':pay = (7.97*a)*0.97;
                break;
        }
    }
    printf("%.2lf",pay);
    return 0;
}*/
/*int main()
{
    int n;
    scanf("%d",&n);
    int a = n/100;
    int b = (n%100)/10;
    int c = n%10;
    if(n<100||n>999)
    {
        printf("Invalid Value.");
    }
    else
    {
        if(sum == n)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}*/
/*int main()
{
    int pay;
    int a ;
    int b ;
    scanf("%d %s",&a,&b);
    int c = a-1000;
        if(a<=1000)
        {
            pay = 4;
        }
    else
    {
        pay = 4+(c/500+1)*3;
    }
    switch(b)
    {
        case 'y':pay+=5;
    }
    printf("%d",pay);
    return 0; m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m m
}*/
/*int main()
{
    int a,b,c;
    double area,perimeter;
    scanf("%d %d %d",a,b,c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("These sides do not correspond to a valid triangle");
    }
    else
    {
        perimeter = a + b + c;
        int s = perimeter/2;
        int num = s*(s-a)*(s-b)*(s-c);
        area = sqrt(num);
        printf("area = %.2lf; perimeter = %.2lf",area,perimeter);
    }
    return 0;
}int main()
{
    double a,b,c;
    double area,perimeter;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("These sides do not correspond to a valid triangle");
    }
    else
    {
        perimeter = a + b + c;
        double s = (a+b+c)/2;
        double num = s*(s-a)*(s-b)*(s-c);
        area = sqrt(num);
        printf("area = %.2lf; perimeter = %.2lf",area,perimeter");
    }
    return 0;
}*/
/*int main()
{
    int a,b,c;
    int d;
    scanf("%d %d %d",&a,&b,&c);
    int arr[3] = {a,b,c};
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<2;j++)
        {
            if(arr[j+1]<arr[j])
            {
                d = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = d;
            }
        }
    }
    printf("%d->%d->%d",arr[0],arr[1],arr[2]);
    return 0;
}*/
/*int main()
{
    int a;
    scanf("%d",&a);
    if(a>=90)
        a=90;
    if(a>=80&&a<90)
        a=80;
    if(a>=70&&a<80)
        a=70;
    if(a>=60&&a<70)
        a=60;
    switch(a)
    {
        case 90:printf("A");break;
        case 80:printf("B");break;
        case 70:printf("C");break;
        case 60:printf("D");break;
        default:printf("E");
    }
    return 0;
}*/
/*int main()
{
    int year,month;
    scanf("%d %d",&year,&month);
    if(year%100!=0&&year%400==0&&year%4==0)
    {
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            printf("31");
        }
        else if(month==4||month==6||month==9||month==11)
        {
            printf("30");
        }
        else if(month==2)
        {
            printf("29");
        }
        else
        {
            printf("ERROR");
        }
        
    }
    else
    {
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            printf("31");
        }
        else if(month==4||month==6||month==9||month==11)
        {
            printf("30");
        }
        else if(month==2)
        {
            printf("28");
        }
        else
        {
            printf("ERROR");
        }
    }
return 0;
}*/
/*int main()
{
    int type;
    double hour=0.0;
    double cost;
    scanf("%d %lf",type,hour);
    switch(type)
    {
       /* case 1:
            if(hour<=1)
            {
                cost = 5;
            }
            else if(hour>1&&hour<=24)
            {
                if((10*hour%5)!=0)
                {
                    hour = ((hour-1)*2)%1+1;
                    cost = hour*2+5;
                }
                else
                {
                    cost = (hour-1)*2*2+5;
                }
                if(cost>=50)
                {
                    cost = 50;
                }
            }
            else
            {
                if((10*hour%5)!=0)
                {
                    hour = ((hour-24)*2)/1+1;
                    cost = 50 + hour*2;
                }
                else
                {
                    cost = (hour-24)*2*2+50;
                }
            }
            break;
        case 2:
            if(hour<=2)
            {
                cost = 5;
            }
            else if(hour>2&&hour<=24)
            {
                if((10*hour%10)!=0)
                {
                    hour = (hour-1)%1+1;
                    cost = 5 +hour*2;
                }
                else
                {
                    cost = 5 +(hour-1)*2;
                }
                if(cost>30)
                {
                    cost = 30;
                }
            }
            else
            {
                if((10*hour%10)!=0)
                {
                    hour = (hour-24)%1+1;
                    cost = 30 + hour*2;
                }
                else
                {
                    cost = 30 + (hour-24)*2;
                }
            }
            break;
        case 3:
            if(hour<=3)
            {
                cost = 5;
            }
            else if(hour>3&&hour<=24)
            {
                if((10*hour%10)!=0)
                {
                    hour = (hour-3)%1+1;
                    cost = 5 +hour*1;
                }
                else
                {
                    cost = (hour-3)+5;
                }
                if(cost>20)
                {
                    cost=20;
                }
            }
            else
            {
                if((10*hour%10)!=0)
                {
                    hour = (hour-24)%1+1;
                    cost = 20+hour*1;
                }
                else
                {
                    cost = (hour-24)+20;
                }
            }
            break;
    }
    printf("%.2lf",cost);
    return 0;
}*/
/*int main()
{
    int i;
    int year;
    int day;
    scanf("%d-%d-%d",&year,&i,&day);
    //runnian
    if((year%100!=0&&year%4==0)||year%400==0)
    {
        int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        day = day+5;
        if(day>month[i-1])
        {
            day = day-month[i-1]+1;
            i+=1;
            if(i>12)
            {
                i = i-12;
                year+=1;
            }
        }
    }
    else
    {
        int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
        day=day+5;
        if(day>month[i-1])
        {
            day = day-month[i-1]+1;
            i+=1;
            if(i>12)
            {
                i=i-12;
                year+=1;
            }
        }
    }
    printf("%d年%d月%d日",year,i,day);
    return 0;
}*/

 //停车 
/*double game(int a,double b, int c,int d,double hour)
{
    double pay;
    if(hour<=a)
    {
        pay = 5;
    }
    if(hour>a&&hour<=24)
    {
        pay = 5;
        while((hour-a)>0)
        {
            hour-=b;
            pay +=c;
        }
        if(pay>d)
        {
            pay = d;
        }
    }
    return pay;
}
int main()
{
    int type;
    double hour;
    double pay = 0;
    scanf("%d %lf",&type,&hour);
    switch(type)
    {
        case 1:
            if(hour<=24)
            pay = game(1,0.5,2,50,hour);
            if(hour>24)
            {
                pay = 50;
                hour-=24;
                while((hour-24)>0)
                {
                    hour-=24;
                    pay+=50;
                }
            pay+=game(1,0.5,2,50,hour);
            }
            break;
        case 2:
            if(hour<=24)
            {
            pay = game(2,1,2,30,hour);
            }
            if(hour>24)
            {
                pay = 30;
                hour-=24;
                while((hour-24)>0)
                {
                    hour-=24;
                    pay+=30;
                }
                pay+=game(2,1,2,30,hour);
            }
            break;
        case 3:
           if(hour<=24)
           {
            pay = game(3,1,1,20,hour);
           }
            if(hour>24)
            {
                pay = 20;
                hour -=24;
                while((hour-24)>0)
                {
                    hour-=24;
                    pay+=20;
                }
                pay+=game(3,1,1,20,hour);
            }
            break;
    }
    printf("%.2lf\n",pay);
    return 0;
}*/
//周航 2406110037 
/*double game(int a,double b, int c,int d,double hour)
{
    double pay;
    if(hour<=a)
    {
        pay = 5;
    }
    if(hour>a&&hour<=24)
    {
        pay = 5;
        while((hour-a)>0)
        {
            hour-=b;
            pay +=c;
        }
        if(pay>d)
        {
            pay = d;
        }
    }
    return pay;
}
int main()
{
    int type;
    double hour;
    double pay = 0;
    scanf("%d %lf",&type,&hour);
    switch(type)
    {
        case 1:
            if(hour<=24)
            pay = game(1,0.5,2,50,hour);
            if(hour>24)
            {
                pay = 50;
                hour-=24;
                while((hour-24)>0)
                {
                    hour-=24;
                    pay+=50;
                }
            pay+=game(1,0.5,2,50,hour);
            }
            break;
        case 2:
            if(hour<=24)
            {
            pay = game(2,1,2,30,hour);
            }
            if(hour>24)
            {
                pay = 30;
                hour-=24;
                while((hour-24)>0)
                {
                    hour-=24;
                    pay+=30;
                }
                pay+=game(2,1,2,30,hour);
            }
            break;
        case 3:
           if(hour<=24)
           {
            pay = game(3,1,1,20,hour);
           }
            if(hour>24)
            {
                pay = 20;
                hour -=24;
                while((hour-24)>0)
                {
                    hour-=24;
                    pay+=20;
                }
                pay+=game(3,1,1,20,hour);
            }
            break;
    }
    printf("%.2lf\n",pay);
    return 0;
}*/
/*int main() 
{
char ch;
int k;
char =a;
k=12;
printf("%c %d",ch,ch,k);

	printf("%d\n",k);
}*/
/*int main()
{
    long long jiahe = 0;
    long long pingfang = 0;
    long long n;
    long long sum = 0;
    scanf("%d",&n);
    long long arr[n];
    for(long long i =0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        jiahe +=arr[i];
        pingfang += arr[i]*arr[i];
    }
    sum = (jiahe*jiahe-pingfang)/2;
    printf("%lld",sum);
    return 0;
}*/
/*int main()
{
    double new_number;
    int n;
    scanf("%d",&n);
    double sum;
    int f = 1;
    int c = 1;
for(int i=1;i<n;i++)
{
    c*=-1;
    f+=3;
    new_number = (1.000/(c*f));
    sum +=new_number;
}
sum = sum + 1;
printf("%.3lf",sum);
return 0;
}*/
/*int main()
{
    int m,n;
    double new_number;
    double sum = 0;
    scanf("%d %d",&m,&n);
    for(;m<=n;m++)
    {
        new_number = m*m+1.0/m;
        sum = sum +new_number;
    }
    printf("%.6lf",sum);
    return 0;
} */
/*int lifang(int x)
{
    return x*x*x;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(m<=n&&m>100&&n<=999)
    {
    for(;m<=n;m++)
      {
        int ge,shi,bai;
        ge = m%10;
        shi = (m/10)%10;
        bai = m/100;
        if(lifang(ge)+lifang(shi)+lifang(bai)==m)
        {
            printf("%d\n",m);
        }
      }
    }
    else
    {
        printf("Invalid Value");
    }
    return 0;
}*/
/*int main()
    int a,b;
{
    for(int i=1000;i<=9999;i++)
    {
        a = i%100;
        b = i/100;
        if(((a+b)*(a+b))==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}*/
/*int main()
{
    int a1 = 0;
    int a2 = 0;
    float a3;
    float sum = 0;
    int count = 0;
    int n ;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0)
        {
            if(arr[i]>a1)
                a1=arr[i];
        }
        if(arr[i]%3==1)
            a2++;
        if(arr[i]%3==2)
        {
            sum+=arr[i];
            count++;
        }
    }
    a3 = sum/count;
    if(a1==0)
        printf("NONE");
    else
        printf("%d",a1);
    if(a2==0)
        printf("NONE");
    else
        printf("%d",a2);
    if(count==0)
        printf("NONE");
    else
        printf("%.1f",a3);
    return 0;
}*/
/*int main()
{
    int n;
    scanf("%d",&n);
    int c = (n+1)/2;
    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=c-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==2*i-1)
                printf("* \n");
            else
                printf("* ");
        }
    }
    for(int i=1;i<=c-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=(n-2*i);k++)
        {
            if(k==(n-2*i))
                printf("* \n");
            else
                printf("* ");
        }
    }
    return 0;
}*/
/*int main()
{
    int count = 0;
    int n = 0;
    int x;
    int k;
    scanf("%d",&x);
    for(int i=x/5;i>=1;i--)
    {
        for(int j=x/2;j>=1;j--)
        {
            k = x-5*i-2*j;
            if(k>=1)
                {
                    n = i+j+k;
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,n);
                    count++;
                }
            
        }
    }
    printf("count = %d",count);
    return 0;
}*/
/*int main()
{
    int count;
    int m,n;
    int num;
    scanf("%d",&num);
    int arr[2*num];
    for(int i=0;i<num;i++)
    {
        scanf("%d %d",&arr[i],&arr[2*num-i]);
    }
    for(int i=0;i<num;i++)
    {
    	count = 0;
        for(int j=arr[i];j<=arr[2*num-i];j++)
        {
            int ge =j%10;
            int shi = (j/10)%10;
            int bai = j/100;
            if(j==ge*ge*ge+shi*shi*shi+bai*bai*bai)
            {
                count++;
                if(count!=1)
                    printf(" %d",j);
                else
                    printf("%d",j);
            }
        }
        if(count==0)
            printf("no");
        printf("\n");
    }
    return 0;
}*/
/*int main()
{
    int count;
    int m,n;
    int num;
    scanf("%d",&num);
    int arr[2*num];
    for(int i=0;i<num;i++)
    {
        scanf("%d %d",&arr[i],&arr[2*num-i]);
    }
    for(int i=0;i<num;i++)
    {
        if(arr[i]>407&&arr[2*num-i]<153)
        {
            printf("no");
            continue;
        }
        count = 0;
        for(int j=arr[i];j<=arr[2*num-i];j++)
        {
            int ge =j%10;
            int shi = (j/10)%10;
            int bai = j/100;
            if(j==ge*ge*ge+shi*shi*shi+bai*bai*bai)
            {
                count++;
                if(count!=1)
                    printf(" %d",j);
                else
                    printf("%d",j);
            }
        }
        if(count==0)
            printf("no");
        printf("\n");
    }
    return 0;
}
//153 370 371 407*/
/*int main()
{
    int sum = 0;
    int count = 0;
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int y=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                y=1;
                break;
            }
        }
        if(y==0)
        {
            sum+=i;
            count++;
        }
    }
    if(m==1)
    {
        sum-=1;
		count-=1; 
    }
    if(m==2)
    {
        sum+=2;
        count+=1;
    }
    printf("%d %d",count,sum);
    return 0;
}*/
/*int game(int y)
{
    int x = 1;
    for(int i=1;i<=y;i++)
    {
        x*=2;
    }
    return x;
}

int main()
{
    int n;
    int m;
    int count = 0;
    scanf("%d",&n);
    int f = n;
    if(n==2)
    {
        printf("3");
    }
    else
    {
    	int n =2;
    while(n<=f)
    {
        int p = 1;
        m = game(n)-1;
        for(int i=2;i<m;i++)
        {
            if(m%i==0)
                p=0;
        }
        if(p)
        {
        printf("%d\n",m);
            count++;
        }
        n=n+1;
    }
    
    if(count==0)
        printf("None");
    }
    return 0;
}*/
#include<stdio.h>
#include<math.h>
/*int main()
{
    int m,n;
    int count;
    int count1 = 0;
    int sum;
    int arr[1000];
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        sum = 0;
        count = 0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
                arr[count] = j;
                count++;
            }
        }
        if(sum==i)
        {
        	printf("%d = 1 ",i);
            for(int k=1;k<count;k++)
            {
                printf(" + %d",arr[k]);
            }
            printf("\n");
            count1++;
        }
    }
    if(count1==0)
    printf("hehe");
    return 0;
}*/
/*int project(int x,int y)
{
    int arr[10];
    int sum=0;
    int j;
    for(int i=0;i<x;i++)
    {
        j=y%10;
        arr[i] = j;
        y/=10;
    }
    for(int i=0;i<x;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int project1(int x)
{
    int q =1;
    int i;
    for(i=2;i<+7;i++)
    {
        q*=10;
        if((x/q)<10)
            break;
    }
    return i;
}
int main()
{
    int count;
    int new_number;
    int weishu;
    int n;
    int sum;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int sum1;
        weishu = project1(arr[i]);
        sum = project(weishu,arr[i]);
        new_number = arr[i];
        count = 0;
        for(int j=2;j<=9;j++)
        {
            new_number=(arr[i]*j);
            weishu = project1(new_number);
            sum1 = project(weishu,new_number);
            if(sum==sum1)
                count++;
        }
        if(count==8)
            printf("%d\n",sum);
        else
            printf("NO\n");
    }
    return 0;
}*/
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>


#include <stdio.h>
#include <math.h>

/*double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
#include<math.h>
/*double funcos(double e,double x)
{
    double z =1;
    double n=1;
    double sum =1.0;
    while(1)
    {
        if(fabs(z)<e)
        {
            break;
        }
        z*=x;
        z*=x;
        z*=-1;
        z/=(2*n)*(2*n-1);
        sum+=z;
        n++;
    }
    return sum;
}*/
/*#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
/*int CountDigit(int number,int digit)
{
    if(number<0)
        number = -(number);
    int count = 0;
    while(number>0)
    {
        int c = number%10;
        number/=10;
        if(c==digit)
        {
            count++;
        }
    }
    return count;
}*/
#include <stdio.h>
#include <math.h>

/*int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}



int search(int n)
{
    int x =11;
    int count =0;
    int count1 = 0;
    int arr[100];
    while((x*x)<=n)
    {
        x = arr[count];
        count++;
        x++;
    }
    for(int i=0;i<count-1;i++)
    {
        int a=arr[i]%10;
        int b=(arr[i]/10)%10;
        int c=arr[i]/100;
        if(a==b||b==c||a==c)
            count1++;
    }
}*/
/*int main()
{
    int n;
    double number = 1.000000;
    double sum;
    int jc = 1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        jc*=i;
        number/=i;
        sum+=number;
    }
    sum+=1;
    printf("%.8lf",sum);
    return 0;
}*/
/*int project(int x,int y)
{
    int number = y;
    int sum;
    for(int i=2;i<=x;i++)
    {
        y*=10;
        y+=number;
        sum+=y;
    }
    sum+=number;
    return sum;
}
int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    int sum = project(n,a);
    printf("s = %d",sum);
}*/
/*int main()
{
    double x;
    double number = 1.0;
    int jc = 1;
    double sum = 0;
    int count = 1;
    scanf("%lf",&x);
    while(number>0.00001)
    {
        number*=x;
        for(int i=1;i<=count;i++)
        {
        	int c =1;
        	c*=i;
        	jc = c;
		}
        number/=jc;
        sum+=number;
        count++;
    }
    sum+=1;
    printf("%.4lf",sum);
    return 0;
}*/
/*int main() 
{
	int a;
	char b;
	scanf("%d %c",&a,&b);
	printf("%d %c",a,b);
	return 0;
}*/
/*int main()
{
    int month = 1;
    int n;
    int new_rub = 1;
    int old_rub = 0;
    int sum_rub = 0;
    scanf("%d",&n);
    while(sum_rub<n)
    {
       sum_rub = new_rub+old_rub;
	   old_rub = new_rub;
	   new_rub = sum_rub;
	   month++;
    }
    printf("%d\n",month);
    return 0;
}*/
/*int main()
{
    char arr[100];
    int c;
    int i =0 ;
    while((c=getchar())!='\n')
    {
        arr[i++] = c;
    }
    for(int j=0;j<i;j++)
    {
        if('A'<=arr[j]&&arr[j]<='Z')
		{
            arr[j] += 33;
            continue;
        }
        if(arr[j]<='z'&&arr[j]>='a')
            arr[j] -= 31;
    }
    for(int k=0;k<i;k++)
    {
        printf("%c",arr[k]);
    }
    return 0;
}*/
/*int main()
{
    long n;
    int c;
    int i =0;
    int arr[100] = {0};
    scanf("%ld",&n);
    while(n>0)
    {
        c = n%10;
        arr[i] = c;
        n/=10;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}*/
/*int main()
{
    long n;
    int c;
    int i =0;
    int arr[100];
    scanf("%ld",&n);
    while(n>0)
    {
        c = n%10;
        c = arr[i];
        n/=10;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}*/
/*int project(int x,int y,int z)
{
    int arr[3];
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;
    int c;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3-i;j++)
            if(arr[j]<arr[j+1])
            {
                int c = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = c;
            } 
    }
    int max = arr[0]*100+arr[1]*10+arr[2];
    int min = arr[2]*100+arr[1]*10+arr[0];
    printf("%d - %d = %d\n",max,min,max-min);
    return max-min;
}
    int main()
    {
        int a,b,c,d;
        int arr[3];
        int count = 0;
        scanf("%1d%1d%1d",&a,&b,&c);
        a = arr[0];
        b = arr[1];
        c = arr[2];
        do
        {
            count++;
            printf("%d: ",count);
            d=project(arr[0],arr[1],arr[2]);
            arr[0] = d%10;
            arr[1] = (d/10)%10;
            arr[3] = d/100;
        }
        while(d!=495);
        return 0;
    }*/
/*int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    long long arr[18]={1,11,111,1111,11111,111111,1111111,11111111,1111111111,11111111111,111111111111,1111111111111,11111111111111,111111111111111,1111111111111111,11111111111111111,111111111111111111};
    while(1)
    {
        if(arr[i]%n==0)
        {
            break;
        }
        i++;
    }
    long long d=arr[i]/n;
    printf("%lld %d",d,i+2);
    return 0;
}*/
/*int main()
{
    int n;
    int sum=1;
    scanf("%d",&n);
    int f=1;
    while(f<n)
    {
        f=f*10+1;
        sum++;
    }
    while(1)
    {
        printf("%d",f/n);
        f=f%n;
        if(f==0
           {
               break;
           }
           f=f*10+1;
           sum++;
    }
           printf(" %d",sum);
    return 0;
}*/
/*long long sushu(long long x)
{
    long long y =1;
    for(long long i=2;i<x;i++)
    {
        if(x%i==0)
            y=0;
    }
    return y;
}
int main()
{
    long long n;
    long long i;
    long long c;
    scanf("%lld",&n);
    for(i=3;i<=n;i++)
    {
        if(sushu(i)==1&&sushu(n-i)==1)
            break;
    }
           printf("%lld = %lld + %lld",n,i,n-i);
           return 0;0
}*/
/*int sushu(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x == 2)
            return 1;
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i =n-1;
    int count = 0;
    int sum = 0;
    while (count <= k)
    {
        if (sushu(i) && count == k)
        {
            printf("%d=",i);
            sum += i;
            count++;
        }
        else if (sushu(i))
        {
        	if(i==2)
        	{
        		printf("%d=",i);
        		sum+=2;
        		break;
			}
            printf("%d+", i);
            sum += i;
            count++;
        }
        i--;
    }
    printf("%d", sum);
    return 0;
} */
#include <stdio.h>

#include <stdio.h>

/*int f( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d\n", f(n));
    
    return 0;
}

int f(int n)
{
	if(n==0||)
	{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    }
    
        return f(n-2)+f(n-1);
}*/
/*#include <stdio.h>

int is_perimer(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n == 2)
			return 1;
		else 
		{
			if (n % i == 0)
			{
				return 0;
			}
			else
				return 1;
		}
	}
}
int project(int x)
{
	int count = 0;
	int sum = x;
	while (sum != 1)
	{
		int ge = 0;
		int shi = 0;
		int bai = 0;
		if (sum >= 100)
		{
			ge = sum % 10;
			shi = (sum / 10) % 10;
			bai = sum / 100;
		}
		if (sum < 100)
		{
			ge = sum % 10;
			shi = sum / 10;
		}
		sum = ge * ge + shi * shi + bai * bai;
		if (sum == x)
		{
			break;
		}
		count++;
	}
	if (sum == 1)
	{
		if (is_perimer)
		{
			printf("%d %d", x, 2 * count);
		}
		else
		{
			printf("%d %d", x, count);
		}
	}
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	for (int i = 10; i <= 40; i++)
	{
		project(i);
	}
	return 0;
}*/ 
/*#include <stdio.h>
int max=0,min=9999999,total=0;
int fun (void);

int main()
{
 int n;
n=fun();
n=fun();
n=fun();
printf("max=%d min=%d total=%d ave=%.1f",max,min,total,(float)total/n);

}

int fun(void)
{
    int number;
    static int n = 0;
    while(1)
    {
        scanf("%d",&number);
        if(number>=0)
        {
            if(number>=max)
                max = number;
            if(number<=min)
                min = number;
            total +=number;
            n++;
        }
        else
        {
            break;
        }
    }
    return n;
}*/
#include<stdio.h>

/*double m_tax(double salary,int month);

int main()
{
    double money,tax;
    int i;
    for(i=1;i<=12;i++)
    {
        scanf("%lf",&money);
        tax=m_tax(money,i);
        printf("the sum of %d months tax is %.2f\n",i,tax);
    }
    return 0;
}
double m_tax(double salary,int month)
{
    static double sum = 0;
    static double free = 0;
    double tax;
    sum+=salary;
    free+=5000;
    if(sum>free)
    {
        if(sum<=36000)
            tax = (sum-free)*0.03;
        if(sum>36000&&sum<=144000)
            tax = (sum-free)*0.10;
        if(sum>144000&&sum<=300000)
            tax = (sum-free)*0.20;
        if(sum>300000&&sum<=420000)
            tax = (sum-free)*0.25;
        if(sum>420000&&sum<=660000)
            tax = (sum-free)*0.30;
        if(sum>660000&&sum<=960000)
            tax = (sum-free)*0.35;
        if(sum>960000)
            tax = (sum-free)*0.45;
        return tax;
    }
    else
    {
        return 0;
    }
}*/
/*int arr1[10000][2];
int arr2[10000] = {0};
int pingfang(int x)
{
    int ge = 0;
    int shi =0;
    int bai = 0;
    int qian = 0;
    int wan = 0;
    if(x==10000)
    {
        wan = x/10000;
    }
    if(x>=1000&&x<10000)
    {
        qian = x/1000;
        bai = (x/100)%10;
        shi = (x/10)%10;
        ge = x%10;
    }
    if(x>=100&&x<1000)
    {
        ge = x%10;
        shi = (x/10)%10;
        bai = x/100;
    }
    if(x<100)
    {
        ge = x%10;
        shi = x/10;
    }
    int sum = ge*ge+shi*shi+bai*bai+qian*qian+wan*wan;
    return sum;
}
int is_prime(int n) 
{
    if (n <= 1) return 0;
    if (n == 2) return 1;
    for (int i = 2; i*i <= n; i++) 
    {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int a,b;
    int new_number;
    int count;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        count = 0;
        new_number = i;
        while(1&&new_number!=4)
        {
            count++;
            new_number = pingfang(new_number);
            
            if(new_number==1)
            {
                if(is_prime(i))
                {
                    arr1[i][0] = i;
                    arr1[i][1] = 2*count;
                    break;
                }
                else
                {
                    arr1[i][0] = i;
                    arr1[i][1] = count;
                    break;
                }
            }
            else
            {
                if(new_number<=b&&new_number>=a)
                {
                    arr2[new_number]++;
                }
            }
            if(new_number==i)
            break;
        }
    }
    int count1 = 0;
    for(int i=a;i<=b;i++)
    {
        if(arr2[i]==0&&arr1[i][0]==i)
        {
            printf("%d %d\n",arr1[i][0],arr1[i][1]);
            count1++;
        }
    }
    if(count1==0)
    {
        printf("SAD");
    }
    return 0;
}*/
/*int main()
{
    int n;
    int number;
    scanf("%d",&n);
    int arr[n];
    int max_one== -9999;
    int min-one= 9999;
    int a;
    for(int i =0;i<n;i++)
    {
        scanf("%d",&number);
        arr[i] = number;
        if(arr[i]>max)
        {
            max = i;
        }
        if(arr[i]<min)
        {
            min = i;
        }
    }
   printf("%d\n",arr[min]);
   printf("%d\n",arr[max]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/
/*int main()
{
    int n;
    int number;
    scanf("%d",&n);
    int arr[n];
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number);
        arr[i] = number;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(arr[j-1]<arr[j])
            {
            	a = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = a;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}*/
/*int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int number;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number);
        arr[i] = number;
    }
    int a ;
    scanf("%d",&a);
    arr[n] = a;
    int count;
    for(int i=0;i<=n-1;i++)
    {
        for(int j =1;j<=n+1-i;j++)
        {
            if(arr[j]<arr[j-1])
            {
                int a = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = a;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/
/*int main()
{
    int n;
    scanf("%d",&n);
    int number;
    int arr[n];
    int arr1[10] = {0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number);
        arr[i] = number;
    }
    for(int i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            int c = arr[i]%10;
            arr[i]/=10;
            arr1[c]++;
        }
    }
    int max = 0;
    for(int i=0;i<+9;i++)
    {
        if(arr1[i]>max)
        {
            max = arr1[i];
        }
    }
    printf("%d:",max);
    int i = 0;
    while(i<10)
    {
        if(arr1[i]==max)
        {
            printf(" %d",i);
        }
        i++;
    }
    return 0;
}*/
/*int main()
{
    int n;
    int number;
    int count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	arr[i] = -1;
	}
    for(int i=0;i<n;i++)
    {
        count = 0;
        scanf("%d",&number);
        int c = i;
        while(c>0)
        {
            c--;
            if(arr[c]==number)
                count++;
        }
        if(count==0)
            arr[i] = number;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
            printf("%d ",arr[i]);
    }
    return 0;
}*/
/*int main()
{
    int n;
    int number;
    int arr[100000] = {0};
    int arr1[100001]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number);
        arr1[number]++;
        if(arr1[number]==1)
            arr[i] = number;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        printf("%d",arr[i]);
    }
    return 0;
}*/
//姓名：周航 学号：2406110037 
/*int main() 
{
	//字符数组记录输入字符*2
	char str[21];
	char str1[21];
	//整形数组接收字符数组转型*2
	int arr[21] = { 0 };
	int arr1[21] = { 0 };
	//记录结果数组
	int arr2[21];
	int i = 0;
	int ch;
	while ((ch = getchar()) != ' ')
	{
		str[i] = ch;
		//整形数组反着记录
		arr[20-i] = str[i] - '0';
		i++;

	}
	int j = 0;
	while ((ch = getchar()) != '\n')
	{
		str1[j] = ch;
		//整形数组反着记录
		arr1[20-j] = str1[j] - '0';
		j++;
	}
	for (int k = 20; k > 0; k--)
	{
		arr2[k] += (arr[k] + arr1[k]) % 10;
		arr2[k - 1] += (arr[k] + arr1[k]) / 10;
	}
	if (i > j)
	{
		for (int k = 20; k > 20 - i; k--)
		{
			printf("%d\n", arr2[k]);
			if(k==21-j&&arr[20-i]!=0)
			{
				printf("%d\n",arr2[k-1]);
			}
		}
	}
	else
	{
		for (int k = 20; k > 20 - j; k--)
		{
			printf("%d\n", arr2[k]);
			if(k==21-j&&arr[20-j]!=0)
			{
				printf("%d\n",arr2[k-1]);
			}
		}
	}
	//i为第一位数的位数
	//j为第二位数的位数
   return 0;
}*/
/*#include <stdio.h>
int main()
{
    int count =0;
    int n;
    scanf("%d",&n);
    char str[n];
    for(int i=1;i<=n;i++)
    {
        int n1;
        int number;
        scanf("%d",&n1);
        int arr[n1][n1];
        for(int j=0;j<n1;j++)
        {
            for(int k=0;k<n1;k++)
            {
                scanf("%d",&number);
                arr[j][k]=number;
            }
        }
        int jud = 1;
        for(int i=1;i<n1;i++)
        {
            for(int j=0;j<=i-1;j++)
            {
                if(arr[i][j]!=0)
                {
                    jud = 0;
                    break;
                }
            }
        }
        if(jud==1)
        {
            str[count] = 'y';
            count++;
        }
        else
        {
            str[count] = 'n';
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(str[i]=='y')
            printf("YES\n");
        if(str[i]=='n')
            printf("NO\n");
    }
    return 0;
}*/
/*int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int number;
    int max;
    int min;
    int k = 0;
    int l = 0;
    int q = 0;
    int w = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        	 scanf("%d",&arr[i][j]);
            static int max = arr[i][j];
            static int min = arr[i][j];
            if(arr[i][j]>max)
            {
                max = arr[i][j];
                k = i;
                l = j;
            }
            if(arr[i][j]<min)
            {
                min = arr[i][j];
                q = i;
                w = j;
            }
        }
    }
    int z = arr[k][l];
    arr[k][l] = arr[q][w];
    arr[q][w] = z;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-1)
                printf("%d\n",arr[i][j]);
            else
                printf("%d ",arr[i][j]);
        }
    }
    return 0;
}*/
/*int main()
{
    int m,n;
    int count =0;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(count!=0)
            printf("\n");
    int arr[m][n];
    int k = 0;
    int l = 0;
    int q = 0;
    int w = 0;
    int max = 0;
    int min =9999;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             scanf("%d",&arr[i][j]);
            if(arr[i][j]>max)
            {
                max = arr[i][j];
                k = i;
                l = j;
            }
            if(arr[i][j]<min)
            {
                min = arr[i][j];
                q = i;
                w = j;
            }
        }
    }
    int z = arr[k][l];
    arr[k][l] = arr[q][w];
    arr[q][w] = z;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(j==n-1)
            {
              if(i==m-1)
                  printf("%d",arr[i][j]);
              else
                  printf("%d\n",arr[i][j]);
            }
            else
                printf("%d ",arr[i][j]);
        }
        
    }
        count++;
    }
    return 0;
}*/
/*int main()
{
    int n;
    int sum =0;
    scanf("%d",&n);
     int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j||i==n-1-j)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}*/
/*int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		arr[i][j]=0;
		}
	}
    arr[0][0]=1;
    if(n>1)
    {
    	arr[1][0]=1;
    	arr[1][1]=1;
	}
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(j==0)
                arr[i][j]=1;
            else
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==i)
                printf("%d\n",arr[i][j]);
            else
                printf("%d  ",arr[i][j]);
        }
    }
    return 0;
}*/
/*int main()
{
    int arr[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int arr1[4][4]={0};
    for(int i=0;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(arr[i][j]>=arr[i][0]&&arr[i][j]>=arr[i][1]&&arr[i][j]>=arr[i][2]&&arr[i][j]>=arr[i][3])
                arr1[i][j]++;
        }
    }
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<4;i++)
        {
            if(arr[i][j]<=arr[0][j]&&arr[i][j]<=arr[1][j]&&arr[i][j]<=arr[2][j]&&arr[i][j]<=arr[3][j])
                arr1[i][j]++;
        }
    }
    int count=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr1[i][j]==2)
            {
                printf("a[%d][%d]=%d",i,j,arr[i][j]);
                count++;
            }
        }
    }
    if(count==0)
        printf("It is not exist!");
    return 0;
}*/
/*int sz(char arr[100])
{
    int count=0;
    while(arr[count]!='\0')
    {
        count++;
    }
    return count;
}
int main()
{
    char arr[100];
    char ch;
    int j=0;
    while((ch=getchar())!='\n')
    {
        arr[j]=ch;
        j++;
    }
    int size =sz(arr);
    int biaoji=1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[size-1-i])
        biaoji = 0;
    }
    if(biaoji)
    {
        printf("%s\n",arr);
        printf("Yes");
    }
    else
    {
        printf("%s\n",arr);
        printf("No");
    }
    return 0;
}*/
/*int main()
{
    char ch;
    char arr[100];
    int i=0;
    while((ch=getchar())!='\n')
    {
        arr[i]=ch;
        i++;
    }
    int n;
    scanf("%d",&n);
    for(int j=0;j<=i;j++)
    {
        if((arr[j]>='a'&&arr[j]<='z')||(arr[j]<='Z'&&arr[j]>='A'))
        {
        	if(arr[j]+n<65)
        	{
        		arr[j]=arr[j]+26+n;
			}
			else if(arr[j]+n>90&&arr[j]<97&&arr[j]<='Z'&&arr[j]>='A')
			{
				arr[j]=arr[j]-26+n;
			}
			else if(arr[j]+n>90&&arr[j]<97&&arr[j]>='a'&&arr[j]<='z')
			{
				arr[j]=arr[j]+26+n;
			}
			else if(arr[j]+n>122)
			{
				arr[j]=arr[j]-26+n;
			}
			else
			{
				arr[j]=arr[j]+n;
			}
		}
    }
        printf("%s",arr);
    return 0;
}*/
/*int main()
{
    char arr[101];
    char ch;
    int i=100;
    while((ch=getchar())!='\n')
    {
        arr[i]=ch;
        i--;
    }
    for(int j=i+1;j<=100;j++)
    {
    printf("%c",arr[j]);
    }
    return 0;
}*/

/*int zh(int n)
{
    int num =1;
    for(int i=1;i<=n;i++)
    {
        num*=16;
    }
    return num;
}
int main()
{
    int ch;
    char arr[100];
    int i=0;
    int arr1[100];
    while((ch=getchar())!='#')
    {
        if((ch<='9'&&ch>='0')||(ch<='f'&&ch>='a')||(ch<='F'&&ch>='A'))
        {
            arr[i]=ch;
            if(ch<='9'&&ch>='0')
            arr1[i]=ch-'0';
            else if(ch<='f'&&ch>='a')
            arr1[i]=arr[i]-87;
            else
            arr1[i]=arr[i]-55;
            i++; 
        }
        if(i==0&&ch=='-')
        {
            arr[i]='-';
            arr1[i]=0;
            i++;
        }
    }
    //16进制转十进制
    long long sum =0;
    if(arr[0]=='-')
    {
        for(int j=1;j<i;j++)
        {
            sum+=arr1[j]*zh(i-j-1);
        }
    }
    else
    {
        for(int j=0;j<i;j++)
        {
            sum+=arr1[j]*zh(i-j-1);
        }
    }
    
    if(arr1[1]==0&&arr[0]=='-')
    {
	
        printf("0");
    }
    else
    {
	    if(arr[0]=='-')
		printf("-");
        printf("%lld\n",sum);
    }
    return 0;
}*/
/*int main()
{
    int found = -1;
    char n;
    int ch;
    char arr[100];
    int i=0;
    scanf("%c",&n);
    char n1;
    scanf("%c",&n1);
    while((ch=getchar())!='\n')
    {
    	int count=0;
        arr[i]=ch;
        if(arr[i]==n&&count==0)
        {
            found=i;
            count++;
        }
        i++;
    }
    if(found==-1)
        printf("Not found");
    else
        printf("%d",found);
    return 0;
}*/
/*int main()
{
    int ch;
    int i=0;
    char arr[100];
    while((ch=getchar())!='\n')
    {
        if(ch<='Z'&&ch>='A')
        {
            arr[i]=ch;
            i++;
        }
    }
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<j;k++)
        {
            if(arr[j]==arr[k])
            {
                arr[j]='0';
                break;
            }
        }
    }
    for(int j=0;j<i;j++)
    {
        if(arr[j]!='0')
            printf("%c",arr[j]);
    }
    return 0;
}*/
//周航 2406110037 
#include <stdio.h>
#define MAXN 10

/*void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

void ArrayShift(int a[],int n,int m)
{
    for(int i=0;i<n-m;i++)
    {
        *(a+n+i)=*(a+i);
    }
    for(int i=0;i<n;i++)
    {
        *(a+i)=*(a+i+(n-m));
    }
}*/
/*#include <iostream>
using namespace std;
#define N 10

void row_sum(int m,int n,int a[N][N],int* res);
int main()
{
    int m,n;
    cin >> m >> n;
    int a[N][N];
    int b[m];
    for (int i=0;i<m;++i){
        for (int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    row_sum(m,n,a,b);
    for (int i=0;i<m;++i){
        cout << b[i] << endl;
    }

    return 0;
}
void row_sum(int m,int n,int a[N][N],int* res)
{
	
    for(int i=0;i<m;i++)
    {
    	*(res+i)=0;
        for(int j=0;j<n;j++)
        {
            *(res+i)+=a[i][j];
        }
    }
}*/
/*double* select(int* a,int n)
{
    double* arr=(double*)malloc(3*sizeof(double));
    double max = 0;
    double min = 9999;
    double average = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)>max)
            max=*(a+i);
        if(*(a+i)<min)
            min=*(a+i);
        sum+=*(a+i);
    }
    average = (double)sum/n;
    *(arr)=average;
    *(arr+1)=max;
    *(arr+2)=min;
    return arr;
}
int main()
{
    int n,number;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number);
        *(a+i)=number;
    }
    double* arr=select(a,n);
    printf("average = %.2lf\n",*arr);
    printf("max = %.2lf\n",*(arr+1));
    printf("min = %.2lf\n",*(arr+2));
    free(arr);
    return 0;
}*/


/*int main()
{
    char arr1[100];
    char arr2[100];
    char arr3[100];
    char arr4[100];
    char arr5[100];
    int i=0;
    scanf("%s",arr1);
    scanf("%s",arr2);
    scanf("%s",arr3);
    scanf("%s",arr4);
    scanf("%s",arr5);
    char* str[5]={arr1,arr2,arr3,arr4,arr5};
    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(*str[j]==*str[j+1])
            {
            	char* arr1=str[j];
                char* arr2=str[j+1];
                while(*arr1==*arr2)
                {
                    arr1++;
                    arr2++;
                    if(*arr1>*arr2)
                    {
                        char* temp = str[j];
                        str[j]=str[j+1];
                        str[j+1]=temp;
                    }
                }
			}
			else
			{
			if(*str[j]>*str[j+1])
			{
                char* temp = str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
			}
        }
    }
    printf("After sorted:\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}*/
#include<stdio.h>
/*struct workers
{
    char name[20];
    double basic_salary;
    double float_salary;
    double output;
    double real_salary;
};
int main()
{
    struct workers worker[100];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s %lf %lf %lf",&worker[i].name,&worker[i].basic_salary,&worker[i].float_salary,&worker[i].output);
        worker[i].real_salary=worker[i].basic_salary+worker[i].float_salary-worker[i].output;
    }
    for(int j=0;j<n;j++)
    {
    	printf("%s %.2lf",worker[j].name,worker[j].real_salary);
    	printf("\n");
	}
    return 0;
}*/
/*struct books
{
    char name[40];
    double price;
};
int main()
{
    int n;
    struct books book[1000];
    int max = -1;
    int min = 9999;
    int max_book;
    int min_book;
    scanf("%d",&n);
    getchar() ;
    for(int i=0;i<n;i++)
    {
    	gets(book[i].name);
        scanf("%lf",&book[i].price);
        getchar();
        if(book[i].price>max)
        {
            max_book=i;
            max=book[i].price;
        }
        if(book[i].price<min)
        {
            min_book=i;
            min=book[i].price;
        }
    }
    printf("%.2lf, %s\n",book[max_book].price,book[max_book].name);
    printf("%.2lf, %s",book[min_book].price,book[min_book].name);
    return 0;
}*/
/*struct students
{
    char number[6];
    char name[20];
    int sorce;
};
int main()
{
    struct students student[1000];
    int n;
    long sum=0;
    int average;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d",&student[i].number,&student[i].name,&student[i].sorce);
        sum+=student[i].sorce;
    }
    average =sum/n;
    printf("%d\n",average);
    for(int i=0;i<n;i++)
    {
        if(student[i].sorce<average)
            printf("%s %s\n",student[i].name,student[i].number);
    }
    return 0;
}*/

/*struct virus_s
{
    int number;
    int pi;
    int di;
}; 
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        struct virus_s virus[1000];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d %d",&virus[i].number,&virus[i].pi,&virus[i].di);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(virus[j].pi>virus[j+1].pi)
                {
                    struct virus_s temp=virus[j];
                    virus[j]=virus[j+1];
                    virus[j+1]=temp;
                }
                if(virus[j].pi==virus[j+1].pi&&virus[j].di<virus[j+1].di)
                {
                    struct virus_s temp = virus[j];
                    virus[j]=virus[j+1];
                    virus[j+1]=temp;
                }
            }
        }
		printf("result\n");
        for(int i=0;i<n;i++)
        {
            printf("%d %d %d",virus[i].number,virus[i].pi,virus[i].di);
            printf("\n");
        }
    }
    return 0;
}*/
/*struct virus_s
{
    int number;
    int pi;
    int di;
}; 
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        struct virus_s virus[1000];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d %d",&virus[i].number,&virus[i].pi,&virus[i].di);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(virus[j].pi>virus[j+1].pi)
                {
                    struct virus_s temp=virus[j];
                    virus[j]=virus[j+1];
                    virus[j+1]=temp;
                }
                if(virus[j].pi==virus[j+1].pi&&virus[j].di<virus[j+1].di)
                {
                    struct virus_s temp = virus[j];
                    virus[j]=virus[j+1];
                    virus[j+1]=temp;
                }
            }
        }
        printf("result\n");
        for(int i=0;i<n;i++)
        {
            printf("%d %d %d",virus[i].number,virus[i].pi,virus[i].di);
            printf("\n");
        }
    }
    return 0;
}*/
/*struct classes
{
    char name[20];
    double sc1;
    double sc2;
};
int main()
{
    int n ;
    struct classes clas[1000];
    scanf("%d",&n);
    getchar();
    for(int i= 0;i<n;i++)
    {
        scanf("%s %lf %lf",&clas[i].name,&clas[i].sc1,&clas[i].sc2);
        getchar();
    }
    for(int i=0;i<n-1;i++)
    {
    	for(int j=0;j<n-1-i;j++)
    	{
    		if(clas[j].sc1<clas[j+1].sc1)
    		{
    			struct classes temp = clas[j];
    			clas[j]=clas[j+1];
    			clas[j+1]=temp;
			}
			if(clas[j].sc1==clas[j+1].sc1&&clas[j].sc2<clas[j+1].sc2)
			{
				struct classes temp = clas[j];
				clas[j]=clas[j+1];
				clas[j+1]=temp;
			}
			if(clas[j].sc1==clas[j+1].sc1&&clas[j].sc2==clas[j+1].sc2)
			{
				if (strcmp(clas[j].name, clas[j+1].name) > 0)
				{
				struct classes temp = clas[j];
				clas[j] = clas[j+1];
				clas[j+1] = temp;
				}
			}
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(i>0)
		{
			if(clas[i].sc1==clas[i-1].sc1&&clas[i].sc2==clas[i-1].sc2)
			{
				count++;
				printf("%d %s %.2lf %.2lf",i+1-count,clas[i].name,clas[i].sc1,clas[i].sc2);
			}
			else
			{
				printf("%d %s %.2lf %.2lf",i+1,clas[i].name,clas[i].sc1,clas[i].sc2);
				count=0;
			}
		}
		else 
		printf("1 %s %.2lf %.2lf",clas[i].name,clas[i].sc1,clas[i].sc2);
		printf("\n");
	}
    return 0;
}*/
/*struct students
{
    char name[20];
    char number[10];
    char gender;
    int sc1;
    int sc2;
    int sc3;
};
int main()
{
    struct students student[1000];
    int n;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    int m_count=0;
    int f_count=0;
    int av1;
    int av2;
    int av3;
    int av4;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %c %d %d %d",&student[i].name,&student[i].number,&student[i].gender,&student[i].sc1,&student[i].sc2,&student[i].sc3);
        getchar();
        sum1+=student[i].sc1;
        sum2+=student[i].sc2;
        if(student[i].gender=='M')
        {
        	sum3+=student[i].sc3;
        	m_count++;
		}
		if(student[i].gender=='F')
		{
			sum4+=student[i].sc3;
			f_count++;
		}
    }
    av1=sum1/n;
    av2=sum2/n;
    av3=sum3/m_count;
    av4=sum4/f_count;
    printf("%d %d %d %d\n",av1,av2,av3,av4);
    for(int i=0;i<n;i++)
    {
    	if(student[i].gender=='M')
    	{
    		if(student[i].sc1<60||student[i].sc2<60||student[i].sc3<60)
    		printf("%s,%s,%c\n",student[i].name,&student[i].number,student[i].gender);
		}
		else
		{
			if(student[i].sc1<60||student[i].sc2<60||student[i].sc3<60)
    		printf("%s,%s,%c\n",student[i].name,&student[i].number,student[i].gender);
		} 
	}
	return 0; 
}*/
//姓名 周航 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>
//姓名：周航 学号：2406110037 

#include <stdio.h>
#include <string.h>
#include<errno.h>
#include<stdlib.h>

int main()
{
   int n;
   scanf("%d", &n);
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=n;j++)
      {
         if(i==1||j==1||i==n||j==n)
         printf("*");
         else
         printf(" ");
      }
      printf("\n");
   }
   return 0;
}
