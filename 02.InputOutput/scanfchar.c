/* 
 * Copyright (C) 2022 Simone Anile (simusr2)
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 * 
 * This file is part of ilCi project.
 * 
 * 02.InputOutput/scanfchar.c
 * 
 * gcc -Wall -o scanfchar.out scanfchar.c
 * ./scanfchar.out
 * or
 * echo "86a" | ./scanfchar.out
 */

// Input/Output
#include <stdio.h>

int main (){
    char a, b;
    int c;

    printf("Enter a number: ");
    scanf("%d", (int*)&a); // %d is for int, %c is for char 
    // int can be stored in char
    printf("You entered: %d (char value: %c)\n", a, a);
    c = (int) a;
    printf("With int var %d\n", c);
    printf("Enter a character: ");
    scanf("%c", &b); // Char value
    printf("You entered: %c\n", b);
    
    return 0;
}
