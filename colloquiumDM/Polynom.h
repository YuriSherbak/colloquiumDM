#ifndef POLYNOM_H
#define POLYNOM_H
using namespace std;
#include "Q.h"
class Polynom
{
private:
	vector <Q> coef; // коэффициенты многочлена
	N deg; //степень многочлена
public:
	Polynom();

	//Сложение многочленов
	Polynom ADD_PP_P(Polynom a, Polynom b);

	//Вычитание многочленов
	Polynom SUB_PP_P(Polynom a, Polynom b);

	//Умножение многочлена на рациональное число
	Polynom MUL_PQ_P(Polynom a, Q k);

	//Умножение многочлена на x^k
	Polynom MUL_Pxk_P(Polynom a, N k);

	//Старший коэффициент многочлена
	Q LED_P_Q(Polynom a);

	// Степень многочлена
	N DEG_P_N(Polynom a);

	//Вынесение из многочлена НОК знаменателей коэффициентов и НОД числителей
	Q FAC_P_Q(Polynom a);

	//Умножение многочленов
	Polynom MUL_PP_P(Polynom a, Polynom b);

	//Частное от деления многочлена на многочлен при делении с остатком
	Polynom DIV_PP_P(Polynom a, Polynom b);

	//Остаток от деления многочлена на многочлен при делении с остатком
	Polynom MOD_PP_P(Polynom a, Polynom b);

	//НОД многочленов
	Polynom GCF_PP_P(Polynom a, Polynom b);

	//Производная многочлена
	Polynom DER_P_P(Polynom a);

	//Преобразование многочлена — кратные корни в простые
	Polynom NMR_P_P(Polynom a);

	~Polynom();
};


#endif //POLYNOM_H

