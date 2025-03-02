//
//  main.c
//  lab 3.1
//
//  Created by Ines Costa on 27/02/2025.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int min = 1, max = 9;
    int nrand1, nrand2;
    int resposta;
    nrand1 = rand();
    nrand1 = (nrand1 % (max-min +1)+ min);
    nrand2 = rand();
    nrand2 = (nrand2 % (max-min +1)+ min);
    printf("Qual é a multiplicação de %d com %d?\n", nrand1, nrand2);
    scanf("%d", &resposta);
    if (resposta == nrand1*nrand2){
        printf("Acertas-te! Muito bem!\n");
    }else{
        printf("Enganaste-te tenta outra vez!\n");
    }
    while (resposta != 0){
        nrand1 = rand();
        nrand1 = (nrand1 % (max-min +1)+ min);
        nrand2 = rand();
        nrand2 = (nrand2 % (max-min +1)+ min);
        printf("Qual é a multiplicação de %d com %d?\n", nrand1, nrand2);
        scanf("%d", &resposta);
        if (resposta == nrand1*nrand2){
            printf("Acertas-te! Muito bem!\n");
        }else if (resposta == nrand1*nrand2 && resposta != 0){
            printf("Enganaste-te tenta outra vez!\n");
        }
    }
    printf("Acabou!\n");
    return 0;
}
