//
//  main.c
//  lab 1.4
//
//  Created by Ines Costa on 23/02/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c1;
    char c2;
    char c3;
    int n;
    printf("Qual é o primeiro caracter?");
    scanf ("%c", &c1);
    
    printf("Qual é o segundo caracter?");
    scanf ("%c", &c2);
 
    printf("Qual é o terceiro caracter?");
    scanf ("%c", &c3);

    n = 100*(c1 -'0') + 10*(c2 -'0') +(c3 - '0');
    printf("O dobro é o número seguinte %d.\n", 2*n);
    return 0;
}
