#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//main()
//{ int a,b,c;
//  a=getchar();
//  b=getchar();
//  c=getchar();
//  printf("a=%d b=%d c=%d\n",a,b,c);
//  printf("a=%c b=%c c=%c\n",a,b,c);
//}
//
//#include "stdio.h" 
//main() 
//{    float area,r; 
//     scanf("%f",&r); 
//     area=3.14159*r*r; 
//     printf("%0.2f",area); 
//}
//
//void main()
//{
//  char a,b,c;
//  printf("input character:");
//  scanf("%c %c %c",&a,&b,&c);
//  printf("%d,%d,%d\n%c,%c,%c\n",a,b,c,a-32,b-32,c-32);
//}
//
//#include "stdio.h"
//  void main( )
//  {   int a,b,t;
//      t = 0;
//      scanf("%d,%d",&a,&b);
//      if (a>b)
//        { t = a ;
//          a = b ;
//          b = t ;
//}
//    printf("a=%d,b=%d\n",a,b) ;
//  }
//
//void main(){
//    int a,b,max;
//    printf("input two numbers: ");
//    scanf("%d%d",&a,&b);
//    max = a>b?a:b;
//    printf("max=%d\n", max);
//}
//
//void main()
//{
//    int a;
//    printf("input integer number:");
//    scanf("%d",&a);
//	switch (a)
//	{ 
//		case 1:printf("Monday\n");break;
//		case 2:printf("Tuesday\n");break;
//		case 3:printf("Wednesday\n");break;
//		case 4:printf("Thursday\n");break;
//		case 5:printf("Friday\n");break;
//		case 6:printf("Saturday\n");break;
//		case 7:printf("Sunday\n");break;
//		default:printf("error\n");break;
//    }
//}
//
//#include <stdio.h>
//void main()
//{
//    int s = 0, n, i = 1;
//    scanf_s("%d", &n);
//    while (i <= (2 * n - 1))
//    {
//        s += i;
//        i += 2;
//    }
//    printf("1+3+…+%d=%d\n", 2 * n - 1, s);
//}
//
//#include <stdio.h>
//int main()
//{
//    float a;
//    scanf("%f",&a);
//    printf("%4.2f",a);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int n=3,i;
//    int a[n];
//    for(i=0;i<3;i++)
//    scanf("%d",&a[i]);
//    for(i=0;i<3;i++)
//    printf("%d",&a[i]);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char a[5];
//    gets(a);
//    printf("%s",a);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int a; 
//    srand((unsigned)time(NULL));
//    a=rand()%232;
//    printf("%d",a);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    srand(1);
//    int i;
//    for (i = 0; i < 10; i++)
//    printf("%d, ", rand()%11); 
//}
//
//
//全局变量的使用
//#include <stdio.h>
//float s;
//float b(float r)
//{
//    extern float s;
//    float v;
//    v=(float)(r*r);
//    s=(float)(r*r*r);
//    return v;
//}
//int main()
//{
//    float x,v;
//    extern float s;
//    scanf_s("%f",&x);
//    v=b(x);
//    printf("%f  %f",v,s);
//    return 0;
//}
//float s;
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int i;
//    srand((unsigned)time(NULL));
//    for(i=0;i<10;i++)
//    printf("%d ",rand()%11);
//    return 0;
//}
//
//int main()
//{
//    int a=10;
//    int *p=&a;
//    *p=19;
//    printf("%d",a);
//    return 0;
//}
//
//#include<stdio.h>
//void main()
//{
//    int max,a,b,c;
//    scanf("%d%d%d",&a,&b,&c);
//    max=a>b? a:b;
//    max=max>c? max:c;
//    printf("%d",max);
//}
//
//
//#include <stdio.h>
//int main()
//{
//    char a[10]={"name\na"};
//    printf("%s",a);
//    return 0;
//}
//
//while练习
//#include <stdio.h>
//void main()
//{
//    int s = 0, n, i = 1;
//    scanf_s("%d", &n);
//    while (i <= (2 * n - 1))
//    {
//        s += i;
//        i += 2;
//    }
//    printf("1+3+…+%d=%d\n", 2 * n - 1, s);
//}
//
//do_while练习
//#include <stdio.h>
//void main()
//{
//    int s = 0, n, i = 1;
//    scanf_s("%d", &n);
//    do
//    {
//        s += i;
//        i += 2;
//    } while (i <= (2 * n - 1));
//    printf("1+3+…+%d=%d\n", 2 * n - 1, s);
//}
//
//for练习
//#include <stdio.h>
//int main()
//{
//    int s = 0, n, i;
//    scanf_s("%d", &n);
//    for (i = 1; i <= 2 * n - 1; i += 2)
//    {
//        s += i;
//    }
//    printf("1+3+…+%d=%d\n", 2 * n - 1, s);
//    return 0;
//}
//
//已知每只公鸡5元，每只母鸡3元，三只小鸡1元，现有100元，要买100只鸡，问公鸡、母鸡、小鸡各多少只。
//#include <stdio.h>
//void main() {
//	int x, y, z;
//	for (x = 0; x <= 20; x++)
//		for (y = 0; y <= 33; y++)
//		{
//			z = 100 - x - y;
//			if ((5 * x + 3 * y + z / 3) == 100)
//				printf("Cock=%2d, Hen=%2d, Chick=%2d\n", x, y, z);
//		}
//}
//
//统计键盘输入的大写字母、小写字母、数字字符、其他字符的个数，遇到'#'结束。
//#include <stdio.h>
//void main()
//{
//    int b = 0, s = 0, n = 0, t = 0, i = 1;  /*b为大写字母个数，s为小写字母个数，n为数字，t为其他字符*/
//    char c;
//    while (1)
//    {
//        printf("The No. is %d\n", i++);
//        do {
//            c = getchar();
//            if (c >= 'A' && c <= 'Z') b++;
//            else if (c >= 'a' && c <= 'z') s++;
//            else if (c >= '0' && c <= '9') n++;
//            else	 t++;
//        } while (c != '\n' && c != '#');
//        if (c == '#')   break;
//    }
//    printf("The end\n");
//    printf("Capital letters is %d\n", b);
//    printf("Small letters is %d\n", s);
//    printf("Digits is %d\n", n);
//    printf("other character %d\n", t);
//}
//
//求输入的十个整数中正整数的个数及其平均值。
//#include <stdio.h>
//void main() {
//	int i, a, num = 0, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a);
//		if (a <= 0)
//			continue;       /*不进行计数和累加*/
//		num++;
//		sum += a;
//	}
//	printf("%d个正整数之和为%d\n", num, sum);
//	printf("平均值为%0.2f\n", sum * 1.0 / num);
//}
//
//
//求两个数最大公约数
//辗转相除法：又名欧几里德算法，它是已知最古老的算法，辗转相除法的核心就是不断的让两个数做除法运算。
//其原理基于两个整数的最大公约数等于其中较小的数和两数的相除余数的最大公约数。
//#include <stdio.h>
//void main()
//{
//	int x, y, z, m, n;
//	printf("请输入两个数：");
//	scanf_s("%d%d", &x, &y);
//	m = x, n = y;
//	while (y != 0)
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	printf("最大公约数是: %d\n", x);
//}
//
//#include "stdio.h"
//void main()
//{
//	int a[4];  a[0] = 2; a[1] = 4; a[2] = 6; a[3] = 8;
//	printf("\n%d %d %d %d\n", a[0], a[1], a[2], a[3]);
//}
//#include "stdio.h"
//void main()
//{
//	int i, a[4];
//	for (i = 0; i < 4; i++)
//		scanf_s("%d", &a[i]);
//	printf("\n");
//	for (i = 0; i < 4; i++)
//		printf("%d  ", a[i]);
//	printf("\n");
//}
//#include "stdio.h"
//void main()
//{
//    int i, a[10];                     /* 定义循环变量i和一维数组a */
//    for (i = 0; i <= 9; i++)
//        scanf_s("%d", &a[i]);
//    for (i = 9 ; i >= 0; i--) /* 请补充完整循环语句 */
//        printf("%d  ", a[i]);          /* 按照逆序输出 */
//    printf("\n");
//}
//#include "stdio.h"
//void main()
//{
//	int i, j, a[2][3] = { {1,2,3},{4,5,6} };
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//}
//#include <stdio.h>
//#define N 6		
//void main(void) {
//	int a[N][N];
//	int i, j;
//	for (i = 0; i < N; i++) {
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (i = 2; i < N; i++)
//		for (j = 1; j < i; j++)
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//	printf("杨辉三角为：\n");
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < i + 1; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//}
//#include "stdio.h"
//void main()
//{
//    char a[10] = { 'I',' ','a','m',' ','a',' ','b','o','y' };
//    int i;
//    for(i=0;i<=9;i++)
//    printf("%d\n", a[i]);
//}
//#include "stdio.h"
//void main()
//{
//    char a[10] = { 'I',' ','a','m',' ','a',' ','b','o','y' };
//    printf("%s\n", a);
//}
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char str[15];
//    printf("请从键盘输入一个字符串\n");
//    gets(str);
//    printf("你输入的字符串是：\n");
//    puts(str);
//    system("PAUSE");
//    return 0;
//}
//#include "stdio.h"
//#include <string.h>
//void main()
//{
//    char str1[80] = "This Is a ", str2[80] = "c Program";
//    printf("String1 is: %s\n", str1);
//    printf("String2 is: %s\n", str2);
//    strcat_s(str1,80,str2);          /*使用strcat函数实现，注意其格式*/
//    printf("Result is: %s\n", str1);
//}
//#include <stdio.h>
//void main()
//{
//    int i, p = 0, a[10];               /* 定义a为数组名，p为下标名 */
//    for (i = 0; i < 10; i++)
//        scanf_s("%d", &a[i]);
//    for (i = 1; i < 10; i++)
//        if (a[i] < a[p])
//
//    printf("%d,%d", a[p], p);       /* 输出一维数组a中的最小值及其下标 */
//}
// 
// 
////输入一个整数，计算该整数的阶乘并输出结果，计算完后，可以选择是否进行下一次运算
//#include <stdio.h>
//int main()
//{
//	int a,i;
//	char judge;
//	while (1)//用于后续判断是否要继续运算
//	{
//		printf("请输入一个整数：");
//		scanf_s("%d", &a);
//		for (i = a - 1; i > 0; i--)
//		{
//			a *= i;
//		}
//		printf("该数的阶乘等于%d\n", a);
//		getchar();//清除键盘缓存区的空字符
//		printf("请选择是否继续计算(Y/N)：");
//		scanf_s("%c", &judge);
//		if (judge == 'N')
//			return 0;
//	}
//	return 0;
//}
//输出九九乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int a, b,k;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b < a + 1; b++)
//		{
//			k = a * b;
//			printf("%d  ", k);
//		}
//		printf("\n");//每输出一行后换行
//	}
//	return 0;
//}
//猜数字游戏，预定一个两位整数（rand()函数产生一个伪随机整数(short型)，引入头文件<stdlib.h>），
// 游戏人输入一个整数，提示是大了还是小了，直到游戏人输入正确。
//头文件引入#include<time.h>
//产生随机种子：srand(static_cast<unsigned int>(time(NULL)));
//这样每次运行程序，可产生不一样的随机数。
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//}
//#include "stdio.h"
//void main()
//{
//	int a[4] = { 0,1,2,3 };
//	printf("\n%d  %d  %d  %d\n", a[0], a[1], a[2], a[3]);
//}
//#include "stdio.h"
//void main()
//{
//	int a[4]; 
//	a[0] = 2; a[1] = 4; a[2] = 6; a[3] = 8;
//	printf("\n%d %d %d %d\n", a[0], a[1], a[2], a[3]);
//}
//#include "stdio.h"
//void main()
//{
//	int i, a[4];
//	for (i = 0; i < 4; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	for (i = 0; i < 4; i++)
//		printf("%d  ", a[i]);
//	printf("\n");
//}
//
//#include "stdio.h"
//void main()
//{
//    int i, a[10];                     /* 定义循环变量i和一维数组a */
//    for (i = 0; i <= 9; i++)
//        scanf("%d", &a[i]);
//    for (i = 9; i >= 0;i--)      /* 请补充完整循环语句 */
//        printf("%d  ", a[i]);          /* 按照逆序输出 */
//    printf("\n");
//}
//#include "stdio.h"
//void main()
//{
//	int i, j, a[2][3] = { {1,2,3},{4,5,6} };
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//}
//
//#include <stdio.h>
//#define N 6		
//void main(void) {
//	int a[N][N];
//	int i, j;
//	for (i = 0; i < N; i++) {
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (i = 2; i < N; i++)
//		for (j = 1; j < i; j++)
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//	printf("杨辉三角为：\n");
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < i + 1; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//}
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char str[15];
//    printf("请从键盘输入一个字符串\n");
//    gets(str);
//    printf("你输入的字符串是：\n");
//    puts(str);
//    system("PAUSE");
//    return 0;
//}
//下面程序的功能是用strcat函数实现将字符串2连接到字符串1的后面并输出
//#include "stdio.h"
//#include <string.h>
//void main()
//{
//    char str1[80] = "This Is a ", str2[80] = "c Program";
//    printf("String1 is: %s\n", str1);
//    printf("String2 is: %s\n", str2);
//    strcat(str1, str2);          /*使用strcat函数实现，注意其格式*/
//    printf("Result is: %s\n", str1);
//}
//下面程序的功能是：输出一维数组a中的最小值及其下标。请在程序中的横线上填入正确的内容。
//#include "stdio.h"
//void main()
//{
//    int i, p = 0, a[10],temp, k=0;               /* 定义a为数组名，p为下标名 */
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    for (i = 1; i < 10; i++)
//        if (a[i] < a[p]) 
//        {
//            temp=a[i];
//            a[i] = a[p];
//            a[p] = temp;
//            k++;
//        }
//    p = k;
//    printf("%d,%d", a[p], p);       /* 输出一维数组a中的最小值及其下标 */
//}
//
//#include "stdio.h"
//void main()
//{
//    int i, p = 0, a[10];               /* 定义a为数组名，p为下标名 */
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    for (i = 1; i < 10; i++)
//        if (a[i] < a[p])
//        {
//            p = i;
//        }
//    printf("%d,%d", a[p], p);       /* 输出一维数组a中的最小值及其下标 */

