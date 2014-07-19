#include "stdafx.h"
#include "Solution001.h"


Solution001::Solution001()
{
}


Solution001::~Solution001()
{
}

void Solution001::reverseWords(string &s)
{
	vector<string> substrings;
	int len = s.length();
	//cout << len << endl;
	int i = 0;
	while (i<len)
	{
		while (i<len&&s[i] == ' ')
		{
			i++;
			//cout <<"blank"<< i << endl;
		}
		string substr;
		substr.clear();
		while (i<len&&s[i] != ' ')
		{
			substr.append(1,s[i]);
			i++;
			//cout << "full"<<i << endl;
			//cout << "s now: " << substr << endl;
		}
		if (substr.length())
		{
			substrings.push_back(substr);
		}
		
	}
	//cout << "size" << endl;
	//cout << substrings.size() << endl;
	string result = "";
	for (int i = substrings.size()-1; i >=0; i--)
	{
		result += substrings[i];
		if (i != 0)
		{
			result.append(1,' ');
		}
		
	}
	//cout << "size" << endl;
	//cout << substrings.size()<<endl;
	//result += substrings[0];
	//cout << "result: " << result << endl;
	s = result;
}
