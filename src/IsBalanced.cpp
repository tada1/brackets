#include "../inc/IsBalanced.hpp"
#include <iostream>
#include <vector>

bool IsBalanced::AreBalanced(std::string Str){

	if (Str.size() == 0) return false;
	else{
	std::vector <char> tmp;
	tmp.push_back(Str[0]);
	for(int i = 1; i < Str.size(); i++) {
		tmp.push_back(Str[i]);
		if(IsPair(tmp.end()[-2], tmp.end()[-1])) {tmp.pop_back(); tmp.pop_back(); } 
		}
	if (tmp.size() == 0) return true;
	else return false;
	}
} "ggggg"

bool IsBalanced::IsPair(char t, char s){
	if ((t == '(') and (s == ')')) return true;
	if ((t == '{') and (s == '}')) return true;
	if ((t == '[') and (s == ']')) return true; 
	else return false;
}
