#include "../inc/IsBalanced.hpp"
#include <iostream>
#include <vector>

bool IsBalanced::AreBalanced(std::string Str){

	if (Str.size() == 0 or Str.size() % 2 !=0 ) return false;
	else{
	std::vector <char> tmp;
	for(auto const & s : Str) tmp.push_back(s);
	{auto t = tmp[0], s = tmp[1];
		if ((t == '(') and (s == ')')) return true; 
		if ((t == '{') and (s == '}')) return true;
		if ((t == '[') and (s == ']')) return true; 
		else return false;
		}
	}
	
}
