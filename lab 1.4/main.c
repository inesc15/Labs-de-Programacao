//
//  main.c
//  lab 1.4
//
//  Created by Ines Costa on 23/02/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c1, c2, c3, n;
    printf("Qual é o primeiro caracter?\n");
    scanf ("%d", &c1);
    printf("Qual é o segundo caracter?\n");
    scanf ("%d", &c2);
    printf("Qual é o terceiro caracter?\n");
    scanf ("%d", &c3);
    n = 100*c1 + 10*c2 +c3;
    printf("O dobro é o número seguinte %d.\n", 2*n);
    return 0;
}
