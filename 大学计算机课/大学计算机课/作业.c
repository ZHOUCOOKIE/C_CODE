#define _CRT_SECURE_NO_WARNINGS 1
//�������������ֻ�����ĳ���
//#include<stdio.h>
//int main()
//{
//   long long PhNum;//�����ֻ�������11λ����
//   char Name[10];//��Ҫ��������Ҫ���޷��������
//   printf("���������������͵绰���루�����͵绰����֮���ո�:");
//   scanf("%s %lld",&Name,&PhNum);
//   printf("�����������ֻ������ǣ�%s %lld",Name,PhNum);
//   return 0;
//}
//
//�������ü������
//#include<stdio.h>
//int main()
//{
//    int area,weight;//�������������������(�����ǲ������ͱ�������������������С��ʱ������ȥС�����֣���������ʱ�������÷��̼�������ܷ��ã�ʹ���򲻷���)
//    float price;//���˷�
//    printf("������ͨ�������Ϊ1\nʡ����ͨ�������Ϊ2\nʡ����ͨ�������Ϊ3\n�����ؿ�ר�ݱ��Ϊ4\nʡ���ؿ�ר�ݱ��Ϊ5\nʡ���ؿ�ר�ݱ��Ϊ6\n��ѡ����:");
//    scanf("%d",&area);
//    printf("�������������(kg,�����뾫ȷֵ��Ҫ��������):");
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
//        printf("���ο�ݷ��񽫲����ķ���Ϊ��%.2f",price);
//        return 0;
//}
//
//����г���λ���Ļ��������ԣ��������������Լ��Ϊ1����
//Ҫ���ǣ�1���κ����ڵ��������ǻ��ص�     ���ضԲ�����ͬһ����
//#include <stdio.h>
//int main()
//{
//    int i,j,k,g,m;
//    ��������(i)10����(k)��ȥ��j=10--99  ������i��k����������j
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
//�г���λ���Ļ���������
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
//            printf("���������ԣ�%d %d\n",a,b);
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
//   printf("����������(Ԫ)��");
//   scanf("%f",&Money);
//   printf("���������ʱ��(��)��");
//   scanf("%f",&Time);
//   printf("������ϢΪ��%.2f\n",Money*(Time/12)*0.003);
//   printf("��������ϢΪ��%.2f\n",Money*0.0165*0.25);
//   printf("��������ϢΪ��%.2f\n",Money*0.01976*0.5);
//   printf("һ����ϢΪ��%.2f\n",Money*0.0228*1);
//   printf("������ϢΪ��%.2f\n",Money*0.0315*2);
//   printf("������ϢΪ��%.2f\n",Money*0.039*3);
//   printf("������ϢΪ��%.2f\n",Money*0.0399*5);
//   printf("���ڱ�Ϣ�ϼƣ�%.2f\n",Money+Money*(Time/12)*0.003);
//   printf("�����±�Ϣ�ϼƣ�%.2f\n",Money+Money*0.0165*0.25);
//   printf("�����±�Ϣ�ϼƣ�%.2f\n",Money+Money*0.01976*0.5);
//   printf("һ�걾Ϣ�ϼƣ�%.2f\n",Money+Money*0.0228*1);
//   printf("���걾Ϣ�ϼƣ�%.2f\n",Money+Money*0.0315*2);
//   printf("���걾Ϣ�ϼƣ�%.2f\n",Money+Money*0.039*3);
//   printf("���걾Ϣ�ϼƣ�%.2f\n",Money+Money*0.0399*5);
//   return 0;
//}
// 
//��c����switch��дһ�����û������ꡢ�¡��գ���������Ǹ���ĵڼ��졣
//��ʾ��ע����������   %400==0 or %4==0&& %100!=0
//
//#include <stdio.h>
//int main()
//{
//    int year, month,day,month2;
//    printf("�����������գ����ǽ�Ϊ����������Ǹ���ĵڼ���(���ڸ�ʽ��xxxx/xx/xx)��");
//    scanf("%d/%d/%d",&year,&month,&day);
//    month2=(year%400==0 || year%4==0&&year%100!=0)? 29:28;
//    switch(month)
//    {
//        case 1:
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 2:
//        day=31+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 3:
//        day=31+month2+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 4:
//        day=31+month2+31+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 5:
//        day=31+month2+31+30+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 6:
//        day=31+month2+31+30+31+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 7:
//        day=31+month2+31+30+31+30+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 8:
//        day=31+month2+31+30+31+30+31+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 9:
//        day=31+month2+31+30+31+30+31+31+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 10:
//        day=31+month2+31+30+31+30+31+31+30+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 11:
//        day=31+month2+31+30+31+30+31+31+30+31+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//        case 12:
//        day=31+month2+31+30+31+30+31+31+30+31+30+day;
//        printf("�����ǽ���ĵ�%d��",day);
//        break;
//    }
//    return 0;
//}
//
//��ifʵ�ֶ��֧�ṹ��������ٷ��Ʒ���������ȼ����š������С����񡢲����񣩡�
//Ҫ���ܹ����������ֵ������Ч���жϣ���������ʾ��
//
//#include <stdio.h>
//int main()
//{
//    float grade;
//    printf("���������ĳɼ�(�ٷ���)��");
//    scanf("%f",&grade);
//    if(grade>=90)
//    printf("���ĵȼ�Ϊ��");
//    else if(grade<90&&grade>=80)
//    printf("���ĵȼ�Ϊ��");
//    else if(grade<80&&grade>=70)
//    printf("���ĵȼ�Ϊ��");
//    else if(grade<70&&grade>=60)
//    printf("���ĵȼ�Ϊ����");
//    else if(grade<60)
//    printf("���ĵȼ�Ϊ������");
//    return 0;
//}
// 
//������ѧ�У�����������һ����������Ϊ��֪�ļ��ܼ���������һ���滻���ܵļ����������е�������ĸ������ĸ�������
//������ǰ������һ���̶���Ŀ����ƫ�ƺ��滻�����ġ����磬��ƫ������3��ʱ�����е���ĸA�����滻��D��B���E���Դ���
//�ơ���дһ������ʵ�ֿ������룬�������ģ�zhongkai����������Կ����λλ������������ģ�������������ɽ��ܣ�������ܺ�����ġ�
//#include <stdio.h>
//���ܽ��ܺ���
//void coding(char str[], int key)//str�����Ļ����ĵ��ַ�����key����Կ
//{
//	int i;
//	for (i = 0; i < strlen(str); i++)//strlen�ǻ�ȡ�ַ�������
//	{
//
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] = ((str[i] - 'a') + key) % 26 + 'a';//��Сд��ĸ��ƫ��
//		}
//		else if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] = ((str[i] - 'A') + key) % 26 + 'A';//�Դ�д��ĸ��ƫ��
//		}
//	}
//}
//int main()
//{
//	int key;
//	char str[10000];
//	printf("���������ģ�");
//	gets(str);
//	printf("��������Կ��");
//	scanf_s("%d", &key);
//	if (key < 0)//�����������Ϊ����ʱ�ȼ��ع�key
//		key = 26-key%26;
//	coding(str, key%26);//����
//	printf("���ܺ�������ǣ�%s\n", str);
//	coding(str, 26-key%26);//����
//	printf("���ܺ�������ǣ�%s\n", str);
//	return 0;
//}
//
//ͨ����������10������������ѡ�񷨴Ӵ�С�����������ǰ�����ݣ���������ֵ����Сֵ
//#include <stdio.h>
//#define N 10
//int main()
//{
//	int i,j,k,temp;
//	float a[N];//Ϊ�������ж�����������Ƿ��д���
//	printf("������ʮ������(���������м��ÿո����):");
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%f", &a[i]);
//		if (a[i] > (int)(a[i]))//�ж�����������Ƿ�Ϊ����
//		{
//			printf("���������������������ٴ�����");
//			return 0;
//		}
//
//	}
//	printf("�������ʮ�������ֱ���:");
//	for (i = 0; i < N; i++)
//		printf("%.0f ", a[i]);
//	printf("\n");
//	for (i = 0; i < N - 1; i++)//ѡ������
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
//	printf("���������ʮ�����ְ��մӴ�С����");
//	for (i = 0; i < N; i++)
//		printf("%.0f ", a[i]);
//	printf("\n");
//	printf("������������������ֵ��:%.0f ��Сֵ��:%.0f",a[0],a[9]);//ѡ��������������ǰ���Ԫ��Ϊ���ֵ��������Ԫ��Ϊ��Сֵ
//	return 0;
//}
//
//�����¶Ⱥͻ����¶�֮���ת��
//#include <stdio.h>
//void changeC(float c)//�������¶�ת��Ϊ�����¶�
//{
//	float f;
//	f = 1.8 * c + 32;
//	printf("ת��Ϊ�����¶ȣ�% .2f", f);
//}
//void changeF(float f)//�������¶�ת��Ϊ�����¶�
//{
//	float c;
//	c = (5.0 / 9) * (f - 32);
//	printf("ת��Ϊ�����¶ȣ�%.2f", c);
//}
//int main()
//{
//	char judge;
//	float Tem;
//	printf("��ѡ����������¶�����(C����F)��");
//	scanf_s("%c", &judge);
//	printf("�������¶ȣ�");
//	scanf_s("%f", &Tem);
//	if (judge == 'C')
//		changeC(Tem);
//	else if (judge == 'F')
//		changeF(Tem);
//	return 0;
//}
//��дһ����x��y���ݵĺ�����xΪdouble�ͣ�yΪint�ͣ�Ҫ���õݹ��㷨ʵ�֣�
//����C����pow()��������x��y�η���ֵ���ټ���һ�μ��㣬������ߵ�ֵ���бȽϡ�
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
//	printf("������һ����Ϊ������������һ������Ϊָ��(�м��ÿո����)��");
//	scanf_s("%lf %d", &x,&y);
//	printf("%lf��%d�η�����=%lf\n",x,y,pow1(x, y));
//	printf("����pow()���������ֵΪ��%lf", pow(x, y));
//    return 0;
//}
//����
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
//��������Ϸ��Ԥ��һ����λ������rand()��������һ��α�������(short��)��
// ����ͷ�ļ�<stdlib.h>������Ϸ������һ����������ʾ�Ǵ��˻���С�ˣ�ֱ����Ϸ��������ȷ��
//ͷ�ļ�����#include<time.h>
//����������ӣ�srand(static_cast<unsigned int>(time(NULL)));
//����ÿ�����г��򣬿ɲ�����һ�����������
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int random = 0;
//	int guess = 0;
//	printf("���ǲ�������Ϸ�����������֣�");
//	scanf("%d", &guess);
//	srand((unsigned)time(NULL));//��ʼ�����������
//	random = rand() % 89 + 10;//�����ֵ��ֵ��random
//	while (1)
//	{
//		if (random > guess)
//		{
//			printf("���µ�����%dС��\n", guess);
//			printf("������������֣�");
//			scanf("%d", &guess);
//		}
//		else if (random < guess)
//		{
//			printf("���µ�����%d����\n", guess);
//			printf("������������֣�");
//			scanf("%d", &guess);
//		}
//		else
//		{
//			printf("���¶���");
//			break;
//		}
//	}
//	return 0;
//}
//���1�Ľ׳˼ӵ�10�Ľ׳�
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
//	//}Ч��̫��
//	for (a = 1; a <= 3; a++)
//	{
//		ret *= a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//�۰����
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			return 0;
		}
	}
	if (left > right)
		printf("�Ҳ������������");
	return 0;
}