#ifndef PARSER_H
#define PARSER_H

#include "Polynom.h"
using namespace std;

//���������� ������������ �����
//������ ����
N ReadNumber_N(System::String^, int, int);

//������ ������������ ����� � ������
//������ ����
System::String^ WriteNumber_N(N);

//����������� �������������� ��������������� ����� � ������
//������ ����
int SearchSign(System::String^);

//���������� � ��������� ������ � ������������ �������.
//������ ����
N ParseStr_N(System::String^);



#endif //PARSER_H#pragma once
