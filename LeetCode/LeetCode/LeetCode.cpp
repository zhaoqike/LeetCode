// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *f;
	//freopen_s(&f,"out.txt", "w", stdout);
	Solution001 solution001;
	string s = " ";
	cout << s<<endl;
	solution001.reverseWords(s);
	cout << s;
	return 0;
}

