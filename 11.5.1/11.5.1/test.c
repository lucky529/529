#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void my_revesre(char* str, int n, int sz)
//{
//	while(n--)
//	{
//		int i=0;
//		char t=str[0];
//		for(i=1; i<sz; i++)
//		{
//			str[i-1]=str[i];
//		}
//		str[sz-1]=t;
//
//	}
//	printf("%s",str);
//}
//int main()
//{
//	char str[] = "abcdef";
//	int input = 0;
//	int sz = strlen(str);
//	printf("请输入要旋转的字符串位置\n");
//	scanf("%d",&input);
//	my_revesre(str,input,sz);
//	return 0;
//}
//
//大师代码
//	  pbegin = pend = pdata;
//    while(*pbegin != '\0')
//    {
//        if(*pbegin == ' ')
//        {
//            pbegin ++;
//            pend ++;
//        }
//        else if(*pend == ' ' || *pend == '\0')
//        {
//            Reverse(pbegin, --pend);
//            pbegin = ++pend;
//        }
//        else
//            pend ++;
//    }
//
//    return pdata;
//}
//
//#include<stdio.h>
//#include<string.h>
//void reverse(char* pbegin,char* pend)
//{
//	
//	
//	while(pbegin<pend)
//	{
//		char temp=*pbegin;
//		*pbegin=*pend;
//		*pend=temp;
//
//		pbegin++;
//		pend--;
//	}
//	
//}
//char* qwe(char* pdata)
//{
//	char* pbegin=pdata;
//	char* pend=pdata;
//	while(*pend!='\0')
//	{
//		pend++;
//	}
//	pend--;
//	reverse(pbegin,pend);
//	pbegin=pend=pdata;
//	while(*pbegin!='\0')
//	{
//		if(*pbegin==' ')
//		{
//			pbegin++;
//			pend++;
//		}
//		else if(*pend==' '||*pend=='\0')
//		{
//			reverse(pbegin,--pend);
//			pbegin=++pend;
//		}
//		else
//		{
//			pend++;
//		}
//
//	}
//	return pdata;
//}
//int main()
//{
//	char str[]="i am a studet.";
//	qwe(str);	
//	printf("%s",str);
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//void reverse(char* pbegin,char* pend)
//{
//	
//	
//	while(pbegin<pend)
//	{
//		char temp=*pbegin;
//		*pbegin=*pend;
//		*pend=temp;
//
//		pbegin++;
//		pend--;
//	}
//	
//}
//void my_reverse(char* str,int n)
//{
//	if(str != NULL)
//	{
//		int len=0;
//		len = strlen(str);
//		if(n>0 && n<len && n<len)
//		{
//			char* p1=str;//把要旋转的左边看成一部分先旋转
//			char* p2=str+n-1;
//			char* p3=str+n;//把右边剩余的部分在旋转
//			char* p4=str+len-1;//最后旋转整个字符串
//			reverse(p1,p2);
//			reverse(p3,p4);
//			reverse(p1,p4);
//		}
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	int input = 0;
//	printf("请输入你想旋转字符串的位置\n");
//	scanf("%d",&input);
//	my_reverse(str,input);
//	printf("%s",str);
//	return 0;
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
//
//AABCD左旋一个字符得到ABCDA 
//AABCD左旋两个字符得到BCDAA 
//
//AABCD右旋一个字符得到DAABC 

//#include<stdio.h>
//#include<string.h>
//void check_reverse(char* str1,char* str2)
//{
//	int len=strlen(str1);
//	while(len--)
//	{
//		int i=0;
//		char t=str1[0];
//		for(i=1; i<len; i++)
//		{
//			str1[i-1]=str1[i];
//		}
//		str1[len-1]=t;
//		if(str1[0]==str2[0])
//		{
//			break;
//		}
//	}
//	printf("这个字符串是另外一个字符串旋转之后的字符串\n");
//}
//int main()
//{
//	char str1[]="zxcv";
//	char* str2="vzxc";
//	printf("请输入你想验证的俩个字符串\n");
//	//scanf("%s%s",&str1,&str2);
//	check_reverse(str1,str2);	
//	//printf("这个字符串不是否为另外一个字符串旋转之后的字符串\n");//	
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include<stdlib.h>
//int spin(char *p, char *q)
//{
//assert(p != NULL && q != NULL);   
//strncat(p, p, strlen(p));     
//if (strstr(p, q) == NULL)      
//{
//return 0;
//}
//else
//{
//return 1;
//}
//}
//int main()
//{
//char p[20] = "AABCD";         
//char *q = "BCDAA";            
//    char r[20] = "abcd";          //原字符串
//    char *s = "ACBD";            //目标字符串
//    printf("字符串:%s\t%s\n",p,q);
//int ret = spin(p, q);
//printf("BACK_VALUE=%d\n",ret);    //输出返回值
//printf("字符串:%s\t%s\n",r,s);
//int rew = spin(r, s);
//printf("BACK_VALUE=%d\n",rew);    //输出返回值
//system("pause");
//return 0;
//}
//_______________________________________________________

//#include<stdio.h>
//int main()
//{
//	int arr[]={1,1,2,2,3,4};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	int j=0;
//	int count=0;
//	for(j=0; j<sz; j++)
//	{	
//		count=0;
//	 for(i=0; i<sz; i++)
//	 {
//		
//		 if(arr[j]==arr[i])
//		 { 
//			count++;
//				
//		 }
//		 
//	  }
//	 if(count==1)
//		 printf("%d ",arr[j]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void find(int a[], int sz)
//{
//    int i = 0;
//    int num1 = 0;
//    int num2 = 0;
//    int num = 0;
//    int flag = 0;
//    for (i = 0; i < sz; i++)
//    {
//        num = num^a[i];
//    }
//    for (i = 0; i < 32; i++)
//    {
//        if (((num >> i) & 1) != 1)//找异或之后这个数字二进制数中最先出现的1的位置
//        {
//            flag++;
//        }
//        else
//            break;
//
//    }
//    for (i = 0; i < sz; i++)
//    {
//        if (((a[i] >> flag)&1) == 1)//分成2组
//            num1 ^= a[i];
//        else
//            num2 ^= a[i];
//    }
//    printf("%d %d\n",num1,num2);
//}
//
//int main()
//{
//    int a[] = { 1, 2, 2, 3 };
//    int sz = sizeof(a) / sizeof(a[0]);
//    find(a, sz);
//    system("pause");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count=0;
//	int input=13;
//	int sum=0;
//	int yuan=input;	
//	while(input != 1)
//	{
//		if(input%2!=0)
//		{
//			count++;			
//		}
//		sum=sum+input/2;
//		input=input/2;
//	}
//	sum=sum+yuan;
//	if(yuan%2==0)
//	{
//	printf("%d",sum+count);
//	}
//	else
//	{
//		printf("%d",sum+count);
//	}
//	return 0;
//}



//模拟实现strcpy 
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	char* temp=arr1;
//	assert(arr2 != NULL);
//	while(*arr1++ = *arr2++)
//	{
//
//	}
//	return temp;
//
//}
//int main()
//{
//	char arr1[10];
//	char arr2[10]="abcdef";
//	my_strcpy(arr1,arr2);
//	printf("%s",arr1);
//	return 0;
//}

//#include<stdio.h>
//int count_one_bits( int x)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0; i<=31; i++)
//	{
//		if(((x>>i)&1)==1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int x = 15;
//	int ret=0;
//	printf("请输入要求的值>:\n");
//	scanf("%d",&x);
//	ret = count_one_bits(x);
//	printf("ret=%d",ret);
//	return 0;
//}
