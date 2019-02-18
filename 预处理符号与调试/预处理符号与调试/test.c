//#include<stdio.h>
//#include<windows.h>
//#define AGE 2
//#define MAX 100
//int main()
//{
//	printf("%d", MAX);
////#undef MAX//取消定义
//	printf("%d", MAX);
//
//	system("pause");
//	return 0;
//}
//
//linux下假设未定义MAX则可以使用 gcc test.c -D MAX=10来进行命令行定义
//
//int main()
//{
//#if 0//满足条件才编译
//	printf("%s", "hehe");
//#endif
//	system("pause");
//	return 0;
//}
//
//int main()//多分支条件编译
//{
//#if AGE==1
//	printf("%d",1);
//#elif AGE==2
//	printf("%d", 2);
//#endif
//	system("pause");
//	return 0;
//}


//避免头文件的多次包含
#ifndef __TEST__H__
#define __TEST__H__

#endif//__TEST__H__
