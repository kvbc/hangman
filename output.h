#pragma once
#include <iostream>
#include "core.h"


namespace out {
	void word(const string& str);
	void hman(int lvl);
}


void out::word(const string& str) {
	size_t len = str.length();
	std::cout << ' ';
	for (
		int l = 0,
		    i = 0;
		l <= len / LTRS_PER_LINE;
		l++
	) {
		for (;
			i < len &&
			i < (l + 1) * LTRS_PER_LINE;
			i++
		)
			std::cout << str[i] << ' ';
		std::cout << '\n';
	}
	std::cout << '\n';
}


void out::hman(int lvl) {
	std::cout <<
		" +----+\n"
		" |    |\n"
		" |    ";

	if(lvl >= 1) std::cout << "O";
	std::cout << "\n |   ";
	if(lvl >= 2) std::cout << '/';
	if(lvl >= 3) std::cout << '|';
	if(lvl >= 4) std::cout << '\\';
	std::cout << "\n |   ";
	if(lvl >= 5) std::cout << '/';
	std::cout << ' ';
	if(lvl >= 6) std::cout << '\\';

	std::cout <<
		"\n |\n"
		"==========\n";
}