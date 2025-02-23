//
//  main.c
//  lab1.3
//
//  Created by Ines Costa on 21/02/2025.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int angulo = 0, velocidade = 0, altura = 0;
    scanf("%d",&angulo);
    scanf("%d",&velocidade);
    scanf("%d",&altura);
    float radianos = (angulo*3.14159)/180;
    float d = (velocidade*velocidade*sin(radianos*2))/9.8;
    printf ("A distancia do cesto é %f\n", d);
    float h =(velocidade*velocidade*sin(radianos))/(2*9.8);
    if (h <= altura){
        printf("Não bate no teto.");
    }else {
        printf("Bate no teto.");
    }
    return 0;
}
