#pragma once

#include <vector>
#include <fstream>


namespace GP
{
	const int maxSizePassword = 32;
	extern int sizeAlphabet;

	extern std::vector<char> temp_alphabet;
	extern std::ofstream fout_password;
	extern std::ifstream fin_alphabet;
}

