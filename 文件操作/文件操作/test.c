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
int main()//��֤���뻺����
{
	int ch;
	char arr[10] = { 0 };
	printf("����������\n");
	scanf("%s", arr);
	printf("��ȷ������\n");
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
	//fputc('a', pf);//���ļ�����һ���ַ�
	//fputc('b', pf);	

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	FILE* pf = fopen("test.text", "r");
	printf("%c", fgetc(pf));//����Ļ���һ���ַ�

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	FILE* pf = fopen("test.text", "w");
	fputs("abcdef",pf);//д��һ���ַ���

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}

int main()
{
	char buf[20] = { 0 };
	FILE* pf = fopen("test.text", "r");
	fgets(buf, 100, pf);//��ȡһ������
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

	fprintf(pf, "%s %d %f", s.name , s.age ,s.f );//��ʽ����ʽд�ļ�
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

	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.f));//��ʽ���Ķ��ļ�
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

exe����ʼ���� Ĭ�ϴ� stdin stdout stderr
scanf��Ա�׼�������ĸ�ʽ�������뺯��
printf��Ա�׼������ĸ�ʽ���������
fscanf��������������ĸ�ʽ�����뺯��
fprintf�������������ĸ�ʽ���������
sscanf���ڴ��и�ʽ����ת�����ַ���
sprintf���ַ���ת��Ϊ��ʽ��������

int main()
{
	FILE* pf = fopen("test.text", "r");
	printf("%c\n", fgetc(pf));
	fseek(pf, 3, SEEK_CUR);//�����ļ�ָ���λ��
	fseek(pf, -2, SEEK_END);//�����ļ�ָ���λ�ã��Ӻ���ǰ��
	
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