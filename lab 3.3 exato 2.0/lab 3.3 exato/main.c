//
//  main.c
//  lab 3.3 exato
//
//  Created by Ines Costa on 01/03/2025.
//

#include <stdio.h>
#include <stdlib.h>
// fazer o histograma
int* ordenacao (int k, int n, float *numeros){
    int* lista = malloc(k * sizeof(int));
    float divisao = 1.0/((float)k);
    for (int i = 0; i<k; i++){
        lista[i] = 0;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            if (((float) ((float)(j+1))*(divisao) - numeros[i]) >= 0){
                lista[j]++;
                break;
            }
        }
    }
    return lista;
}
// imprimir
void imprimir(int *vetor, int k){
    int max = vetor[0];
    for (int i = 1; i < k; i++){
        if (vetor[i] >max){
            max = vetor[i];
        }
    }
    
    for (int i = max; i > 0 ; i--){
        for (int j= 0; j< k; j++){
            if (vetor[j]>=i){
                printf("*     ");
            }else{
                printf("      ");
            }
        }
        printf ("\n");
    }
    for (int i = 0; i < k; i++){
        printf ("%.2f  ",(float) ((float)(i))*(1.0/(float)k));
    }
    printf("\n");
    for (int i = 0; i < k; i++){
        printf ("%.2f  ",(float) ((float)(i+1))*(1.0/(float)k));
    }
    
    
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
    
    imprimir(ordenacao(k, n, numeros), k);
    
    return 0;
}
