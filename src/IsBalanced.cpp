#include "../inc/IsBalanced.hpp"
#include <iostream>
#include <vector>

bool IsBalanced::AreBalanced(std::string Str){

	if (Str.size() == 0 or Str.size() % 2 !=0 ) return false;
	else{
	std::vector <char> tmp;
	tmp.push_back(Str[0]);
	for(int i = 1; i < Str.size(); i++) {
		tmp.push_back(Str[i]);
		char t = tmp.end()[-2];
		char s = tmp.end()[-1];
		if ((t == '(') and (s == ')')) {tmp.pop_back(); tmp.pop_back(); } 
		if ((t == '{') and (s == '}')) {tmp.pop_back(); tmp.pop_back(); }
		if ((t == '[') and (s == ']')) {tmp.pop_back(); tmp.pop_back(); }
	}
	if (tmp.size() == 0) return true;
	else return false;
	}
	
}
