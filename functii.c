#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functii.h"
#include "structs.h"

void readPictureData(TImagine *imagine) {
    imagine->input = fopen(imagine->fileName, "r");

    unsigned char *type_buffer = malloc(3 * sizeof(char));
    fscanf(imagine->input, "%s", type_buffer);

    fscanf(imagine->input, "%d", &(imagine->width));
    fscanf(imagine->input, "%d", &(imagine->height));
    fscanf(imagine->input, "%d", &(imagine->max_size));

    free(type_buffer);
}

