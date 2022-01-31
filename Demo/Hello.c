//
// Created by user on 2021/11/30.
//

//#include <printf.h>
#include <stdio.h>
#include "Hello.h"

int main() {
    printf("hello world ! \n");

    char a = 'A';
    char* b = &a;
    char c = *b;

    int d = 100;
    int* e=&d;
    int f=*e;

    printf("Hello, YY!");
    return 1;
}

