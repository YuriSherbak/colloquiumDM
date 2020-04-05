#include "Parser.h"

enum mathOp {plus = '+', minus = '-', mul = '*', diiv = '//'};

bool checkAnotherOperationForNotEqually(System::String^ str) {
	return str->EndsWith("++")
		|| str->EndsWith("--")
		|| str->StartsWith("мнд")
		|| str->StartsWith("мнй");
}

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
		if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*' || str[i] == '%')
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

	N result;
	int positionSign = SearchSign(str);
	N num1 = ReadNumber_N(str, 0, positionSign);

	if (str->EndsWith("++")){
		
		return num1.ADD_1N_N();
	}
	else if (str->EndsWith("--")) {
		{
			if (num1.NZER_N_B())
			{
				num1 = ReadNumber_N(str, 0, positionSign);
				return num1.SUB_1N_N();
			}
			else
				return N();
		}
	}
	else if (str->EndsWith("мнд")) {

	}
	else if (str->EndsWith("мнй")) {

	}

	else 
	{
		N num2 = ReadNumber_N(str, positionSign + 1, str->Length);
		char sign = str[positionSign];
		switch (sign)
		{
		case '+':
		{
			result = num1.ADD_NN_N(num2);
			return result;
		}
		case '-':
		{
			if (num1.COM_NN_D(num2) != 1)
			{
				result = num1.SUB_NN_N(num2);
				return result;
			}
			else
			{
				return N();
			}
		}
			
		case '*':
		{
			result = num1.MUL_NN_N(num2);
			return result;
		}

		case '/':
		{
			result = num1.DIV_NN_N(num2);
			return result;
		}

		case '%':
		{
			result = num1.MOD_NN_N(num2);
			return result;
		}
		default:
			break;
		}
		return N();
	}

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
