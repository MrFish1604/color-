# C++ librairie to print text in color
--------------------------------------

## How to use
Just import colorspp.h and print something with

```cpp
void print(std::string str, int fg=37, int bg=30, int deco=0);
```
or
```cpp
void println(std::string str, int fg=37, int bg=30, int deco=0);
```
## Available parameters
View colorspp.h for availables colors and styles.

### Examples
```cpp
println("Hello world !", REDFG, BLACKBG, BLINK);
```
outputs "Hello world !" blinking in red.
=======
#C++ librairie to print text in color
------------------------------------
##testMD
