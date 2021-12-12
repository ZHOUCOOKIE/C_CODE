#define _CRT_SECURE_NO_WARNINGS 1
//输出你的姓名和手机号码的程序
//#include<stdio.h>
//int main()
//{
//   long long PhNum;//由于手机号码是11位数字
//   char Name[10];//需要定义数组要不无法输出姓名
//   printf("请输入您的姓名和电话号码（姓名和电话号码之间打空格）:");
//   scanf("%s %lld",&Name,&PhNum);
//   printf("您的姓名和手机号码是：%s %lld",Name,PhNum);
//   return 0;
//}
//
//邮政费用计算程序
//#include<stdio.h>
//int main()
//{
//    int area,weight;//包裹种类与地区，重量(由于是采用整型变量，当输入重量带有小数时可以舍去小数部分，后续运算时可以巧用方程即可算出总费用，使程序不繁杂)
//    float price;//总运费
//    printf("市内普通包裹编号为1\n省内普通包裹编号为2\n省外普通包裹编号为3\n市内特快专递编号为4\n省内特快专递编号为5\n省外特快专递编号为6\n请选择编号:");
//    scanf("%d",&area);
//    printf("请输入包裹重量(kg,请输入精确值不要四舍五入):");
//    scanf("%d",&weight);
//    switch(area)
//    {
//        case 1:price=6+(weight);break;
//        case 2:price=6+(weight)*1.5;break;
//        case 3:price=10+(weight)*3;break;
//        case 4:price=12+(weight)*2;break;
//        case 5:price=13+(weight)*2;break;
//        case 6:price=22+(weight)*10;break;
//        }
//        printf("本次快递服务将产生的费用为：%.2f",price);
//        return 0;
//}
//
//编程列出两位数的互素整数对（即两个数的最大公约数为1）：
//要求考虑：1、任何相邻的两个数是互素的     互素对不能是同一个数
//#include <stdio.h>
//int main()
//{
//    int i,j,k,g,m;
//    把能整除(i)10的数(k)拿去除j=10--99  能整除i的k都不能整除j
//    for(i=10;i<100;i++)
//    {
//        for(j=11;j<100;j++)
//        {
//            for(k=2;k<=i;k++)
//            {
//              g=i%k;
//              m=j%k;
//              if(g!=0 && m!=0 && i<j)
//              printf("%d  %d\n",i,j);
//            }
//        }
//    }
//    return 0;
//}
//列出两位数的互素整数对
//#include <stdio.h>
//int main()
//{
//    int a=10,b,c,k;
//    for(;a<=99;)
//    {
//        b=a+1;
//        for(;b<=99;)
//        {
//            c=2;
//            k=0;
//            for(;c<a+1;)
//            {
//                if(a%c==0 && b%c==0)
//                k++;
//                c++;
//            }
//            if(k== 0)
//            printf("互素整数对：%d %d\n",a,b);
//            b++;
//        }
//        a++;
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int a=10,b,c,d;
//    for(c=2;c<=a;c++)
//        {
//            if(a%c=0&&)
//            {
//
//            }
//        }
//
//}
//
//#include<stdio.h>
//int main()
//{
//   float Money,Time;
//   printf("请输入存款金额(元)：");
//   scanf("%f",&Money);
//   printf("请输入存款的时间(月)：");
//   scanf("%f",&Time);
//   printf("活期利息为：%.2f\n",Money*(Time/12)*0.003);
//   printf("三个月利息为：%.2f\n",Money*0.0165*0.25);
//   printf("六个月利息为：%.2f\n",Money*0.01976*0.5);
//   printf("一年利息为：%.2f\n",Money*0.0228*1);
//   printf("两年利息为：%.2f\n",Money*0.0315*2);
//   printf("三年利息为：%.2f\n",Money*0.039*3);
//   printf("五年利息为：%.2f\n",Money*0.0399*5);
//   printf("活期本息合计：%.2f\n",Money+Money*(Time/12)*0.003);
//   printf("三个月本息合计：%.2f\n",Money+Money*0.0165*0.25);
//   printf("六个月本息合计：%.2f\n",Money+Money*0.01976*0.5);
//   printf("一年本息合计：%.2f\n",Money+Money*0.0228*1);
//   printf("两年本息合计：%.2f\n",Money+Money*0.0315*2);
//   printf("三年本息合计：%.2f\n",Money+Money*0.039*3);
//   printf("五年本息合计：%.2f\n",Money+Money*0.0399*5);
//   return 0;
//}
// 
//用c语言switch编写一程序，用户输入年、月、日，计算该日是该年的第几天。
//提示：注意闰年问题   %400==0 or %4==0&& %100!=0
//
//#include <stdio.h>
//int main()
//{
//    int year, month,day,month2;
//    printf("请输入年月日，我们将为您输出该日是该年的第几天(日期格式：xxxx/xx/xx)：");
//    scanf("%d/%d/%d",&year,&month,&day);
//    month2=(year%400==0 || year%4==0&&year%100!=0)? 29:28;
//    switch(month)
//    {
//        case 1:
//        printf("这天是今年的第%d天",day);
//        break;
//        case 2:
//        day=31+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 3:
//        day=31+month2+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 4:
//        day=31+month2+31+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 5:
//        day=31+month2+31+30+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 6:
//        day=31+month2+31+30+31+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 7:
//        day=31+month2+31+30+31+30+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 8:
//        day=31+month2+31+30+31+30+31+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 9:
//        day=31+month2+31+30+31+30+31+31+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 10:
//        day=31+month2+31+30+31+30+31+31+30+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 11:
//        day=31+month2+31+30+31+30+31+31+30+31+day;
//        printf("这天是今年的第%d天",day);
//        break;
//        case 12:
//        day=31+month2+31+30+31+30+31+31+30+31+30+day;
//        printf("这天是今年的第%d天",day);
//        break;
//    }
//    return 0;
//}
//
//用if实现多分支结构程序，输入百分制分数，输出等级（优、良、中、及格、不及格）。
//要求：能够对输入的数值进行有效性判断，并进行提示。
//
//#include <stdio.h>
//int main()
//{
//    float grade;
//    printf("请输入您的成绩(百分制)：");
//    scanf("%f",&grade);
//    if(grade>=90)
//    printf("您的等级为优");
//    else if(grade<90&&grade>=80)
//    printf("您的等级为良");
//    else if(grade<80&&grade>=70)
//    printf("您的等级为中");
//    else if(grade<70&&grade>=60)
//    printf("您的等级为及格");
//    else if(grade<60)
//    printf("您的等级为不及格");
//    return 0;
//}
// 
//在密码学中，恺撒密码是一种最简单且最广为人知的加密技术。它是一种替换加密的技术，明文中的所有字母都在字母表上向后
//（或向前）按照一个固定数目进行偏移后被替换成密文。例如，当偏移量是3的时候，所有的字母A将被替换成D，B变成E，以此类
//推。编写一个程序实现凯撒密码，输入明文（zhongkai），输入密钥（移位位数），输出密文，并将该密文完成解密，输出解密后的明文。
//#include <stdio.h>
//加密解密函数
//void coding(char str[], int key)//str是明文或密文的字符串，key是密钥
//{
//	int i;
//	for (i = 0; i < strlen(str); i++)//strlen是获取字符串长度
//	{
//
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] = ((str[i] - 'a') + key) % 26 + 'a';//对小写字母的偏移
//		}
//		else if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] = ((str[i] - 'A') + key) % 26 + 'A';//对大写字母的偏移
//		}
//	}
//}
//int main()
//{
//	int key;
//	char str[10000];
//	printf("请输入明文：");
//	gets(str);
//	printf("请输入密钥：");
//	scanf_s("%d", &key);
//	if (key < 0)//当输入的数字为负数时等价重构key
//		key = 26-key%26;
//	coding(str, key%26);//加密
//	printf("加密后的密文是：%s\n", str);
//	coding(str, 26-key%26);//解密
//	printf("解密后的明文是：%s\n", str);
//	return 0;
//}
//
//通过键盘输入10个整数，利用选择法从大到小排序，输出排序前后数据，并输出最大值和最小值
//#include <stdio.h>
//#define N 10
//int main()
//{
//	int i,j,k,temp;
//	float a[N];//为了下面判断输入的数据是否有错误
//	printf("请输入十个整数(两个数字中间用空格隔开):");
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%f", &a[i]);
//		if (a[i] > (int)(a[i]))//判断输入的数据是否为整数
//		{
//			printf("您输入的数据有误，请检查后再次输入");
//			return 0;
//		}
//
//	}
//	printf("您输入的十个整数分别是:");
//	for (i = 0; i < N; i++)
//		printf("%.0f ", a[i]);
//	printf("\n");
//	for (i = 0; i < N - 1; i++)//选择排序法
//	{
//		k = i;
//		for (j = i + 1; j < N; j++)
//			if (a[k] < a[j])
//				k = j;
//		if (k != i)
//		{
//			temp = a[i];
//			a[i] = a[k];
//			a[k] = temp;
//		}
//	}
//	printf("您输入的这十个数字按照从大到小排序：");
//	for (i = 0; i < N; i++)
//		printf("%.0f ", a[i]);
//	printf("\n");
//	printf("这组输入的数字中最大值是:%.0f 最小值是:%.0f",a[0],a[9]);//选择排序后的数组最前面的元素为最大值，最后面的元素为最小值
//	return 0;
//}
//
//摄氏温度和华氏温度之间的转化
//#include <stdio.h>
//void changeC(float c)//将摄氏温度转化为华氏温度
//{
//	float f;
//	f = 1.8 * c + 32;
//	printf("转化为华氏温度：% .2f", f);
//}
//void changeF(float f)//将华氏温度转化为摄氏温度
//{
//	float c;
//	c = (5.0 / 9) * (f - 32);
//	printf("转化为摄氏温度：%.2f", c);
//}
//int main()
//{
//	char judge;
//	float Tem;
//	printf("请选择您输入的温度类型(C或者F)：");
//	scanf_s("%c", &judge);
//	printf("请输入温度：");
//	scanf_s("%f", &Tem);
//	if (judge == 'C')
//		changeC(Tem);
//	else if (judge == 'F')
//		changeF(Tem);
//	return 0;
//}
//编写一个求x的y次幂的函数，x为double型，y为int型，要求用递归算法实现，
//并用C语言pow()函数（求x的y次方的值）再计算一次计算，输出二者的值进行比较。
//#include <stdio.h>
//#include <math.h>
//double pow1(double x, int y)
//{
//	if (y == 0)
//		return 1;
//	else
//		return (x*pow1(x,--y));
//}
//int main()
//{
//	double x;
//	int y;
//	printf("请输入一个作为底数，在输入一个数作为指数(中间用空格隔开)：");
//	scanf_s("%lf %d", &x,&y);
//	printf("%lf的%d次方等于=%lf\n",x,y,pow1(x, y));
//	printf("运用pow()函数计算的值为：%lf", pow(x, y));
//    return 0;
//}
//或者
//#include <stdio.h>
//double pow(double x,int y)
//{
//	if (y > 0)
//		return (x*pow(x, y - 1));
//	else
//		return 1;
//}
// 
// 
//猜数字游戏，预定一个两位整数（rand()函数产生一个伪随机整数(short型)，
// 引入头文件<stdlib.h>），游戏人输入一个整数，提示是大了还是小了，直到游戏人输入正确。
//头文件引入#include<time.h>
//产生随机种子：srand(static_cast<unsigned int>(time(NULL)));
//这样每次运行程序，可产生不一样的随机数。
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int random = 0;
//	int guess = 0;
//	printf("这是猜数字游戏，请输入数字：");
//	scanf("%d", &guess);
//	srand((unsigned)time(NULL));//初始化随机数种子
//	random = rand() % 89 + 10;//将随机值赋值给random
//	while (1)
//	{
//		if (random > guess)
//		{
//			printf("您猜的数字%d小了\n", guess);
//			printf("请继续输入数字：");
//			scanf("%d", &guess);
//		}
//		else if (random < guess)
//		{
//			printf("您猜的数字%d大了\n", guess);
//			printf("请继续输入数字：");
//			scanf("%d", &guess);
//		}
//		else
//		{
//			printf("您猜对了");
//			break;
//		}
//	}
//	return 0;
//}
//输出1的阶乘加到10的阶乘
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int sum = 0;
//	int ret = 1;
//	//for (a=1; a <= 10; a++)
//	//{
//	//	b=a;
//	//	ret = 1;
//	//	for (; b >= 1; b--)
//	//		ret *= b;
//	//	sum += ret;
//	//}效率太低
//	for (a = 1; a <= 3; a++)
//	{
//		ret *= a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//折半查找
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			return 0;
//		}
//	}
//	if (left > right)
//		printf("找不到这个数字了");
//	return 0;
//}
//演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[20] = {"hello world"};
//	char arr2[20] = {"***********"};
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}
//完成对数组a排序，然后把数组b的数据按序插入到数组1里。
//数组a[] = { 12,6,3,34,20,80,23,12,90,56 }, 数组b[3] = { 11,60,7 };
//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 12,6,3,34,20,80,23,12,90,56 };
//	int b[] = { 11,60,7 };
//	int i = 0;
//	int k = 0;
//	for (; i < (sizeof(a) / sizeof(a[0])); i++)
//	{
//		k = i;
//		for (; i < (sizeof(a) / sizeof(a[0])); i++)
//			if (a[k] > a[i])
//			{
//				int temp;
//				temp = a[i];
//				a[i] = a[k];
//				a[k] = temp;
//			}
//		i = k;
//	}
//	for (i = 0; i < (sizeof(b) / sizeof(b[0])); i++)
//	{
//		for(; i<(sizeof(a) / sizeof(a[0]));i++)
//			if (a[i] > b[k])
//			{
//
//				a[i] = b[k];
//		    }
//	}
//	for (i = 0; i < (sizeof(a)/sizeof(a[0])); i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//求一个4×4矩阵的主次对角线元素之和，填空并运行程序。
//编程提示：
//（1）．定义一个4行4列的二维数组a，用rand（）函数赋值，要求数据不大于100。
//（2）．用循环求和，并注意矩阵对角上线元素的特征是：行下标和列下标相同。
//（3）．输出主次对角线元素之和。
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#define N 4
//int main()
//{
//	int a[N][N];
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < N; i++)//给二维数组附上随机值
//		for (k = 0; k < N; k++)
//			a[i][k] = rand() % 99 + 1;
//	for (i = 0; i < N; i++)//打印二维数组
//		for (k = 0; k < N; k++)
//		{
//			printf("%2d ", a[i][k]);
//			if (k == 3)
//				printf("\n");
//		}
//	for (i = 0, k = 0; i < N && k < N; i++, k++)
//		sum += a[i][k];
//	printf("矩阵主对角线之和为%d\n", sum);
//	for (i = 0, k = N - 1,sum = 0; i < N && k >= 0; i++, k--)
//		sum += a[i][k];
//	printf("矩阵次对角线之和为%d", sum);
//	return 0;
//}
//一个学习小组有 5 个人，每个人有 3 门课程的考试成绩，
//分别是语文、数学、英语，求该小组各科的最高分、最低分，以及每人的平均分。
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int Max(int score[][3], char subject[][3], int i)//计算各科最高分
//{
//	int temp = 0;
//	int max = 0;
//	for (int k = 0; k < 5; k++)
//	{
//		if (max < score[k][i])
//			max = score[k][i];
//	}
//	printf("该学习小组%s的最高分为%d\n", subject, max);
//
//}
//int Min(int score[][3], char subject[][3], int i)//计算各科最低分
//{
//	int temp = 0;
//	int min = score[0][i];
//	for (int k = 0; k < 5; k++)
//	{
//		if (min > score[k][i])
//		    min = score[k][i];
//	}
//	
//	printf("该学习小组%s的最低分为%d\n",subject,min);
//}
//
//int Aver(int score[][3],char name[][3], int i)//计算各科平均分
//{
//	float aver = 0;
//	aver = (score[i][0] + score[i][1] + score[i][2]) / 3.0;
//	printf("%s同学的平均分为：%.2lf\n", name, aver);
//}
//int main()
//{
//	int score[5][3]={0};
//	char subject[3][20] = { "语文","数学","英语" };
//	char name[5][20] = { "小明","小王","小乐","小强","小刘" };
//	int i = 0;
//	int k = 0;
//
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < 5; i++)//初始化成绩范围50-100
//		for (k = 0; k < 3; k++)
//			score[i][k] = rand() % 50 + 50;
//	printf("             语文  数学  英语\n");
//
//	for (i = 0; i < 5; i++)//打印名字和成绩
//	{
//		printf("%s的成绩为：", name[i]);
//		for (k = 0; k < 3; k++)
//			printf("%d    ",score[i][k]);
//		printf("\n");
//	}
//
//	Max(score, subject[0], 0);//调用各种函数
//	Max(score, subject[1], 1);
//	Max(score, subject[2], 2);
//	Min(score, subject[0], 0);
//	Min(score, subject[1], 1);
//	Min(score, subject[2], 2);
//	Aver(score, name[0], 0);
//	Aver(score, name[1], 1);
//	Aver(score, name[2], 2);
//	Aver(score, name[3], 3);
//	Aver(score, name[4], 4);
//
//	return 0;
//}
//#include <stdio.h>
//
//void f(int* x, int* y)
//{
//	int t;
//	t = *x; *x = *y; *y = t;
//}
//
//void main()
//{
//	int a[8] = { 1,2,3,4,5,6,7,8 }, i, * p, * q;
//	p = a, q = &a[7];
//	while (p < q)
//	{
//		f(p, q);
//		p++;
//		q--;
//	}
//	for (i = 0; i < 8; i++)
//		printf("%d,", a[i]);
//}
//#include <stdio.h>
//void main()
//
//{
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int(*p)[3] = &a[1];
//	int(*q)[3] = a;
//	printf("%d,%d\n", (*p)[0], (*p)[1]);
//	printf("%d,%d", *q[0], *q[1]);
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//fun(char* s)
//{
//	strcpy(s, "example");
//}
//
//main()
//
//{
//	char t[10];
//	char* s = t;
//	fun(s);
//	puts(s);
//}
//建立一二维字符数组，输入10个学生的姓名
//然后按升序排序，然后按序插入一学生信息。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char name[11][20]={0};
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	char chname[20]={0};
//	printf("请输入十个名字：");
//	for (i = 0; i < 10; i++)
//		scanf("%s", name[i]);
//	printf("请输入一位学生姓名：");
//	scanf("%s", chname);
//	strcpy(name[10], chname);
//	for (i = 0; i < 11; i++)//选择排序
//	{
//		k = i;
//		for (j = i + 1; j < 11; j++)
//		
//			if (strcmp(name[k], name[j]) > 0)
//			{
//				k = j;
//			}
//		if (k != i)
//		{
//			strcpy(chname, name[i]);
//			strcpy(name[i], name[k]);
//			strcpy(name[k], chname);
//		}
//
//	}
//
//	for(i=0;i<11;i++)
//	    printf("%s\n", name[i]);
//	return 0;
//}

