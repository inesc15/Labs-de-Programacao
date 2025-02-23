//
//  main.c
//  lab1.5
//
//  Created by Ines Costa on 21/02/2025.
//

#include <stdio.h>
#define RADIO 3e9
#define MICRO 3e12
#define INFRA 4.3e14
#define VISI 7.5e14
#define ULTRAV 3e17
#define XRAY 3e19

int main(int argc, const char * argv[]) {
    float freq = 0;
    printf ("Indique a frequencia: "); 
    scanf ("%30E", &freq);
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
