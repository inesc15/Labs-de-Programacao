//
//  main.c
//  lab 1.7
//
//  Created by Ines Costa on 21/02/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float numero;
    printf("Qual número queres arredondar?\n");
    scanf("%f", &numero);
    printf("Com quantas casa decimais?\n");
    int decimal;
    scanf("%d", &decimal);
    int m = 1;
    for (int i = 0; i < decimal; i++){
        m *= 10;
    }
    numero = (int) (numero * m + 0.5);
    numero = numero / m;
    printf("Numero arredondado: %.7f \n", numero);
    return 0;
}
