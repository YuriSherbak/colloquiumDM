#include "N.h" 

N::N()
{
	number.push_back(0);
}

N::N(vector<short int> num)
{
	number = num;
}

vector<short int> N::getNumber()
{
	return number;
}

int N::size()
{
	return number.size();
}


string N::toString()
{
	ostringstream oss;

	if (!number.empty())
	{
		copy(number.begin(), number.end() - 1,
			ostream_iterator<int>(oss, ""));

		oss << number.back();
	}

	return oss.str();
}

int N::COM_NN_D(N b)
{
	if (number == b.number)
		return 0;
	else if (number.size() == b.number.size())
	{
		for (int i = 0; i < number.size(); i++)
		{
			if (number[i] > b.number[i])
				return 2;
			if (number[i] < b.number[i])
				return 1;
		}
	}
	else if (number.size() > b.number.size())
		return 2;
	else
		return 1;
}

bool N::NZER_N_B()
{

	if (number.at(0) != 0)
	{
		return true;
	}
	else
		return false;
}

N N::ADD_1N_N()
{
	N b;
	b.number = number;
	if (b.number.back() < 9)
	{
		b.number.back()++;
	}
	else if (b.number.back() == 9)
	{
		for (int i = b.number.size() - 1; i >= 0; i--)
		{
			if (b.number[i] == 9)
			{
				b.number[i]++;
				b.number[i] -= 10;
			}
			else
			{
				b.number[i]++;
				break;
			}
		}
		if (b.number.front() == 0)
		{
			b.number.insert(b.number.begin(), 1);
		}
	}
	return b;
}

N N::ADD_NN_N(N b)
{
	N z;
	int i, j, r(0);

	N a = *this;

	if (COM_NN_D(b) == 1)
		swap(a, b);

	for (i = b.number.size(); i < a.number.size(); i++)
	{
		auto it = b.number.begin();
		b.number.insert(it, 0);
	}

	for (j = a.number.size() - 1; j >= 0; j--)
	{
		auto it = z.number.begin();
		z.number.insert(it, (a.number[j] + b.number[j] + r) % 10);
		r = (a.number[j] + b.number[j] + r) / 10;
	}

	if (r != 0)
	{
		auto it = z.number.begin();
		z.number.insert(it, r);
		i++;
	}
	z.number.pop_back();

	return z;
}

N N::SUB_1N_N()
{
	N b;
	b.number = number;
	N one = N();
	one.number[0] += 1;
	return b.SUB_NN_N(one);
}

N N::SUB_NN_N(N b)
{
	N a = *this;
	N result;

	if (a.COM_NN_D(b) == 0) return (result);

	for (int i = 0; i <= a.number.size() - 1; i++)
	{
		result.number.push_back(0);
	}

	for (int i = b.number.size(); i < a.number.size(); i++)
	{
		auto it = b.number.begin();
		b.number.insert(it, 0);
	}

	int carry = 0;
	for (int i = b.number.size() - 1; i >= 0; --i)
	{
		result.number[i] = a.number[i] - b.number[i] - carry;
		carry = 0;
		if (result.number[i] < 0)
		{
			result.number[i] += 10;
			carry = 1;
		}
	}
	result.number.pop_back();

	while (result.number[0] == 0)
	{
		auto iter = result.number.begin();
		result.number.erase(iter);
	}

	return N(result);
}

N N::MUL_ND_N(int d)
{
	int pr = 0;
	N number1;

	number1.number = number;
	for (int j = number1.number.size() - 1; j >= 0; j--)
	{
		number1.number[j] *= d;
		number1.number[j] += pr;

		if (number1.number[j] > 9) {
			pr = number1.number[j] / 10;
			number1.number[j] %= 10;
		}
		else {
			pr = 0;
		}
	}
	if (pr)
	{
		number1.number.insert(number1.number.begin(), pr);
	}
	return number1;
}

N N::MUL_Nk_N(int k)
{
	N number1;

	number1.number = number;

	for (int i = 0; i < k; i++)
	{
		number1.number.push_back(0);
	}

	return number1;
}

N N::MUL_NN_N(N b)
{
	N a;
	a.number = number;

	N res1, res2;

	int ch = 0;
	if (a.number[0] == 0 || b.number[0] == 0) {
	}
	else {
		for (int i = b.number.size() - 1; i >= 0; i--)
		{
			res2 = a.MUL_ND_N(b.number[i]);
			res2 = res2.MUL_Nk_N(ch);
			ch++;
			res1 = res1.ADD_NN_N(res2);
		}
	}
	return res1;
}

N N::SUB_NDN_N(N b, int d)
{
	N a;
	N c;
	a.number = number;
	b = b.MUL_ND_N(d);
	c = a.SUB_NN_N(b);
	return c;
}

N N::DIV_NN_Dk(N b, int k)
{
	N a;
	a.number = number;
	N result;

	int t = a.COM_NN_D(b);
	if (t == 1)
		return result;
	else if (t == 0)
		result.number[0] = 1;
	else
	{
		N c;
		c.number[0] = a.number[0];
		for (int i = 1; i < b.number.size(); i++)
			c.number.push_back(a.number[i]);

		if (b.COM_NN_D(c) == 2)
			c.number.push_back(a.number[b.number.size()]);
		else if (b.COM_NN_D(c) == 0)
			result.number[0] = 1;

		int i = 0;
		while (c.COM_NN_D(b) != 1)
		{
			i++;
			c = c.SUB_NN_N(b);
		}
		result.number[0] = i;
	}

	return result.MUL_Nk_N(k - 1);

}


N N::DIV_NN_N(N b)

{
	N rezult;
	N a;
	a.number = number;
	int i;
	i = a.number.size() - b.number.size() + 1;
	rezult.number.clear(); rezult.number.push_back(0);
	while (a.COM_NN_D(b) != 1)
	{
		N p;
		N mul;
		p = a.DIV_NN_Dk(b, i);
		while (a.COM_NN_D(p.MUL_NN_N(b)) == 1)
		{
			i--;
			p.number.pop_back();
		}
		rezult = rezult.ADD_NN_N(p);
		mul = b.MUL_NN_N(p);

		a = a.SUB_NN_N(mul);
		if (a.COM_NN_D(b) == 1) break;
		i--;
	}
	return N(rezult);
}

N N::MOD_NN_N(N b)
{
	N a;
	N p;
	a.number = number;
	p = a.DIV_NN_N(b);
	p = p.MUL_NN_N(b);
	return N(a.SUB_NN_N(p));
}

N N::GCF_NN_N(N b)
{
	N a = *this;
	N _a = a;
	N _b = b;
	while (_a.COM_NN_D(_b) != 0) {
		if (_a.COM_NN_D(_b) == 2) {
			_a = _a.SUB_NN_N(_b);
		}
		else {
			_b = _b.SUB_NN_N(_a);
		}
	}
	return _a;
}

N N::LCM_NN_N(N b)
{
	N result;
	result = MUL_NN_N(b);
	result = result.DIV_NN_N(GCF_NN_N(b));
	return result;
}

N::~N()
{
}


