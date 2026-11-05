#include <iostream>
#include "classes.h"
#include <string>
#include <vector>//Vector datatype with dynamic size
#include <iomanip>//For formatting output
#include <fstream>//For file input/output
using namespace std;
void MyClass::display() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}