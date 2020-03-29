#ifndef PARSER_H
#define PARSER_H

#include "Polynom.h"
using namespace std;

//—читывание натурального числа
//ўербак ёрий
N ReadNumber_N(System::String^, int, int);

//«апись натурального числа в строку
//ўербак ёрий
System::String^ WriteNumber_N(N);

//ќпределение местоположени€ математического знака в строке
//ўербак ёрий
int SearchSign(System::String^);

//—читывание и обработка строки с натуральными числами.
//ўербак ёрий
N ParseStr_N(System::String^);



#endif //PARSER_H#pragma once
