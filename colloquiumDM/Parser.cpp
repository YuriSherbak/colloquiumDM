#include "Parser.h"

enum mathOp {plus = '+', minus = '-', mul = '*', diiv = '//'};

System::String^ WriteNumber_N(N num)
{
	System::String^ str = "";

	for (int i = 0; i < num.size(); i++)
	{
		str = System::String::Concat(str, num.getNumber()[i].ToString());
	}

	return str;
}

N ReadNumber_N(System::String^ str, int from, int to)
{
	vector <short int> num;
	for(int i = from; i < to; i++)
	{
		num.push_back((int)str[i] - 48);
	}
	return N(num);
}

int SearchSign(System::String^ str)
{
	for (int i = 0; i < str->Length; i++)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
			return i;
	}
	return -1;
}

N ParseStr_N(System::String^ str)
{
	if (str[str->Length - 1] == '=')
	{
		str = str->Remove(str->Length - 1);
	}

	int positionSign = SearchSign(str);
	N num1 = ReadNumber_N(str, 0, positionSign);
	N num2 = ReadNumber_N(str, positionSign + 1, str->Length);
	char sign = str[positionSign];

	N num3;
	switch (sign)
	{
	case '+':
	{
		num3 = num1.ADD_NN_N(num2);
		return num3;
	}
	case '-':
		if (num1.COM_NN_D(num2) != 1)
		{
			num3 = num1.SUB_NN_N(num2);
			return num3;
		}
	default:
		break;
	}
	return N();
}

Z ReadNumber_Z(System::String^ str)
{
	/*vector <short int> num;
	bool pos = true;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '-')
		{
			pos = false;
			continue;
		}

		num.push_back((int)str[i] - 48);
	}*/

	return Z();
}
