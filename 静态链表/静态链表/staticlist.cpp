#include "StaticList.h"
#include<iostream>
#define MAXSIZE 1000
using namespace std;


template<typename EleType>
StaticList<EleType>::StaticList() 
	: Length(0)
	, StList(MAXSIZE)
{
	for (int i = 0; i < MAXSIZE - 1; ++i)
	{
		StList[i].cur = i + 1;
	}
	StList[MAXSIZE - 1].cur = 0;
}


template<typename EleType>
StaticList<EleType>::~StaticList()
{

}

template<typename EleType>
bool StaticList<EleType>::Insert(const EleType& e, int index /*= 1*/)
{
	if (Full())//如果为满，则不插入数据
	{
		cout << "Can't insert element to a full List!\n";
		return false;
	}
	if (index<1 || index>Length + 1)//如果插入点的下标不合法，返回false
	{
		cout << "The invalid index!\n";
		return false;
	}
	int k = NewSpace();//返回一个可以插入的节点的下标
	int j = MAXSIZE - 1;
	if (k)//如果返回下标不为0
	{
		StList[k].data = e;//将返回位置的数据设置成e
		for (int i = 1; i <= index - 1; ++i)//找到插入节点的前一个节点的下标
		{
			j = StList[j].cur;
		}
		StList[k].cur = StList[j].cur;//将插入节点的cur设置成插入位置前一个节点的cur
		StList[j].cur = k;//将插入位置的前一个节点的cur设置成k，实现把第k个节点插入到index-1个节点后，实现把第K个节点插入到第index个位置
		++Length;//链表长度加一
		return true;
	}

	return false;
}

template<typename EleType>
bool StaticList<EleType>::Delete(EleType& e, int index /*= 1*/)
{
	if (Empty())//如果链表为空，不执行删除操作
	{
		cout << "Can't delete element in a empty list!\n";
		return false;
	}
	if (index<1 || index>Length)//如果删除的位置不合法，返回false
	{
		cout << "The invalid index!\n";
		return false;
	}
	int k = MAXSIZE - 1;
	int i = 1;
	for (; i <= index - 1; ++i)//找到第index-1个节点k
	{
		k = StList[k].cur;
	}
	i = StList[k].cur;//i为第index个节点的下标
	StList[k].cur = StList[i].cur;//将第index-1个节点的cur设置成第index个节点的cur，实现了把第index个节点排除在链表之外
	e = StList[i].data;//返回第index个节点的data给e
	DeleteSpace(i);//回收第index个节点的空间
	--Length;//链表长度减一
	return true;
}

template<typename EleType>
void StaticList<EleType>::Show() const
{
	if (Empty())
	{
		cout << "The List is Empty!\n";
		return;
	}
	int k = StList[MAXSIZE - 1].cur;
	cout << "The list is :\n";
	for (int i = 1; i <= Length; ++i)
	{
		cout << StList[k].data << " ";
		k = StList[k].cur;
	}
	cout << endl;
}

template<typename EleType>
bool StaticList<EleType>::Full() const
{
	if (Length > MAXSIZE - 2)//保证StList[0]和StList[MAXSIZE-1]不被插入数据覆盖
	{
		return true;
	}
	return false;
}

template<typename EleType>
bool StaticList<EleType>::Empty() const
{
	return(Length == 0);
}

template<typename EleType>
void StaticList<EleType>::DeleteSpace(int index)
{
	StList[index].cur = StList[0].cur;//将要删除的节点加入到空闲节点最前
	StList[0].cur = index;//把该节点设置成第一个可用的空闲节点
}

template<typename EleType>
int StaticList<EleType>::NewSpace()
{
	int i = StList[0].cur;//第一个可用的空闲节点

	if (StList[0].cur)//如果该空闲节点可用
	{
		StList[0].cur = StList[i].cur;//设置下一次第一个可用的空闲节点为返回节点的下一个节点
	}
	return i;//返回可用节点的下标
}

template<typename EleType>
Node* StaticList<EleType>::FindNode(const EleType& e)
{
	if(Empty())
	{
		cout << "The List is Empty!\n";
		return nullptr;
	}
	int k = MAXSIZE - 1;
	int i = 1;
	for (; i <= index - 1; ++i)//找到第index-1个节点k
	{
		if (e == StList[k].data)
		{
			break;
		}
		k = StList[k].cur;
	}
	return &StList[k];
}