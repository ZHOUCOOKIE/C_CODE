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
//    printf("1+3+��+%d=%d\n", 2 * n - 1, s);
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
//ȫ�ֱ�����ʹ��
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
//while��ϰ
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
//    printf("1+3+��+%d=%d\n", 2 * n - 1, s);
//}
//
//do_while��ϰ
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
//    printf("1+3+��+%d=%d\n", 2 * n - 1, s);
//}
//
//for��ϰ
//#include <stdio.h>
//int main()
//{
//    int s = 0, n, i;
//    scanf_s("%d", &n);
//    for (i = 1; i <= 2 * n - 1; i += 2)
//    {
//        s += i;
//    }
//    printf("1+3+��+%d=%d\n", 2 * n - 1, s);
//    return 0;
//}
//
//��֪ÿֻ����5Ԫ��ÿֻĸ��3Ԫ����ֻС��1Ԫ������100Ԫ��Ҫ��100ֻ�����ʹ�����ĸ����С��������ֻ��
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
//ͳ�Ƽ�������Ĵ�д��ĸ��Сд��ĸ�������ַ��������ַ��ĸ���������'#'������
//#include <stdio.h>
//void main()
//{
//    int b = 0, s = 0, n = 0, t = 0, i = 1;  /*bΪ��д��ĸ������sΪСд��ĸ������nΪ���֣�tΪ�����ַ�*/
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
//�������ʮ���������������ĸ�������ƽ��ֵ��
//#include <stdio.h>
//void main() {
//	int i, a, num = 0, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a);
//		if (a <= 0)
//			continue;       /*�����м������ۼ�*/
//		num++;
//		sum += a;
//	}
//	printf("%d��������֮��Ϊ%d\n", num, sum);
//	printf("ƽ��ֵΪ%0.2f\n", sum * 1.0 / num);
//}
//
//
//�����������Լ��
//շת�����������ŷ������㷨��������֪����ϵ��㷨��շת������ĺ��ľ��ǲ��ϵ������������������㡣
//��ԭ������������������Լ���������н�С������������������������Լ����
//#include <stdio.h>
//void main()
//{
//	int x, y, z, m, n;
//	printf("��������������");
//	scanf_s("%d%d", &x, &y);
//	m = x, n = y;
//	while (y != 0)
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	printf("���Լ����: %d\n", x);
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
//    int i, a[10];                     /* ����ѭ������i��һά����a */
//    for (i = 0; i <= 9; i++)
//        scanf_s("%d", &a[i]);
//    for (i = 9 ; i >= 0; i--) /* �벹������ѭ����� */
//        printf("%d  ", a[i]);          /* ����������� */
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
//	printf("�������Ϊ��\n");
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
//    printf("��Ӽ�������һ���ַ���\n");
//    gets(str);
//    printf("��������ַ����ǣ�\n");
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
//    strcat_s(str1,80,str2);          /*ʹ��strcat����ʵ�֣�ע�����ʽ*/
//    printf("Result is: %s\n", str1);
//}
//#include <stdio.h>
//void main()
//{
//    int i, p = 0, a[10];               /* ����aΪ��������pΪ�±��� */
//    for (i = 0; i < 10; i++)
//        scanf_s("%d", &a[i]);
//    for (i = 1; i < 10; i++)
//        if (a[i] < a[p])
//
//    printf("%d,%d", a[p], p);       /* ���һά����a�е���Сֵ�����±� */
//}
// 
// 
////����һ������������������Ľ׳˲���������������󣬿���ѡ���Ƿ������һ������
//#include <stdio.h>
//int main()
//{
//	int a,i;
//	char judge;
//	while (1)//���ں����ж��Ƿ�Ҫ��������
//	{
//		printf("������һ��������");
//		scanf_s("%d", &a);
//		for (i = a - 1; i > 0; i--)
//		{
//			a *= i;
//		}
//		printf("�����Ľ׳˵���%d\n", a);
//		getchar();//������̻������Ŀ��ַ�
//		printf("��ѡ���Ƿ��������(Y/N)��");
//		scanf_s("%c", &judge);
//		if (judge == 'N')
//			return 0;
//	}
//	return 0;
//}
//����žų˷��ھ���
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
//		printf("\n");//ÿ���һ�к���
//	}
//	return 0;
//}
//��������Ϸ��Ԥ��һ����λ������rand()��������һ��α�������(short��)������ͷ�ļ�<stdlib.h>����
// ��Ϸ������һ����������ʾ�Ǵ��˻���С�ˣ�ֱ����Ϸ��������ȷ��
//ͷ�ļ�����#include<time.h>
//����������ӣ�srand(static_cast<unsigned int>(time(NULL)));
//����ÿ�����г��򣬿ɲ�����һ�����������
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
//    int i, a[10];                     /* ����ѭ������i��һά����a */
//    for (i = 0; i <= 9; i++)
//        scanf("%d", &a[i]);
//    for (i = 9; i >= 0;i--)      /* �벹������ѭ����� */
//        printf("%d  ", a[i]);          /* ����������� */
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
//	printf("�������Ϊ��\n");
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
//    printf("��Ӽ�������һ���ַ���\n");
//    gets(str);
//    printf("��������ַ����ǣ�\n");
//    puts(str);
//    system("PAUSE");
//    return 0;
//}
//�������Ĺ�������strcat����ʵ�ֽ��ַ���2���ӵ��ַ���1�ĺ��沢���
//#include "stdio.h"
//#include <string.h>
//void main()
//{
//    char str1[80] = "This Is a ", str2[80] = "c Program";
//    printf("String1 is: %s\n", str1);
//    printf("String2 is: %s\n", str2);
//    strcat(str1, str2);          /*ʹ��strcat����ʵ�֣�ע�����ʽ*/
//    printf("Result is: %s\n", str1);
//}
//�������Ĺ����ǣ����һά����a�е���Сֵ�����±ꡣ���ڳ����еĺ�����������ȷ�����ݡ�
//#include "stdio.h"
//void main()
//{
//    int i, p = 0, a[10],temp, k=0;               /* ����aΪ��������pΪ�±��� */
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
//    printf("%d,%d", a[p], p);       /* ���һά����a�е���Сֵ�����±� */
//}
//
//#include "stdio.h"
//void main()
//{
//    int i, p = 0, a[10];               /* ����aΪ��������pΪ�±��� */
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    for (i = 1; i < 10; i++)
//        if (a[i] < a[p])
//        {
//            p = i;
//        }
//    printf("%d,%d", a[p], p);       /* ���һά����a�е���Сֵ�����±� */

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
//int fib(int n);/*����˵��*/
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
//int a = 3, b = 5;      /*a,bΪȫ�ֱ���*/
//int max(int a, int b) /*a,bΪ�ֲ�����*/
//{
//	int c;        /*cΪ�ֲ�����*/
//	c = a > b ? a : b;
//	return(c);
//}
//void main()
//{
//	int a = 8;     /*aΪ�ֲ�����*/
//	printf("%d\n", max(a, b));/*max���β�a��main�����еľֲ�����*/
//}

