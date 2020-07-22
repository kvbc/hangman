#pragma once
#include "../core.h"


// u_word stands for util_word
namespace u_word {
	bool rep_all(string &str1, const string &str2, char rep);
}


// Replace all the occurences of character 'rep' in str1
// that occur at the same index in str2, returns true
// if any replacement has been made, otherwise returns false
bool u_word::rep_all(string &str1, const string &str2, char rep) {
	bool any_rep = false;
	int len = str2.length();
	for(int i = 0; i < len; i++)
		if(str2[i] == rep)
			str1[i] = rep,
			any_rep = true;
	return any_rep;
}