//#include <stdio.h>
//void sum(int a, int s);
//
//int main()
//{
//    int n = 5, sm = 0;
//    printf("\n n=%d,sm=%d\n", n, sm);
//    printf("\n sm address=%xd\n", &sm);
//    sum(n, sm);
//    printf("\n n=%d,sm=%d\n", n, sm);
//    return 0;
//}
//
//void sum(int a, int s)
//{
//    int i;
//    printf("\n n=%d,s=%d\n", a, s);
//    printf("\n s address=%xd\n", &s);
//    for (i = 1; i <= a; i++)
//        s = s + i;
//    printf("\n n=%d,s=%d\n", a, s);
//}

//#include <stdio.h>
//int f1(int x)
//{
//    static int z = 3, y = 0;
//    y++;
//    z++;
//    return(x + y + z);
//}
//void main()
//{
//    int a = 1, k;
//    for (k = 0; k < 3; k++)
//        printf("%4d", f1(a));
//}

//#include <stdio.h>
//int fib(int n);/*函数说明*/
//
//void main(void)
//{
//	printf("%d\n", fib(12));
//}
//
//int fib(int n)
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2);
//	else if (n == 1 || n == 2)
//		return 1;
//	else
//		return -1;
//}

//#include <stdio.h>
//void main()
//{
//	int i = 1;
//	printf("%X\n", &i);
//	{
//		int i = 3;
//		printf("%X\n", &i);
//		printf("%d\n", i);
//	}
//	printf("%d\n", i);
//}

