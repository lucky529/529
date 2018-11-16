#ifndef __TXL_H__

#define __TXL_H__
#include<stdio.h>
#include<string.h>
#include<assert.h>

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	XUI,
	SHOW,
	EMPTY,
	SORT

};
#define MAX 1000
#define MAX_NAME 15
#define MAX_SEX 5
#define MAX_NUM 12
#define MAX_DAARESS 30
typedef struct addr
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	short int age;
	char num[MAX_NUM];
	char address[MAX_DAARESS];

}addr;

typedef struct contact
{
	addr data[MAX];
	int sz;
}contact;

void Initcontact(contact* pcon);
void addcontact(contact* pcon);
void showcontact(const contact* pcon);
void delcontact(contact* pcon);

#endif