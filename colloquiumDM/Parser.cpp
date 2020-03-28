#include "Parser.h"

enum mathOp {plus = '+', minus = '-', mul = '*', diiv = '//'};

N ReadNumber_N(string str, int from, int to)
{
	mathOp sign;
	vector <short int> num;
	for(int i = from; i < to; i++)
	{
		num.push_back((int)str[i] - 48);
		i++;
	}
	return N(num);
}

int SearchSign(string str)
{
	mathOp sign;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == sign)
			return i;
	}
	return -1;
}

N ParseStr_N(string str)
{
	str.pop_back();
	int positionSign = SearchSign(str);
	N num1 = ReadNumber_N(str, 0, positionSign);
	N num2 = ReadNumber_N(str, positionSign + 1, str.size());
	char sign = str[positionSign];
	return N();
}

N ParseStr_N(System::String^ str)
{
	return N();
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
