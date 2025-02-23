//
//  main.c
//  lab1programacao1
//
//  Created by Ines Costa on 21/02/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int s;
    scanf("%d", &s);
    int horas, minutos, segundos;
    horas = s/3600;
    minutos = (s-horas*3600)/60;
    segundos = s - horas*3600 - minutos *60;
    printf("Horas: %d, Minutos: %d, Segundos: %d", horas, minutos, segundos);
    return 0;
}
