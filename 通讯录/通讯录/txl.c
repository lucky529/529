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
		printf("ͨѶ¼�����޷����\n");
	}
	else
	{
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