//#include <stdio.h>
//int a = 3, b = 5;      /*a,b为全局变量*/
//int max(int a, int b) /*a,b为局部变量*/
//{
//	int c;        /*c为局部变量*/
//	c = a > b ? a : b;
//	return(c);
//}
//void main()
//{
//	int a = 8;     /*a为局部变量*/
//	printf("%d\n", max(a, b));/*max的形参a是main函数中的局部变量*/
//}
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int* pointer_1, * pointer_2;
//	a = 100; b = 10;
//	pointer_1 = &a;
//	pointer_2 = &b;
//	printf("%d,%d\n", a, b);
//	printf("%d,%d\n", *pointer_1, *pointer_2);
//}
//#include <stdio.h>
//void swap(int* p1, int* p2)
//{
//	int p;
//	p = *p1;
//	*p1 = *p2;
//	*p2 = p;
//}
//void main()
//{
//	int a, b;
//	int* p, * q;
//	scanf("%d,%d", &a, &b);
//	p = &a; q = &b;
//	if (a < b) swap(p, q);
//	printf("\n%d,%d\n", a, b);
//}
//用指针法输入 12 个数,然后按每行 4 个数输出
//#include <stdio.h>
//int main()
//{
//	int a[12];
//	int i = 0;
//	int* p = a;
//	for (i = 0; i < 12; i++)
//		scanf("%d", p++);
//	p = a;
//	for (i = 0; i < 12; i++)
//	{
//		if (i % 4 == 0)
//			printf("\n");
//		printf("%d ", *p++);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//struct tree
//{
//	int x;
//	char* s;
//}t;
//
//func(struct tree t)
//{
//	t.x = 10;
//	t.s = "computer";
//	return 0;
//}
//
//main()
//{
//	t.x = 1;
//	t.s = "minicomputer";
//	func(t);
//	printf("%d,%s\n", t.x, t.s);
//}
//#include <stdio.h>
//
//struct  sample
//
//{
//	int a, b;
//	char* ch;
//};
//
//void f1(struct sample param)
//{
//	param.a += param.b;
//	printf("%d\n", param.a);
//	printf("%s\n", param.ch);
//}
//
//void main()
//{
//	struct sample arg;
//	arg.a = 1000;
//	arg.b = 100;
//	arg.ch = "abcd";
//	f1(arg);
//}
//#include <stdio.h>
//void swap(int** pa, int** pb)
//{
//	int* z;
//	z = **pa;
//	**pa = **pb;
//	**pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	int* paa = &pa;
//	int* pbb = &pb;
//	swap(paa, pbb);
//	printf("%d %d ", a, b);
//	return 0;
//}
// 
//基于结构体数组的学生成绩管理
//#include <stdio.h>
//struct Student 
//{
//	int studid;		/*学号*/
//	char name[10];	/*姓名*/
//	int math;		/*数学成绩*/
//	int english;		/*英语成绩*/
//	int total;		/*总成绩*/
//};
//main()
//{
//	struct Student stud,student[12]; 	/*保存12个学生成绩的结构体数组*/
//	int i, j;
//	printf("请依次输入学号、姓名、数学成绩、英语成绩 \n");
//	for (i = 0; i < 2; i++)
//	{
//		scanf("%d", &student[i].studid);
//		scanf("%s", student[i].name);
//		scanf("%d", &student[i].math);
//		scanf("%d", &student[i].english);
//		student[i].total = student[i].math + student[i].english;  /*计算总成绩*/
//	}
//	for (i = 0; i < 1; i++) 	  /*采用对总成绩采用冒泡算法来排序*/
//		for (j = 0; j < 1-i; j++)
//			if (student[j].total > student[j + 1].total) 
//			{
//				stud = student[j]; 
//				student[j] = student[j +1]; 
//				student[j +1] = stud;
//			}
//	printf("按照总分进行从高到低排序，其排序输出如下：\n");
//	printf("  学号 \t 姓名\t数学成绩 英语成绩 总分 \n");
//	for (i = 0; i < 2; i++) 
//	{
//		printf("%d\t", student[i].studid); 
//		printf("%s\t", student[i].name);
//		printf("  %d\t", student[i].math); 
//		printf("   %d\t", student[i].english);
//		printf("  %d\n", student[i].total);
//	}
//	return 0;
//}
//通过下面例子，进一步理解共用体
//#include <stdio.h>
//void main()
//{
//	union
//	{
//		char c;
//		int i;
//		short a;
//	}test;
//	test.i = 0x12345678;
//	printf("%x\n", test.i);
//	printf("%c\n", test.c);
//	printf("%x\n", test.a);
//	test.c = 'A';
//	printf("Give a value to c:\n");
//	printf("%x\n", test.i);
//	printf("%c\n", test.c);
//	printf("%x\n", test.a);
//}
//将键盘上输入的一个字符串写入在文本文件中，然后读出并显示
//#include <stdio.h>
//void main()
//{
//	char ch; FILE* fp;		/*文件指针*/
//	fp = fopen("string.txt", "wt");	/*创建文件并打开文件*/
//	while ((ch = getchar()) != '#')  	/*从键盘输入字符*/
//		fputc(ch, fp); 			/*把字符写入文件*/
//	fclose(fp); 			/*关闭创建完毕的文件*/
//	fp = fopen("string.txt", "rt");	/*创建文件并打开文件*/
//	while ((ch = fgetc(fp)) != EOF)  	/*从文件读入字符*/
//		putchar(ch); 			/*把字符显示到屏幕上*/
//	putchar('\n');			/*屏幕换行*/
//	fclose(fp); 			/*关闭文件*/
//}
//读入文本文件h1.txt，在屏幕上输出。
//首先在程序目录中创建一个文本文件h1.txt，然后运行如下程序。
//#include <stdio.h>
//void main() {
//	FILE* fp;
//	char ch;
//	if ((fp = fopen("h1.txt", "rt")) == NULL)
//	{
//		printf("\n 不能打开文本文件h1.txt文件\n");
//		ch = getchar();
//		exit(1);
//	}
//	ch = fgetc(fp); //从文件中读入数据
//	while (ch != EOF)
//	{
//		putchar(ch); //输出数据
//		ch = fgetc(fp);
//	}
//	fclose(fp);
//}
//fputs函数的功能是向指定的文件写入一个字符串，其调用形式为：fputs(字符串，文件指针)
//其中字符串可以是字符串常量，也可以是字符数组名，或指针变量。
//#include<stdio.h>
//#include <stdlib.h>
//main()
//{
//	FILE* fp;
//	char ch, st[20];
//	if ((fp = fopen("string.txt", "at+")) == NULL)
//	{
//		printf("Cannot open file strike any key exit!");
//		exit(1);
//	}
//	printf("input a string:\n");
//	scanf("%s", st);
//	fputs(st, fp);
//	fclose(fp);
//}
//读字符串函数fgets函数的功能是从指定的文件中读一个字符串到字符数组中，
//函数调用的形式为： fgets(字符数组名，n，文件指针)； 其中的n是一个正整数。
//表示从文件中读出的字符串不超过 n - 1个字符。在读入的最后一个字符后加上串结束标志'\0'。
//例如：fgets(str, n, fp); 的意义是从fp所指的文件中读出n - 1个字符送入字符数组str中。
//#include<stdio.h>
//#include <stdlib.h>
//main()
//{
//	FILE* fp;
//	char str[11];
//	if ((fp = fopen("string.txt", "rt")) == NULL)
//	{
//		printf("Cannot open file strike any key exit!");
//		exit(1);
//	}
//	while (!feof(fp))
//	{
//		fgets(str, 10, fp);
//		printf("%s", str);
//	}
//	fclose(fp);
//}
//fscanf函数，fprintf函数与前面使用的scanf和printf 函数的功能相似，都是格式化读写函数。
//两者的区别在于 fscanf 函数和fprintf函数的读写对象不是键盘和显示器，而是磁盘文件。
//这两个函数的调用格式为： 
// fscanf(文件指针，格式字符串，输入表列)；
//fprintf(文件指针，格式字符串，输出表列)； 
//例如：
//fscanf(fp, "%d%s", &i, s);
//fprintf(fp, "%d%c", j, ch);
//
//#include<stdio.h>
//#include <stdlib.h>
//struct stu
//{
//	char name[10];
//	int num;
//	int age;
//	char addr[15];
//}stu1;
//main()
//{
//	FILE* fp;
//	char ch;
//	int i;
//
//	if ((fp = fopen("stu.txt", "wt")) == NULL)
//	{
//		printf("Cannot open file strike any key exit!");
//		exit(1);
//	}
//	printf("input data\n");
//	for (i = 0; i < 2; i++)
//	{
//		scanf("%s%d%d%s", stu1.name, &stu1.num, &stu1.age, stu1.addr);
//		fprintf(fp, "%s %d %d %s\n", stu1.name, stu1.num, stu1.age, stu1.addr);
//	}
//	fclose(fp);
//	if ((fp = fopen("stu.txt", "rt")) == NULL)
//	{
//		printf("Cannot open file strike any key exit!");
//		exit(1);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		fscanf(fp, "%s %d %d %s\n", stu1.name, &stu1.num, &stu1.age, stu1.addr);
//		printf("%s %d %d %s\n", stu1.name, stu1.num, stu1.age, stu1.addr);
//	}
//	fclose(fp);
//}
//提示：输入时不要超出范围，以空格分割。