#include "Parser.h"

N ReadNumber_N(string str)
{
	vector <short int> num;
	for (int i = 0; i < str.size(); i++)
		num.push_back((int)str[i] - 48);

	return N(num);
}

Z ReadNumber_Z(string str)
{
	vector <short int> num;
	bool pos = true;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '-')
		{
			pos = false;
			continue;
		}

		num.push_back((int)str[i] - 48);
	}

	return Z(num, pos);
}
