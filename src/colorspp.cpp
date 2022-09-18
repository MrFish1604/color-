#include "colorspp.h"

void print(std::string str, int fg, int bg, int deco)
{
	std::cout << "\033[" << deco << ';' << bg << ';' << fg << 'm' << str << "\033[0m";
}

void println(std::string str, int fg, int bg, int deco)
{
	std::cout << "\033[" << deco << ';' << bg << ';' << fg << 'm' << str << "\033[0m" << std::endl;
}

std::string color(std::string str, int fg, int bg, int deco)
{
	std::stringstream ss("");
	ss << "\033[" << deco << ';' << bg << ';' << fg << 'm' << str << "\033[0m";
	return ss.str();
}