//关机程序
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char judge[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("信不信你的电脑将在60s内关机，赶快叫爸爸，就可以取消关机哦：");
//		scanf("%s", judge);
//		if (strcmp(judge, "爸爸") == 0)
//		{
//			printf("诶，儿子。\n您已经取消关机啦！");
//			break;
//		}
//		else
//			printf("真的不叫爸爸吗？");
//	}
//
//	system("shutdown -a");
//	system("pause");
//	return 0;
//}
//编程实现：在主函数输入一个三角形的三条边长。编写一个函数（isTriangle）判断是否能构成三角形；
//编写一个函数（triangleClass）判断三角形是直角三角形还是等腰三角形还是任意三角形。在主函数中完成调用。

//#include <stdio.h>
//#include <math.h>
//int isTriangle(int l1, int l2, int l3)
//{
//	if (l1 + l2 > l3 && l1 - l2 < l3)
//		return 1;
//	else
//		return 0;
//}
//
//void triangleClass(int l1, int l2, int l3)
//{
//	if((pow(l1,2) + pow(l2,2) == pow(l3,2) || pow(l2,2) + pow(l3,2) == pow(l1,2) || pow(l1,2) + pow(l3,2) == pow(l2,2)) && (l1 == l2 || l1 == l3 || l2 == l3))
//		printf("由%d %d %d三边构成的三角形是等腰直角三角形", l1, l2, l3);
//	else if (pow(l1, 2) + pow(l2, 2) == pow(l3, 2) || pow(l2, 2) + pow(l3, 2) == pow(l1, 2) || pow(l1, 2) + pow(l3, 2) == pow(l2, 2))
//		printf("由%d %d %d三边构成的三角形是直角三角形", l1, l2, l3);
//	else if(l1 == l2 || l1 == l3 || l2 == l3)
//		printf("由%d %d %d三边构成的三角形是等腰三角形", l1, l2, l3);
//	else 
//		printf("由%d %d %d三边构成的三角形是普通三角形", l1, l2, l3);
//}
//int main()
//{
//	int l1 = 0;
//	int l2 = 0;
//	int l3 = 0;
//	int judge = 0;
//	char judge1 = '0';
//	do
//	{
//		printf("输入一个三角形的三条边长：");
//		while (1)
//		{
//			scanf("%d %d %d", &l1, &l2, &l3);
//			judge = isTriangle(l1, l2, l3);
//			if (judge == 0)
//				printf("您输入的三边不符合三角形要求，请重新输入：");
//			else
//				break;
//		}
//		triangleClass(l1, l2, l3);
//		scanf("%*[^\n]%*c");
//		printf("\n是否要继续输入(Y or N)：");
//		scanf("%c", &judge1);
//	} while (judge1 == 'Y');
//	return 0;
//}
//编写函数，将字符串中的大写字母变成对应的小写字母，小写字母变成对应的大写字母，其它字符不变。
//在主函数中调用该函数，完成任意字符串的转换，并输出结果。输入字符串（允许包含空格），输出处理后的结果。
//#include <stdio.h>
//#include <string.h>
//void change(char str[20])
//{
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		if ('A' <= str[i] && str[i] <= 'Z')
//			strcpy(str[i],(str[i]+'32'));
//		else if ('a' <= str[i] && str[i] <= 'z')
//			str[i] -= 32;
//	}
//}
//int main()
//{
//	int i = 0;
//	char str[20] = { 0 };
//	gets(str);
//	change(str);
//	printf("%s", str);
//	return 0;
//}

include <stdio.h>
int main()
{
	int a[20];
	for (int i = 0; , i < 30; i++)
		scan("%d", a[i]);
	return 0;
}