#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "functii.h"

int main(int argc, char *argv[]) {
    TImagine *imagine;
    imagine = (TImagine *)malloc(sizeof(TImagine));

    imagine->fileName = malloc(20 * sizeof(char));
    strcpy(imagine->fileName, argv[1]);

    readPictureData(imagine);
    printf("width: %d height: %d size: %d\n", imagine->width, imagine->height, imagine->max_size);

    fclose(imagine->input);
    free(imagine->fileName);
    return 0;
}
