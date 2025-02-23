//
//  main.c
//  lab1.5
//
//  Created by Ines Costa on 21/02/2025.
//

#include <stdio.h>
#define RADIO 3E+9
#define MICRO 3E+12
#define INFRA 4.3E+14
#define VISI 7.5E+14
#define ULTRAV 3E+17
#define XRAY 3E+19

int main(int argc, const char * argv[]) {
    long long int freq = 0;
    scanf ("%lld", &freq);
    if (freq >= XRAY){
        printf("A frequência pertence à classe de Gamma rays.\n");
    }else if (freq <= XRAY && freq >= ULTRAV){
        printf("A frequência pertence à classe de X-rays.\n");
    }else if (freq <= ULTRAV && freq >= VISI){
        printf("A frequência pertence à classe de Ultraviolet light.\n");
    }else if (freq <= VISI && freq >= INFRA){
        printf("A frequência pertence à classe da luz vísivel.\n");
    }else if (freq <= INFRA && freq >= MICRO){
        printf("A frequência pertence à classe de Infrared light.\n");
    }else if (freq <= MICRO && freq >= RADIO){
        printf("A frequência pertence à classe de microwaves.\n");
    }else{
        printf("A frequência pertence à classe de radio waves.\n");
    }
    
    return 0;
}
