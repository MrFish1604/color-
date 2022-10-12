#ifndef COLORSPP_H
#define COLORSPP_H

#include <iostream>
#include <sstream>

//FG
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
//BG
#define BLACKBG 40
#define REDBG 41
#define GREENBG 42
#define YELLOWBG 43
#define BLUEBG 44
#define MAGENTABG 45
#define CYANBG 46
#define WHITEBG 47
#define BBLACKBG 100
#define BREDBG 101
#define BGREENBG 102
#define BYELLOWBG 103
#define BBLUEBG 104
#define BMAGENTABG 105
#define BCYANBG 106
#define BWHITEBG 107
//STYLE
#define BASIC 0
#define BOLD 1
#define GREYED 2
#define ITALIC 3
#define UNDERLINE 4
#define BLINK 5
#define BLINK6 6
#define NEGATIF 7
#define HIDE 8
#define CROSS 9

void print(std::string str, int fg=37, int bg=40, int deco=0);
void println(std::string str, int fg=37, int bg=40, int deco=0);

std::string color(std::string str, int fg);
std::string color(std::string str, int fg, int bg);
std::string color(std::string str, int fg, int bg, int deco);

#endif