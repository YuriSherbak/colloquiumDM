#ifndef PARSER_H
#define PARSER_H

#include "Polynom.h"
using namespace std;

//—читывание натурального числа
N ReadNumber_N(System::String^, int, int);

//«апись натурального числа в строку
System::String^ WriteNumber_N(N);

//ќпределение местоположени€ математического знака в строке
int SearchSign(System::String^);

//—читывание и обработка строки с натуральными числами.
N ParseStr_N(System::String^);



#endif //PARSER_H#pragma once
