//
//  main.c
//  lab1.2
//
//  Created by Ines Costa on 23/02/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int horas1, minutos1, segundos1, horas2, minutos2, segundos2, dh, dm, ds, diferenca;
    printf("Quais são as horas do 1º tempo?\n");
    scanf ("%d", &horas1);
    printf("Quais são os minutos do 1º tempo?\n");
    scanf ("%d", &minutos1);
    printf("Quais são os segundos do 1º tempo ?\n");
    scanf ("%d", &segundos1);
    printf("Quais são as horas do 2º tempo?\n");
    scanf ("%d", &horas2);
    printf("Quais são os minutos do 2º tempo?\n");
    scanf ("%d", &minutos2);
    printf("Quais são os segundos do 2º tempo ?\n");
    scanf ("%d", &segundos2);
    diferenca = horas1*3600 + minutos1*60 + segundos1 - ( horas2*3600 + minutos2*60 + segundos2);
    dh = diferenca/3600;
    dm = (diferenca - dh*3600)/60;
    ds = diferenca -dh*3600 -dm*60;
    printf("A diferença é de %d horas, %d minutos, %d segundos.", dh, dm, ds);
    return 0;
}
