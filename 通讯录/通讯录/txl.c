#define _CRT_SECURE_NO_WARNINGS 1
#include"txl.h"
void Initcontact(contact* pcon)
{
	assert(pcon != NULL);
	pcon -> sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}

void addcontact(contact* pcon)
{
	assert(pcon != NULL);
	if(pcon -> sz == MAX)
	{
		printf("通讯录已满无法添加\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s",pcon -> data[pcon -> sz].name);
		printf("请输入性别\n");
		scanf("%s",pcon -> data[pcon -> sz].sex);
		printf("请输入年龄\n");
		scanf("%d",&(pcon -> data[pcon -> sz].age));
		printf("请输入电话\n");
		scanf("%s",pcon -> data[pcon -> sz].num);
		printf("请输入住址\n");
		scanf("%s",pcon -> data[pcon -> sz].address);
		pcon -> sz++;

		printf("添加成功\n");
	}
}


void showcontact(const contact* pcon)

{

	int i = 0;

	assert(pcon != NULL);

	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "性别", "年龄", "电话", "地址");

	for(i=0; i<pcon->sz; i++)

	{

		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n", 

			pcon->data[i].name, 

			pcon->data[i].sex,

			pcon->data[i].age,

			pcon->data[i].num,

			pcon->data[i].address);

	}

}

//void showcontact(contact* pcon)
//{
//	int i = 0;
//	assert(pcon != NULL);
//	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "性别", "年龄", "电话", "地址");
//	for(i = 0; i < pcon -> sz; i++)
//	{
//		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n",
//			pcon -> data[i].name,
//			pcon -> data[i].sex,
//			pcon -> data[i].age,
//			pcon -> data[i].num,
//			pcon -> data[i].address);
//	}
//}

static int findname(contact* pcon ,char name[])
{
	int i = 0;
	assert(pcon != NULL);	
	for(i = 0; i < pcon -> sz; i++)
	{
		if(strcmp(pcon -> data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void delcontact(contact* pcon)
{
	int pos = 0;
	char name[MAX_NAME]={0};
	int i = 0;
	assert(pcon != NULL);
	if(pcon -> sz == 0)
	{
		printf("通讯录为空,无法删除\n");
	}
	else
	{
		printf("请输入要删除人的姓名\n");
		scanf("%s", name);
		pos = findname(pcon , name);
		if(pos == -1)
		{
			printf("要删除的人不存在\n");
		}
		else
		{
			for(i = pos; i < pcon -> sz-1;i++)
			{
				pcon -> data[i] = pcon -> data[i+1];
			}
			pcon -> sz--;
			printf("删除成功\n");
		}
	}
}
