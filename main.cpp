/*
	//////////////////////////////////////////////////////////

	��� ��������� ����� ��� ��������� �������.
	
	����� ���������� � ����: genpas.txt
	������ ������������ �� �������� c �����: alphabet.txt

	��������� ����� ������������ ������ �������:
		1.) �� 1 �� (�������� ���� ������)
		2.) (������ ������� ���� ������)

	//////////////////////////////////////////////////////////
*/

#include <iostream>
#include <stdexcept>
#include "globalVariables.h"
#include "genpas.h"
#include "logic.h"


int main(void)
{
	try
	{
		logic();
	}
	catch (...)
	{
		std::cout << "Error." << std::endl;
	}

	return(0);
}