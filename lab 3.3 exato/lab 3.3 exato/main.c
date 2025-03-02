//
//  main.c
//  lab 3.3 exato
//
//  Created by Ines Costa on 01/03/2025.
//

#include <stdio.h>
#include <stdlib.h>

float ordenacao (int *lista, int k, int n, float *numeros){
    float divisao = 1/k;
    for (int i = 0; i<k; i++){
        lista[i] = 0;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            if ((float) i*(divisao) - numeros[i] >= 0){
                lista[i]++;
                printf("Adicionei um ao indice %d, a lista nesse indice tem %d e a divisao era %f e o numero era %f", i, lista[i],(float)i*(divisao), (float)numeros[i]);
                break;
            }
        }
        
    }
    return lista[10];
}


int main(int argc, const char * argv[]) {
    int k, n;
    printf("Introduza o k: ");
    scanf("%d", &k);
    printf("Introduza o n: ");
    scanf("%d", &n);
    float numeros[n];
    for (int i = 0; i < n ; i++){
        numeros[i] = (float)(rand())/(float) (RAND_MAX);
    }
    int lista[k];
    ordenacao(lista, k, n, numeros);
    
    for (int i = 0; i < k; i++){
        printf("O numero de indice %d é %d cujo o numero é %f", i, lista[i], (float) i*(1/k));
    }
    
    return 0;
}
