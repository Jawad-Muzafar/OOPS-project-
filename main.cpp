#include "classes.h"
#include "functions.cpp"
#include <iostream>
#include <string>
#include <vector>//Vector datatype with dynamic size
#include <iomanip>//For formatting output
#include <fstream>//For file input/output
using namespace std;
int main() {
    MyClass obj;
    obj.id = 1; // Assign an integer value to the id member
    obj.name = "John Doe"; // Assign a string value to the name member
    obj.display(); // Call the display function to print the name
    return 0;
}