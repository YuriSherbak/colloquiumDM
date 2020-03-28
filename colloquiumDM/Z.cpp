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
	return N();
}

int Z::POZ_Z_D()
{
	return 0;
}

Z Z::MUL_ZM_Z()
{
	return Z();
}

Z Z::TRANS_N_Z()
{
	return Z();
}

N Z::TRANS_Z_N()
{
	return N();
}

Z Z::ADD_ZZ_Z(Z a)
{
	return Z();
}

Z Z::SUB_ZZ_Z(Z a)
{
	return Z();
}

Z Z::MUL_ZZ_Z(Z a)
{
	return Z();
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
