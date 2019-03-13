#include<iostream>
#include<windows.h>
#include<string>
using namespace std;


int main(){
	
	string s;
	s = "abcd12345ed125ss123456789";
	string ret(s.begin() + 16, s.begin() + 25);
	cout << ret << endl;
	
	system("pause");
	return 0;
}
