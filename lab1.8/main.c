//
//  main.c
//  lab1.8
//
//  Created by Ines Costa on 23/02/2025.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    float d,v,c;
    float ami = 0.0 , amx = 0.0, ap = 0.1, ai = 0.0;
    printf("Digite a distancia d (m): ");
    scanf("%f", &d);
    printf("Digite a velocidade inicial v0 (m/s): ");
    scanf("%f", &v);
    printf("Digite o diâmetro do cesto c (m): ");
    scanf("%f", &c);
    float minimo = d-(c/2);
    float maximo = d+(c/2);
    float radianos, posicao;
    while (ai <= 90.0){
        radianos = ai * 3.1459 /180;
        posicao = (v * v * sin(2*ai)) /9.8;
        if (posicao <= maximo && posicao >= minimo){
            if (ami == 0.0 && amx == 0.0) {
                ami = ai;
            }
            amx = ai;
        }
        ai += ap;
    }
    if (ami != 0.0 || amx != 0.0){
        printf("Os ângulos estão dentro do intervalo aberto de %f a %f graus.",ami, amx);
    }else {
        printf("Nenhum ângulo válido");
    }
    
    return 0;
    
}
