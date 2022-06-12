/* 
 * Copyright (C) 2022 Simone Anile (simusr2)
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 * 
 * This file is part of ilCi project.
 * 
 * 02.InputOutput/getline.c
 * 
 * gcc -Wall -o getline.out getline.c
 * ./getline.out
 * or
 * echo "1asdasfd" | ./getline.out
 */

// Input/Output
#include <stdio.h>
#include <stdlib.h>
 
// Buffer length
#define MAX_LENGTH 1024

int main (){
    int count, length;

    printf("Enter number of lines: ");
    scanf("%d", &count);
    printf("You entered: %d\n", count);
    fflush(stdin);

    char* lines[count];
    size_t size = 0; // No limits to the size of the buffer

    for(int i = 0; i < count; i++){
        printf("Enter a line: ");
        lines[i] = NULL; // Set to NULL required for getline
        length = getline(&lines[i], &size, stdin);
        lines[i][length - 1] = '\0'; // Replace last newline with strin terminator
        printf("You entered: %s\n", lines[i]);
    }

    return 0;
}
