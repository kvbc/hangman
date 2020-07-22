#include <windows.h>
#include <algorithm>
#include "util/word.h"
#include "input.h"
#include "output.h"


int main() {
	std::cout << "Welcome to hangman!\n\n";

	string word = inp::get_word();
	std::transform(word.begin(), word.end(), word.begin(), tolower);
	string cword(word.length(), '_');
	u_word::rep_all(cword, word, ' ');

	system("cls");

	char rep;
	int lvl = MAX_LVL;

	while (
		lvl > 0 &&
		cword != word
	) {
		out::hman(lvl);
		out::word(cword);
		
		rep = tolower(inp::get_char());
		lvl -= !u_word::rep_all(cword, word, rep);

		system("cls");
	}
	
	out::hman(lvl);
	out::word(cword);
	if(lvl < 1) std::cout << "You lose!\n";
	else		std::cout << "You won!\n";
	std::cout << "Press any key to continue ";

	std::cin.ignore();
	std::cin.get();
	system("cls");

	return main();
}