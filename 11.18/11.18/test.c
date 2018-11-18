#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	FLIE* p;
//    p = fopen("mytest.text","w");
//	if(p != NULL);
//	{
//		//操作文件
//		fclose(p);
//	}
//	return 0;
//}

#include <stdio.h>

#include <errno.h>

#include <string.h>



int main()

{

	FILE* pf = fopen("test.txt", "w");

	if(pf == NULL)

	{

		printf("%s\n", strerror(errno));

		return 0;

	}

	

	//写文件

	fputc('b', pf);

	fputc('i', pf);

	fputc('t', pf);



	fclose(pf);

	pf = NULL;

	return 0;

}

int main()

{

	FILE* pf = fopen("test.txt", "r");

	int ch = 0 ;

	if(pf == NULL)

	{

		printf("%s\n", strerror(errno));

		return 0;

	}



	//读文件

	ch = fgetc(pf);

	//putchar(ch);

	printf("%c\n", ch);



	fclose(pf);

	pf = NULL;

	return 0;

}

int main()

{

	FILE* pf = fopen("test.txt", "w");

	int ch = 0 ;

	if(pf == NULL)

	{

		printf("%s\n", strerror(errno));

		return 0;

	}



	fputs("hello world", pf);



	fclose(pf);

	pf = NULL;

	return 0;

}

int main()

{

	FILE* pf = fopen("test.txt", "r");

	char arr[20] = {0};

	int ch = 0 ;

	if(pf == NULL)

	{

		printf("%s\n", strerror(errno));

		return 0;

	}



	fgets(arr, 20, pf);

	printf("%s", arr);

	fgets(arr, 20, pf);

	printf("%s", arr);

	fgets(arr, 20, pf);

	printf("%s", arr);

	fclose(pf);

	pf = NULL;

	return 0;

}

int main()

{

	struct S s = {0};



	FILE* pf = fopen("C:\\ClassCode\\51班\\test_11_18\\test.txt","r");

	if(pf == NULL)

	{

		printf("%s\n", strerror(errno));

		return 0;

	}

	//读

	fscanf(pf, "%s %d", s.name, &(s.age));

	//fscanf(stdin, "%s %d", s.name, &(s.age));//ok



	//打印

	printf("%s %d\n", s.name, s.age);

	fclose(pf);

	pf = NULL;

	return 0;

}

int main()

{

	struct S s = {0};



	FILE* pf = fopen("test.txt", "rb");

	if(pf == NULL)

	{

		printf("%s\n", strerror(errno));

		return 0;

	}

	//读操作

	fread(&s, sizeof(struct S), 1, pf);

	printf("%s %d\n", s.name, s.age);



	fclose(pf);

	pf = NULL;

	return 0;

}

int main()

{

	struct S s = {"张三", 20};



	FILE* pf = fopen("test.txt", "wb");

	if(pf == NULL)

	{

		printf("%s\n", strerror(errno));

		return 0;

	}

	//写操作

	fwrite(&s, sizeof(struct S), 1, pf);

	fclose(pf);

	pf = NULL;

	return 0;

}