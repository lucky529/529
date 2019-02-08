#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct S
{
	char name[20];
	int age;
	float f;
};
int main()//验证输入缓冲区
{
	int ch;
	char arr[10] = { 0 };
	printf("请输入密码\n");
	scanf("%s", arr);
	printf("请确认密码\n");
	while (getchar() != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("y");
	}
	else
	{
		printf("n");
	}
	system("pause");
	return 0;
}
perror

int main()
{
	FILE* pf = fopen("test.text", "w");
	//fputc('a', pf);//向文件输入一个字符
	//fputc('b', pf);	

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	FILE* pf = fopen("test.text", "r");
	printf("%c", fgetc(pf));//向屏幕输出一个字符

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	FILE* pf = fopen("test.text", "w");
	fputs("abcdef",pf);//写入一个字符串

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	char buf[20] = { 0 };
	FILE* pf = fopen("test.text", "r");
	fgets(buf, 100, pf);//读取一行数据
	printf("%s", buf);
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	char buf[20] = { 0 };
	FILE* pf = fopen("test.text", "r");
	fgets(buf, 100, pf);
	printf("%s", buf);
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	struct S s = { "zhangsan", 20, 3.14f };
	char buf[20] = { 0 };
	FILE* pf = fopen("test.text", "w");

	fprintf(pf, "%s %d %f", s.name , s.age ,s.f );//格式化形式写文件
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	struct S s;
	char buf[20] = { 0 };
	FILE* pf = fopen("test.text", "r");

	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.f));//格式化的读文件
	printf("%s %d %f", s.name, s.age, s.f);
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	struct S s = { "zhangsan", 20, 3.14f };
	struct S tmp = {0};
	char buf[30] = { 0 };	

	sprintf(buf, "%s %d %f", s.name, s.age, s.f);
	printf("%s\n", buf);
	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.f));
	printf("%s %d %f\n", tmp.name, tmp.age , tmp.f);	
	
	system("pause");
	return 0;
}

exe程序开始运行 默认打开 stdin stdout stderr
scanf针对标准输入流的格式化的输入函数
printf针对标准输出流的格式化输出函数
fscanf针对所有输入流的格式化输入函数
fprintf针对所有输出流的格式化输出函数
sscanf从内存中格式化的转化成字符串
sprintf从字符串转换为格式化的数据

int main()
{
	FILE* pf = fopen("test.text", "r");
	printf("%c\n", fgetc(pf));
	fseek(pf, 3, SEEK_CUR);//调整文件指针的位置
	fseek(pf, -2, SEEK_END);//调整文件指针的位置（从后往前）
	
	printf("%c\n", fgetc(pf));
	printf("%c\n", fgetc(pf));	

	system("pause");
	return 0;
}

int main()
{
	while (1)
	{
		printf("a");
		Sleep(1);
	}
	return 0;
}

fprintf(stdout, "%s %d %f", s.name, s.age, s.f);
fscanf(stdin, "%s %d %f", s.name, &(s.age), &(s.f));