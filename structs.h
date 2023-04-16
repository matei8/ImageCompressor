#include <stdio.h>
#ifndef TEMA2_STRUCTS_H
#define TEMA2_STRUCTS_H

typedef struct {
    FILE *input;
    char *fileName;
    int width;
    int height;
    int max_size;
} TImagine;

typedef struct patrat {
    unsigned char red, green, blue;
    int size;
} TPatrat;

typedef struct nod {
    int nivel;
    TPatrat info;
    unsigned char tip;
    struct nod *n1, *n2, *n3, *n4;
} TNod, *TArb;

#endif //TEMA2_STRUCTS_H
