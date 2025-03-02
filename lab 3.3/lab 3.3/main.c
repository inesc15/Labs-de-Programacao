//
//  main.c
//  lab 3.3
//
//  Created by Ines Costa on 01/03/2025.
//

#include <stdio.h>

void FlagMultipleNumbers(int n[1001], int primo, int limite ){
    for (int i = primo * primo; i <= limite; i += primo){
        n[i] = 0;
    }
}

void SieveOfEratosthenes (int limite){
    int numero[1001];
    for (int i = 0; i <= limite; i++){
        numero[i] = 1;
    }
    numero[0] = numero[1] = 0;
    for (int i =2; i*i <= limite; ++i){
        if (numero[i] == 1){
            FlagMultipleNumbers (numero, i, limite);
        }
    }
    for (int i = 2; i <= limite; i++){
        if (numero[i] == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main(int argc, const char * argv[]) {
    int lim;
    printf("Qual é o número limite? \n");
    scanf("%d", &lim);
    SieveOfEratosthenes(lim); 
    return 0;
}
