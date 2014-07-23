// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *f;
	////freopen_s(&f,"out.txt", "w", stdout);
	//Solution001 solution001;
	//string s = " ";
	//cout << s<<endl;
	//solution001.reverseWords(s);
	//cout << s;

	Solution002 s1, s2;
	cout << s1.vec.size() << "  " << s2.vec.size() << endl;
	s1.vec.resize(3);
	for (int i = 0; i < s1.vec.size(); i++)
	{
		s1.vec[i] = i + 100;
	}
	for (int i = 0; i < s1.vec.size(); i++)
	{
		cout << s1.vec[i] << endl;
	}
	cout << s1.vec.size() << "  " << s2.vec.size() << endl;
	s2 = s1;
	cout << s1.vec.size() << "  " << s2.vec.size() << endl;
	for (int i = 0; i < s1.vec.size(); i++)
	{
		cout << s2.vec[i] << endl;
	}
	return 0;
}

