#include <dummy.hpp>
#include <stdio.h>

int main() {
    dummy * dummy_inst;
    dummy_inst = new dummy[5];
    dummy_inst[3].hello_dummy();
    printf("Out of Prog\n");
    return 0;
}
//adding comments////
