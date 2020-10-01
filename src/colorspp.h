#ifndef COLORSPP_H
#define COLORSPP_H

#include <iostream>

#define BLACKFG 30
#define REDFG 31
#define GREENFG 32
#define YELLOWFG 33
#define BLUEFG 34
#define MAGENTAFG 35
#define CYANFG 36
#define WHITEFG 37
#define BBLACKFG 90
#define BREDFG 91
#define BGREENFG 92
#define BYELLOWFG 93
#define BBLUEFG 94
#define BMAGENTAFG 95
#define BCYANFG 96
#define BWHITEFG 97

void print(std::string str, int fg=37, int bg=30, int deco=0);
void println(std::string str, int fg=37, int bg=30, int deco=0);

#endif