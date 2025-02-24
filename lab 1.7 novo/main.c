//
//  main.c
//  lab 1.7
//
//  Created by Ines Costa on 21/02/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float numero;
    int parte;
    float inteiro;
    float final = 0.0;
    float final2;
    printf("Qual número queres arredondar?\n");
    scanf("%f", &numero);
    printf("Com quantas casa decimais?\n");
    int decimal;
    scanf("%d", &decimal);
    int m = 1;
    if (decimal > 0){
        for (int i = 0; i < decimal; i++){
            m *= 10;
        }
        parte = (numero * m);
        inteiro = numero * m - parte;
    }else{
        parte = (int) numero;
        inteiro = numero - parte;
    }
    
    if (inteiro >= 0.5){
        parte ++;
    }
    final = parte;
    final2 = final/m;
    printf("Numero arredondado: %.6f \n", final2);
    return 0;
}
