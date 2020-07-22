#pragma once
#include <iostream>
#include "core.h"


namespace inp {
	string get_word();
	char get_char();
}


string inp::get_word() {
	string str;
	std::cout << "Word: ";
	std::getline(std::cin, str);
	return str;
}


char inp::get_char() {
	char c;
	std::cout << "Letter: ";
	std::cin >> c;
	return c;
}