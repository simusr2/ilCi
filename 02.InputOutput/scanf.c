/* 
 * Copyright (C) 2022 Simone Anile (simusr2)
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 * 
 * This file is part of ilCi project.
 * 
 * 02.InputOutput/scanf.c
 * 
 * gcc -Wall -o scanf.out scanf.c
 * ./scanf.out
 * or
 * echo "2" | ./scanf.out
 * (Replace 2 with any number)
 */

// Input/Output
#include <stdio.h>

int main (){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("You entered: %d\n", a);
    return 0;
}
