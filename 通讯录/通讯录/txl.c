#define _CRT_SECURE_NO_WARNINGS 1
#include"txl.h"
void loadcontact(contact* pcon)
{
	addr tmp = {0};
	FILE* pf = fopen("contact.text","rb");
	assert(pcon != NULL);	
	if(pf == NULL)
	{
		perror("程序出错\n");
		return ;
	}
	while(fread(&tmp , sizeof(addr),1,pf))
	{
		checkcapacity(pcon);
		pcon -> data[pcon -> sz] = tmp;
		pcon -> sz++; 
	}
}
void Initcontact(contact* pcon)
{
	assert(pcon != NULL);
	pcon -> sz = 0;
	pcon ->capacity = MAX_CAP;
	pcon ->data = (addr*)malloc(pcon ->capacity*sizeof(addr));
	memset(pcon->data, 0, pcon ->capacity*sizeof(addr));
	loadcontact(pcon);
}

void addcontact(contact* pcon)
{

	if(pcon -> sz == pcon ->capacity)
	{
		checkcapacity(pcon);
	}

	assert(pcon != NULL);
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

void savecontact(contact* pcon)
{
	int i = 0;
	FILE* pf = fopen("contact.text","wb");
	if(pf == NULL)
	{
		perror("程序出错\n");
		return ;
	}
	for(i = 0; i < pcon -> sz; i++)
	{
		fwrite(pcon ->data+i,sizeof(addr),1,pf);
	}
}

void destorycontact(contact* pcon)
{
	assert(pcon != NULL);
	free(pcon -> data);
	pcon -> data = NULL;
	pcon -> capacity = 0;
	pcon -> sz = 0;
}

void checkcapacity(contact* pcon)
{
	if(pcon -> sz == pcon ->capacity)
	{
		addr* ptr = realloc(pcon ->data, (pcon ->capacity+2)*sizeof(addr));
		if(ptr != NULL)
		{
			pcon -> data = ptr;
			pcon -> capacity += 2;
		}
		printf("扩容成功\n");
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
//		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n",
//			pcon -> data[i].name,
//			pcon -> data[i].sex,
//			pcon -> data[i].age,
//			pcon -> data[i].num,
//			pcon -> data[i].address);
//	}
//}

static int findname(const contact* pcon ,char name[])
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

void emptycontct(contact* pcon)
{
	int input = 0;
	printf("危险操作,清空输入1，不清空输入0\n");
	scanf("%d",&input);
	if(input == 1)
	{
		pcon -> sz = 0;
	    pcon ->capacity = MAX_CAP;
	    pcon ->data = (addr*)malloc(pcon ->capacity*sizeof(addr));
	    memset(pcon->data, 0, pcon ->capacity*sizeof(addr));
		printf("清空成功\n");
	}
	else
	{
		;
	}

}

void searchcontact(const contact* pcon)
{
	int pos = 0;
	char name[MAX_NAME] = {0};
	assert(pcon != NULL);
	printf("请输入你要查找人的名字\n");
	scanf("%s",name);
	pos = findname(pcon ,name);
	if(-1 == pos)
	{
		printf("你所要查找的人不存在\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "性别", "年龄", "电话", "地址");
		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n", 

			pcon->data[pos].name, 

			pcon->data[pos].sex,

			pcon->data[pos].age,

			pcon->data[pos].num,

			pcon->data[pos].address);
	}

}

void xuicontact(contact* pcon)
{
	int pos = 0;
	char name[MAX_NAME] = {0};
	assert(pcon != NULL);
	printf("请输入你要修改的人的名字\n");
	scanf("%s",name);
	pos = findname(pcon ,name);
	if(-1 == pos)
	{
		printf("你所要修改的人不存在\n");
	}
	else
	{		
		printf("请输入名字\n");
		scanf("%s",pcon -> data[pos].name);
		printf("请输入性别\n");
		scanf("%s",pcon -> data[pos].sex);
		printf("请输入年龄\n");
		scanf("%d",&(pcon -> data[pos].age));
		printf("请输入电话\n");
		scanf("%s",pcon -> data[pos].num);
		printf("请输入住址\n");
		scanf("%s",pcon -> data[pos].address);		
	}
}

int cmp_age(const void* e1,const void* e2)
{
	return ((struct addr*)e1)->age - ((struct addr*)e2)->age;
}


void sortcontact(contact* pcon)
{
	assert(pcon != NULL);
	qsort(pcon->data,pcon->sz,sizeof(addr),cmp_age);
	printf("排序成功\n");
}

//void sortcontact(contact* pcon)  //以名字排序联系人
//{
//	int flag=0;
//	int i=0;
//	int j=0;
//	for(i=0;i<pcon->sz-1;i++)
//	{
//		flag=0; 
//		for(j=0;j<pcon->sz-1-i;j++)
//		{
//			if(strcmp(pcon->data[j].name,pcon->data[j+1].name) > 0) 
//			{
//				addr tmp=pcon->data[j];
//				pcon->data[j]=pcon->data[j+1];
//				pcon->data[j+1]=tmp;
//				flag=1;
//			}
//		}
//		if(flag == 0)
//			
//			break;
//		
//	}
//}

