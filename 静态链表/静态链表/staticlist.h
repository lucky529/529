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
	int NewSpace();//����list��һ�������õĿռ��±�
	void DeleteSpace(int index);//ɾ��list�е�indexԪ��
	bool Empty()const;
	bool Full()const;
	vector<Node> StList;
	int Length;
};