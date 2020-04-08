#include "Parser.h"

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
	for (int i = from; i < to; i++)
	{
		num.push_back((int)str[i] - 48);
	}
	return N(num);
}

int SearchSign(System::String^ str)
{
	for (int i = 0; i < str->Length; i++)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*' || str[i] == '%' || str[i] == ',')
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

	if (str->EndsWith("++")) {
		int positionSign = SearchSign(str);
		N num1 = ReadNumber_N(str, 0, positionSign);

		return num1.ADD_1N_N();
	}
	else if (str->EndsWith("--")) {
		{
			int positionSign = SearchSign(str);
			N num1 = ReadNumber_N(str, 0, positionSign);

			if (num1.NZER_N_B())
			{
				num1 = ReadNumber_N(str, 0, positionSign);
				return num1.SUB_1N_N();
			}
			else
				return N();
		}
	}
	else if (str->StartsWith("мнй"))
	{
		str = str->Remove(0, 3);
		for (int i = 0; i < str->Length; i++)
		{
			if (str[i] == '(' || str[i] == ')')
			{
				str = str->Trim(')', '(');
			}
		}
		int positionSign = SearchSign(str);
		N num1 = ReadNumber_N(str, 0, positionSign);

		N num2 = ReadNumber_N(str, positionSign + 1, str->Length);
		result = num1.LCM_NN_N(num2);
		return result;
	}
	else if (str->StartsWith("мнд"))
	{
		str = str->Remove(0, 3);
		for (int i = 0; i < str->Length; i++)
		{
			if (str[i] == '(' || str[i] == ')')
			{
				str = str->Trim(')', '(');
			}
		}
		int positionSign = SearchSign(str);
		N num1 = ReadNumber_N(str, 0, positionSign);

		N num2 = ReadNumber_N(str, positionSign + 1, str->Length);
		result = num1.GCF_NN_N(num2);
		return result;
	}
	else
	{
		int positionSign = SearchSign(str);
		N num1 = ReadNumber_N(str, 0, positionSign);
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
			if (num1.COM_NN_D(num2) != 1)
			{
				result = num1.DIV_NN_N(num2);
				return result;
			}
			else
			{
				return N();
			}
		}

		case '%':
		{
			if (num1.COM_NN_D(num2) != 1)
			{
				result = num1.MOD_NN_N(num2);
				return result;
			}
			else
			{
				return N();
			}
		}
		default:
			break;
		}
		return N();
	}

}

System::String^ WriteNumber_Z(Z num)
{
	System::String^ str = "";

	for (int i = 0; i < num.getNum().size(); i++)
	{
		System::String::Concat(str, num.getNum().getNumber()[i].ToString());
	}

	return str;
}

Z ReadNumber_Z(System::String^ str, int from, int to)
{
	bool pos = true;
	if (str[from] == '-')
		pos = false;
	else
		pos = true;

	N num = ReadNumber_N(str, from, to);

	return Z(num, pos);
}

