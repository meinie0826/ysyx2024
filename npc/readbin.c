#include <stdio.h>
#include <stdlib.h>

unsigned int  *img;

int main() {
    FILE *file;
    long fileSize;

    file = fopen("/home/meinie/Desktop/ysyx2024/npc/dummy-riscv32e-npc.bin", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    rewind(file);

    img = (int*) malloc(fileSize * sizeof(int));
    if (img == NULL) {
        perror("Memory allocation failed");
        fclose(file);
        return 1;
    }

    if (fread(img, 1, fileSize, file) != fileSize) {
        perror("Error reading file");
        free(img);
        fclose(file);
        return 1;
    }

    for (int i = 0; i < 20 && i < fileSize; ++i) {
        printf("Byte %d: %08x\n", i, img[i]);
    }

    free(img);
    fclose(file);

    return 0;
}