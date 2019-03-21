#include<iostream>
#include<windows.h>
#include<vector>
using namespace std;



class Solution {//Ñî»ÔÈý½Çk¿Õ¼ä
public:
	vector<int> getRow(int rowIndex) {
		vector<int> v1;
		vector<int> v2;

		v1.reserve(rowIndex + 1);
		v2.reserve(rowIndex + 1);
		v1.push_back(1);
		for (int i = 0; i < rowIndex; i++)
		{
			int j = 0;
			while (j <= v1.size())
			{
				if (j == 0)
				{
					v2.push_back(1);
					j++;
					continue;
				}
				if (j == v1.size())
				{
					v2.push_back(1);
					j++;
					break;
				}
				if (j <= v1.size())
				{
					int index = j;
					v2.push_back(v1[index] + v1[index - 1]);
					j++;
				}
			}
			v1 = v2;
			v2.clear();
		}
		return v1;
	}
};

int main()
{
	getRow(3);
	system("pause");
	return 0;
}