#pragma once
#include <vector>

template<typename EleType>
class StaticList
{
public:
	typedef struct
	{
		EleType data;
		int cur;
	}Node;
	StaticList();
	~StaticList();
	bool Insert(const EleType& e, int index = 1);
	bool Delete(EleType& e, int index = 1);
	void Show()const;
private:
	int NewSpace();//返回list中一个可以用的空间下标
	void DeleteSpace(int index);//删除list中的index元素
	bool Empty()const;
	bool Full()const;
	vector<Node> StList;
	int Length;
};