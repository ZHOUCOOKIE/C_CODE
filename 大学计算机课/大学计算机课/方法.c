#define _CRT_SECURE_NO_WARNINGS 1
//如何输入汉字
//#include<stdio.h>
//int main()
//{
//    char c1[10];
//    printf("输入:");
//    scanf("%s",&c1);
//    printf("%s",c1);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int x,y;
//    scanf("%d",&x);
//    switch (x)
//    {
//        case 1:
//        case 2:
//        case 3:
//        case 4:y=0;
//        break;
//        default:
//        y=1;
//        break;
//    }
//    if(y=0)
//    printf("yes");
//    return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int n;
//    char a,b,c,s;
//    scanf("%d",&n);
//    getchar();//吸收回车键
//    while(n--)
//    {
//        scanf("%c%c%c",&a,&b,&c);
//        getchar();
//        if(a>b)
//        {
//            s=a;
//            a=b;
//            b=s;
//        }
//        if(a>c)
//        {
//            s=a;
//            a=c;
//            c=s;
//        }
//        if(b>c)
//        {
//            s=b;
//            b=c;
//            c=s;
//        }
//        printf("%c %c %c\n",a,b,c);
//    }
//}
//
//#include <stdio.h>
//int main()//判断真假输出到屏幕
// {
//    char c='k';
//    int i=1, j=2, k=3;
//    float x=3e+5, y=0.85;
//    int result_1 = 'a'+5<c, result_2 = x-5.25<=x+y;
//    printf( "%d, %d\n", result_1, -i-2*j>=k+1 );
//    printf( "%d, %d\n", 1<j<5, result_2 );
//    printf( "%d, %d\n", i+j+k==-2*j, k==j==i+5 );
//    return 0;
// }
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char a[1000];
//	gets(a);
//	puts(a);
//	return 0;
//}
//判断输入的数字是否为整数
//#include <stdio.h>
//int main()
//{
//	int n,j[3];
//	float m[3];
//	for (n = 0; n < 3; n++)
//	{
//		scanf_s("%f", &m[n]);
//		if (m[n] > (int)(m[n]))
//		{
//			printf("您输入的数据有误，请检查后再次输入");
//			return 0;
//		}
//	}
//}
//++count;
//if (count != 10)
//{
//	printf("您输入的整数不是十个，请重新检查后输入");//有bug
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	for (; a > 0; a--)
//		a *= a - 1;
//	printf("%d", a);
//	return 0;
//}
//#include <stdio.h>
//enum a
//{
//	//这种枚举类型的变量未来可能的取值
//	sdd,
//	dsf,
//	wew
//};
//
//int main()
//{
//	enum a s = wew;
//	printf("%d", wew);
//	printf("%d", dsf);
//	printf("%s", s);
//
//	return 0;
//}

//#define goodluck 20211202
//const int lloveyou=20211202;
//enum future
//{
//	luckiness,
//	love
//};
