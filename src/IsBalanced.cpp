#include "../inc/IsBalanced.hpp"
#include <iostream>
#include <string>

bool IsBalanced::AreBalanced(std::string Str){

	if (Str.size() == 0 or Str.size() % 2 !=0 ) return false;
	else{
		if (Str[0] == '(' and Str[1] == ')') return true; 
		else if (Str[0] == '{' and Str[1] == '}') return true;
		else if (Str[0] == '[' and Str[1] == ']') return true; 
		else return false;
	}
	
}
