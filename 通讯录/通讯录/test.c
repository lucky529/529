#define _CRT_SECURE_NO_WARNINGS 1
#include"txl.h"
void menu()
{
	printf("***************************\n");
	printf("**** 1.add    2.del    ****\n");
	printf("**** 3.search 4.modify ****\n");
	printf("**** 5.show   6.empty  ****\n");
	printf("**** 7.sort   0.exit   ****\n");
	printf("***************************\n");
}
int main()
{
	int len = 0;
	int input = 0;
	contact con;	
	Initcontact(&con);	
	do
	{
		menu();
		printf("请输入你要完成的操作\n");
		scanf("%d",&input);
		switch(input)
		{
		case ADD:
			addcontact(&con);
			break;
		case DEL:
			delcontact(&con);
			break;
		case SEARCH:
			searchcontact(&con);
			break;
		case MODIFY:
			xuicontact(&con);
			break;
		case SHOW:
			showcontact(&con);
			break;			
		case EMPTY:
			emptycontct(&con);
			break;
		case SORT:
			sortcontact(&con);
			break;
		case EXIT:
			savecontact(&con);
			printf("保存成功\n");
			destorycontact(&con);
			printf("程序退出\n");
			break;
		default:
			printf("输入有误\n");
			break;
		}

	}while(input);
	return 0;
}