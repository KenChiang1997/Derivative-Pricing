#include <iostream>
#include "includes/calculations.h"

/**


In Terminal: g++ -o main.exe g++ -o main.exe main.cpp inc/calculations.cpp

Using ./ before the executable name tells the system to execute the program in the current directory.

So in this example we probably will use: ./main.exe
 * 
 */

int main(){

    std::cout << add(10, 20) << std::endl;

    return 0;
}
