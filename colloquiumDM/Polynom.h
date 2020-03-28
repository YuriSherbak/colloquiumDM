#ifndef POLYNOM_H
#define POLYNOM_H
using namespace std;
#include "Q.h"
class Polynom
{
private:
	vector <Q> coef; // ������������ ����������
	N deg; //������� ����������
public:
	Polynom();

	//�������� �����������
	Polynom ADD_PP_P(Polynom a, Polynom b);

	//��������� �����������
	Polynom SUB_PP_P(Polynom a, Polynom b);

	//��������� ���������� �� ������������ �����
	Polynom MUL_PQ_P(Polynom a, Q k);

	//��������� ���������� �� x^k
	Polynom MUL_Pxk_P(Polynom a, N k);

	//������� ����������� ����������
	Q LED_P_Q(Polynom a);

	// ������� ����������
	N DEG_P_N(Polynom a);

	//��������� �� ���������� ��� ������������ ������������� � ��� ����������
	Q FAC_P_Q(Polynom a);

	//��������� �����������
	Polynom MUL_PP_P(Polynom a, Polynom b);

	//������� �� ������� ���������� �� ��������� ��� ������� � ��������
	Polynom DIV_PP_P(Polynom a, Polynom b);

	//������� �� ������� ���������� �� ��������� ��� ������� � ��������
	Polynom MOD_PP_P(Polynom a, Polynom b);

	//��� �����������
	Polynom GCF_PP_P(Polynom a, Polynom b);

	//����������� ����������
	Polynom DER_P_P(Polynom a);

	//�������������� ���������� � ������� ����� � �������
	Polynom NMR_P_P(Polynom a);

	~Polynom();
};


#endif //POLYNOM_H

