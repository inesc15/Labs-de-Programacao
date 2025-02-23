//
//  main.c
//  lab1.6
//
//  Created by Ines Costa on 23/02/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mes;
    printf("Qual é o numero do mês?\n");
    scanf("%d", &mes);
    switch (mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mês tem 31 dias.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mês tem 30 dias.\n");
            break;
        case 2:
            printf("O mês tem 28 dias.\n");
            break;
    }
    return 0;
}
