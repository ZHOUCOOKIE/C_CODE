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
//			printf("�ҵ��ˣ��±�Ϊ%d", mid);
//			return 0;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ������������");
//	return 0;
//}
//��ʾ����ַ��������ƶ������м���
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
//��ɶ�����a����Ȼ�������b�����ݰ�����뵽����1�
//����a[] = { 12,6,3,34,20,80,23,12,90,56 }, ����b[3] = { 11,60,7 };
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
//��һ��4��4��������ζԽ���Ԫ��֮�ͣ���ղ����г���
//�����ʾ��
//��1��������һ��4��4�еĶ�ά����a����rand����������ֵ��Ҫ�����ݲ�����100��
//��2������ѭ����ͣ���ע�����Խ�����Ԫ�ص������ǣ����±�����±���ͬ��
//��3����������ζԽ���Ԫ��֮�͡�
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
//	for (i = 0; i < N; i++)//����ά���鸽�����ֵ
//		for (k = 0; k < N; k++)
//			a[i][k] = rand() % 99 + 1;
//	for (i = 0; i < N; i++)//��ӡ��ά����
//		for (k = 0; k < N; k++)
//		{
//			printf("%2d ", a[i][k]);
//			if (k == 3)
//				printf("\n");
//		}
//	for (i = 0, k = 0; i < N && k < N; i++, k++)
//		sum += a[i][k];
//	printf("�������Խ���֮��Ϊ%d\n", sum);
//	for (i = 0, k = N - 1,sum = 0; i < N && k >= 0; i++, k--)
//		sum += a[i][k];
//	printf("����ζԽ���֮��Ϊ%d", sum);
//	return 0;
//}
//һ��ѧϰС���� 5 ���ˣ�ÿ������ 3 �ſγ̵Ŀ��Գɼ���
//�ֱ������ġ���ѧ��Ӣ����С����Ƶ���߷֡���ͷ֣��Լ�ÿ�˵�ƽ���֡�
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int Max(int score[][3], char subject[][3], int i)//���������߷�
//{
//	int temp = 0;
//	int max = 0;
//	for (int k = 0; k < 5; k++)
//	{
//		if (max < score[k][i])
//			max = score[k][i];
//	}
//	printf("��ѧϰС��%s����߷�Ϊ%d\n", subject, max);
//
//}
//int Min(int score[][3], char subject[][3], int i)//���������ͷ�
//{
//	int temp = 0;
//	int min = score[0][i];
//	for (int k = 0; k < 5; k++)
//	{
//		if (min > score[k][i])
//		    min = score[k][i];
//	}
//	
//	printf("��ѧϰС��%s����ͷ�Ϊ%d\n",subject,min);
//}
//
//int Aver(int score[][3],char name[][3], int i)//�������ƽ����
//{
//	float aver = 0;
//	aver = (score[i][0] + score[i][1] + score[i][2]) / 3.0;
//	printf("%sͬѧ��ƽ����Ϊ��%.2lf\n", name, aver);
//}
//int main()
//{
//	int score[5][3]={0};
//	char subject[3][20] = { "����","��ѧ","Ӣ��" };
//	char name[5][20] = { "С��","С��","С��","Сǿ","С��" };
//	int i = 0;
//	int k = 0;
//
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < 5; i++)//��ʼ���ɼ���Χ50-100
//		for (k = 0; k < 3; k++)
//			score[i][k] = rand() % 50 + 50;
//	printf("             ����  ��ѧ  Ӣ��\n");
//
//	for (i = 0; i < 5; i++)//��ӡ���ֺͳɼ�
//	{
//		printf("%s�ĳɼ�Ϊ��", name[i]);
//		for (k = 0; k < 3; k++)
//			printf("%d    ",score[i][k]);
//		printf("\n");
//	}
//
//	Max(score, subject[0], 0);//���ø��ֺ���
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
//����һ��ά�ַ����飬����10��ѧ��������
//Ȼ����������Ȼ�������һѧ����Ϣ��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char name[11][20]={0};
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	char chname[20]={0};
//	printf("������ʮ�����֣�");
//	for (i = 0; i < 10; i++)
//		scanf("%s", name[i]);
//	printf("������һλѧ��������");
//	scanf("%s", chname);
//	strcpy(name[10], chname);
//	for (i = 0; i < 11; i++)//ѡ������
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

//�ػ�����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char judge[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("�Ų�����ĵ��Խ���60s�ڹػ����Ͽ�аְ֣��Ϳ���ȡ���ػ�Ŷ��");
//		scanf("%s", judge);
//		if (strcmp(judge, "�ְ�") == 0)
//		{
//			printf("�������ӡ�\n���Ѿ�ȡ���ػ�����");
//			break;
//		}
//		else
//			printf("��Ĳ��аְ���");
//	}
//
//	system("shutdown -a");
//	system("pause");
//	return 0;
//}
//���ʵ�֣�������������һ�������ε������߳�����дһ��������isTriangle���ж��Ƿ��ܹ��������Σ�
//��дһ��������triangleClass���ж���������ֱ�������λ��ǵ��������λ������������Ρ�������������ɵ��á�

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
//		printf("��%d %d %d���߹��ɵ��������ǵ���ֱ��������", l1, l2, l3);
//	else if (pow(l1, 2) + pow(l2, 2) == pow(l3, 2) || pow(l2, 2) + pow(l3, 2) == pow(l1, 2) || pow(l1, 2) + pow(l3, 2) == pow(l2, 2))
//		printf("��%d %d %d���߹��ɵ���������ֱ��������", l1, l2, l3);
//	else if(l1 == l2 || l1 == l3 || l2 == l3)
//		printf("��%d %d %d���߹��ɵ��������ǵ���������", l1, l2, l3);
//	else 
//		printf("��%d %d %d���߹��ɵ�����������ͨ������", l1, l2, l3);
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
//		printf("����һ�������ε������߳���");
//		while (1)
//		{
//			scanf("%d %d %d", &l1, &l2, &l3);
//			judge = isTriangle(l1, l2, l3);
//			if (judge == 0)
//				printf("����������߲�����������Ҫ�����������룺");
//			else
//				break;
//		}
//		triangleClass(l1, l2, l3);
//		scanf("%*[^\n]%*c");
//		printf("\n�Ƿ�Ҫ��������(Y or N)��");
//		scanf("%c", &judge1);
//	} while (judge1 == 'Y');
//	return 0;
//}
//��д���������ַ����еĴ�д��ĸ��ɶ�Ӧ��Сд��ĸ��Сд��ĸ��ɶ�Ӧ�Ĵ�д��ĸ�������ַ����䡣
//���������е��øú�������������ַ�����ת�������������������ַ�������������ո񣩣���������Ľ����
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