#include <iostream>
#include <stdio.h>
#include <dummy.hpp>
using namespace std;

dummy::dummy(){
    std::cout << "inside constructor ##2\n";
    std::cout << "adding new line saturday 2300";
    }

void dummy::hello_dummy(){
    std::cout << "inside hello_dummy\n";
    }

