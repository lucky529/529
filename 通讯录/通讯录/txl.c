#define _CRT_SECURE_NO_WARNINGS 1
#include"txl.h"
void loadcontact(contact* pcon)
{
	addr tmp = {0};
	FILE* pf = fopen("contact.text","rb");
	assert(pcon != NULL);	
	if(pf == NULL)
	{
		perror("�������\n");
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
	printf("����������\n");
	scanf("%s",pcon -> data[pcon -> sz].name);
	printf("�������Ա�\n");
	scanf("%s",pcon -> data[pcon -> sz].sex);
	printf("����������\n");
	scanf("%d",&(pcon -> data[pcon -> sz].age));
	printf("������绰\n");
	scanf("%s",pcon -> data[pcon -> sz].num);
	printf("������סַ\n");
	scanf("%s",pcon -> data[pcon -> sz].address);
	pcon -> sz++;

	printf("��ӳɹ�\n");	
		
}

void savecontact(contact* pcon)
{
	int i = 0;
	FILE* pf = fopen("contact.text","wb");
	if(pf == NULL)
	{
		perror("�������\n");
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
		printf("���ݳɹ�\n");
	}
}


void showcontact(const contact* pcon)

{

	int i = 0;

	assert(pcon != NULL);

	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");

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
//	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ��,�޷�ɾ��\n");
	}
	else
	{
		printf("������Ҫɾ���˵�����\n");
		scanf("%s", name);
		pos = findname(pcon , name);
		if(pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			for(i = pos; i < pcon -> sz-1;i++)
			{
				pcon -> data[i] = pcon -> data[i+1];
			}
			pcon -> sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}

void emptycontct(contact* pcon)
{
	int input = 0;
	printf("Σ�ղ���,�������1�����������0\n");
	scanf("%d",&input);
	if(input == 1)
	{
		pcon -> sz = 0;
	    pcon ->capacity = MAX_CAP;
	    pcon ->data = (addr*)malloc(pcon ->capacity*sizeof(addr));
	    memset(pcon->data, 0, pcon ->capacity*sizeof(addr));
		printf("��ճɹ�\n");
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
	printf("��������Ҫ�����˵�����\n");
	scanf("%s",name);
	pos = findname(pcon ,name);
	if(-1 == pos)
	{
		printf("����Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("��������Ҫ�޸ĵ��˵�����\n");
	scanf("%s",name);
	pos = findname(pcon ,name);
	if(-1 == pos)
	{
		printf("����Ҫ�޸ĵ��˲�����\n");
	}
	else
	{		
		printf("����������\n");
		scanf("%s",pcon -> data[pos].name);
		printf("�������Ա�\n");
		scanf("%s",pcon -> data[pos].sex);
		printf("����������\n");
		scanf("%d",&(pcon -> data[pos].age));
		printf("������绰\n");
		scanf("%s",pcon -> data[pos].num);
		printf("������סַ\n");
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
	printf("����ɹ�\n");
}

//void sortcontact(contact* pcon)  //������������ϵ��
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

