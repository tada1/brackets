#include "../inc/IsBalanced.hpp"
#include <iostream>
#include <algorithm>

bool IsBalanced::AreBalanced(std::string Str){
	if(Str == "()" || Str == "[]")return true;
	else return false;
}
