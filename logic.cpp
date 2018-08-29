#include "logic.h"
#include <iostream>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;



void logic()
{
	inputAlphabet();


	int lenght_pas = 0;
	unsigned long long max_comb = 0;

	while (1)
	{
		cout << "Enter the password length is not more " << GP::maxSizePassword << ": ";
		cin >> lenght_pas;
		if (lenght_pas <= GP::maxSizePassword)
			break;


		std::cin.clear();
		while (std::cin.get() != '\n');
	}
	cout << endl;

	cout << "Generate all passwords?" << endl;
	cout << "By default, all passwords are generated." << endl;
	cout << "(y, n): ";
	char ch;
	cin >> ch;
	cout << endl;
	ch = tolower(ch);

	
	if (ch == 'n')
	{
		max_comb = 1;
		for (int i = 0; i < lenght_pas; i++)
		{
			if (max_comb*max_comb < 18446744073709551615)
			{
				max_comb *= GP::sizeAlphabet;
			}
			else
			{
				max_comb = -1;
				break;
			}
		}
	}
	else
	{
		int temp = 1;
		for (int i = 0; i < lenght_pas; i++)
		{
			if (max_comb*max_comb < 18446744073709551615)
			{
				temp *= GP::sizeAlphabet;
				max_comb += temp;
			}
			else
			{
				max_comb = -1;
				break;
			}
		}
	}

	cout << endl;
	cout << "Everything is possible " << max_comb << " passwords." << endl;
	
	cout << "Click anything to continue.";
	cin.get();
	cin.get();
	cout << endl;

	cout << "Generation..." << endl;
	cout << endl;

	if (ch == 'n')
	{
		generateFullPasswords(lenght_pas, false);
	}
	else
	{
		generateFullPasswords(lenght_pas, true);
	}

	cout << "Generation complete..." << endl;
	cin.get();
}