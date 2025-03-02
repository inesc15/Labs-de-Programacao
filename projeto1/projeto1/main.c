//
//  main.c
//  projeto1
//
//  Created by Ines Costa on 02/03/2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE * fic;
    fic = fopen("portuguese.text", "r");
    char portugues[30][20];
    fgets(portugues[0], 20, fic);
    printf("A primeira casa é %s", portugues[0]);
    return 0;
}
