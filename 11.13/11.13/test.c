#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void my_replaceBlank(char string[], int len)
//{
//	int originallen = 0;//ԭ�ַ�������
//	int originalblank = 0;//ԭ�ַ����ո�
//	int newstringlen = 0;//���ַ�������
//	int oror = 0;//Դ�ַ������һ���ַ��±�
//	int ornew = 0;//���ַ������һ���ַ��±�
//	int i = 0;
//	if((string == NULL) && len <= 0)
//	{
//		return ;
//	}
//	while(string[i] != '\0')
//	{
//		originallen++;
//		if(string[i] == ' ')
//		{
//			originalblank++;//ͳ���ж��ٿո�
//		}
//		i++;
//	}
//	newstringlen = originallen + originalblank * 2;//ÿ��һ���ո����ַ�������Ӧ�ö��2
//	oror = originallen;
//	ornew = newstringlen;
//	while((oror >= 0) && (ornew > oror))
//	{
//		if(string[oror] == ' ')
//		{
//			string[ornew--] = '0';
//			string[ornew--] = '2';
//			string[ornew--] = '%';
//
//		}
//		else
//		{
//			string[ornew--] = string[oror];
//		}
//		oror--;
//	}
//
//	
//}
//int main()
//{
//	char str[20] = "we are happy";
//	int sz = sizeof(str)/sizeof(str[0]);	
//	my_replaceBlank(str, sz);
//	printf("%s",str);
//	return 0;
//}

//int Partition(data[], len, start, end)
//{
//	int index = 0;
//	int small = 0;
//	if((data == NULL) && len < 0)
//		return ;
//	index = Randomrange(start, end);
//	Swap(&data[index], &data[end]);
//
//	small = start -1;
//	for(index = start; index < end; index++)
//	{
//		if(data[index] < data[end])
//		{
//			small++;
//		}
//		if(index != samll)
//		{
//			Swap(&data[small], &data[index]);
//		}
//	}
//	small++;
//	Swap(&data[small], &data[end]);
//
//	return small;
//
//}
//void Quicksort(data[] ,len ,start ,end)
//{
//	int index = 0;
//	if(start == end)
//	{
//		return ;
//	}
//	index = Partition(data, len, start, end);
//	if(index > start)
//		Quicksort(data ,len ,start ,index - 1);
//	if(index < end)
//		Quicksort(data ,len ,index + 1 ,end);
//}
//#include<stdio.h>
//void Sortage(int ages[], int len)
//{
//	int age = 0;
//	int i = 0;
//	int j = 0;
//	int index = 0;
//	int oldestage = 0;
//	int timeofage[100] = {0};
//	if(ages == NULL && len <= 0)
//		return ;
//	oldestage = 99;
//	timeofage[oldestage + 1];
//	for(i = 0; i < oldestage; i++)
//	{
//		timeofage[i] = 0;
//	}
//
//	for(i = 0; i < len; i++)
//	{
//		age = ages[i];
//		++timeofage[age];
//	}
//
//	index = 0;
//	for(i = 0; i <= oldestage; i++ )
//	{
//		for(j = 0; j < timeofage[i]; j++)
//		{
//			ages[index] = i;
//			index++;
//		}
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int age[10] = {9,8,5,7,4,3,7,6,9,2};
//	Sortage(age,10);
//	for(i = 0; i<10; i++)
//	{
//		printf("%d",age[i]);
//	}
//	return 0;
//}


//total += empty/2;
//empty = empty/2 + empty % 2;����ˮ����

#include<stdio.h>
 
int num = 0;
 
void Move(char x,char y)
{
	num++;    //������
	printf("%c->%c\n",x,y);
}
 
void Hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		Move(a,c);
	}
	else 
	{
		Hanoi(n-1,a,c,b);    //�Ƚ�ǰn-1��Բ�̴���ʼ��A�ƶ���������B��
		Move(a,c);     //�ٽ���n��Բ�̴���ʼ��A�ƶ���Ŀ����C��
		Hanoi(n-1,b,a,c);       //����ٽ�������B�ϵ�n-1��Բ���ƶ���Ŀ����C��
	}
}
 
int main()
{
	Hanoi(4,'a','b','c');
	printf("%d\n",num);
}
