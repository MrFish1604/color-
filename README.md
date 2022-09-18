# C++ librairy to print text in color
--------------------------------------

## How to install ?
```
git clone https://github.com/MrFish1604/colorpp.git
cd colorpp
make
sudo make install
```

## How to use ?
Include colorspp.h
```cpp
#include <colorspp.h> 
```

Then print something with
```cpp
void print(std::string str, int fg=37, int bg=40, int deco=0);
void println(std::string str, int fg=37, int bg=40, int deco=0);
std::string color(std::string str, int fg=37, int bg=40, int deco=0);
```
## Available parameters
View colorspp.h for availables colors and styles.

## Examples
```cpp
println("Hello world !", GREENFG, WHITEBG, ITALIC);
```
outputs "Hello world !" in green italic on a white background.

If you don't want to print in stdout :
```cpp
std::cerr << color("Shiny error", REDFG, BLACKBG, BLINK) << std::endl;
```
