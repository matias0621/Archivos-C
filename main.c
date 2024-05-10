#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* buf;
    int a = 10;
    int aux;

    printf("Archivo sin crear, debo crealo\n");
    buf = fopen("Archivito", "ab");
    printf("Cree y abri el archivo\n");

    if (buf){
        fwrite(&a, sizeof(int), 1, buf);
        fclose(buf);
    }
    else{
        printf("El archivo no pudo ser abierto");
    }

    buf = fopen("Archivito", "rb");

    if (buf){
        fread(&aux, sizeof(int), 1, buf);
        printf("%d", aux);
        fclose(buf);
    }
    else{
        printf("El archivo no pudo ser abierto");
    }

    return 0;
}
