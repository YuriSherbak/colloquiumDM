#include "Z.h" 

Z::Z()
{
	num = N();
	pos = true;
}

Z::Z(N _num, bool _pos)
{
	this->num = _num;
	this->pos = _pos;
}

Z::Z(vector <short int> _number, bool _pos)
{
	this->num = N(_number);
	this->pos = _pos;
}

string Z::toString()
{
	ostringstream oss;

	vector <short int> number = num.getNumber();

	if (!number.empty())
	{
		//если отрицательное
		if (!pos) oss << "-";

		copy(number.begin(), number.end() - 1,
			ostream_iterator<int>(oss, ""));

		oss << number.back();
	}


	return oss.str();
}

N Z::getNum()
{
	return num;
}
bool Z::getPos()
{
	return pos;
}
N Z::ABS_Z_N()
{
	N a = num;
	return a;
}

int Z::POZ_Z_D()
{
	return 0;
}

Z Z::MUL_ZM_Z()
{
	Z a = *this;
	a.pos = !a.pos;
	return Z(a);
}

N Z::TRANS_Z_N()
{
	Z num = *this;
	return N(num.getNum());
}

Z Z::TRANS_N_Z(N num)
{
	return Z(num.getNumber(), true);
}

Z Z::ADD_ZZ_Z(Z a)
{
	Z n = *this;
	n.num = num;
	Z answer;
	answer.pos = true;

	if (a.num.COM_NN_D(n.num) == 0) return Z(answer);

	if (a.num.COM_NN_D(n.num) == 2) swap(a, n);


	if (n.pos == a.pos)
	{
		answer.num = n.num.ADD_NN_N(a.num);
		answer.pos = a.pos;
	}
	else
	{
		answer.num = n.num.SUB_NN_N(a.num);
		answer.pos = n.pos;
	}

	return Z(answer);
}

Z Z::SUB_ZZ_Z(Z a)
{
	Z b = *this;
	a.pos = !a.pos;
	Z result = b.ADD_ZZ_Z(a);
	return result;
}

Z Z::MUL_ZZ_Z(Z a)
{
	Z result;
	result.num = a.num.MUL_NN_N(num);
	if ((pos == true) && (a.pos == true)) result.pos = true;
	else if ((pos == true) && (a.pos == false))result.pos = false;
	else if ((pos == false) && (a.pos == true)) result.pos = false;
	else if ((pos == false) && (a.pos == false)) result.pos = true;

	return result;
}

Z Z::DIV_ZZ_Z(Z a)
{
	return Z();
}

Z Z::DIV_ZZ_N(Z a)
{
	return Z();
}

Z Z::MOD_ZZ_Z(Z a)
{
	return Z();
}

Z Z::MOD_ZZ_N(N a)
{
	return Z();
}

Z::~Z()
{
}
