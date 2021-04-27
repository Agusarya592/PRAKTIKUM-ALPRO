#include <stdio.h>
#include <stdlib.h>

struct data{
    char movie[200];
    float rate;
} x[100];

int main(){
    struct data temp;
    FILE *fptr, *fasc, *fdes;
    int i = 0, size, j, mode;
    char ch;

    puts("======================::::::::::======================\n");
    puts("            PROGRAM SORTING OPERASI FILE\n");
    puts("            I Putu Agus Arya Wiguna / 109\n");
    puts("                     Kelas E\n");
    puts("======================::::::::::======================\n\n");

    puts("1. Urutan Judul Movie Awal :");
    fptr = fopen("movie.txt", "r");
    if (fptr == NULL){
        printf("\n File tidak dapat dibuka\n");
        //dan langsung keluar dari program
        exit(0);
    }
    while (ch != EOF){
        fscanf(fptr, "%s %f", &x[i].movie, &x[i].rate);
        printf("   %s %.1f\n", x[i].movie, x[i].rate);
        ch = fgetc(fptr);
        i++;
    }
    size = i - 1;

    for (i = 1; i < size; ++i)
        for (j = 0; j < size - i; j++)
            if (x[j + 1].rate < x[j].rate)
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }

    fasc = fopen("ascending.txt", "w");
    puts("\n2. Urutan Judul Movie Secara Ascending:");
    for (i = 0; i < size; i++){
        printf("   %s %.1f \n", x[i].movie, x[i].rate);
        fprintf(fasc, "%s %.1f \n", x[i].movie, x[i].rate);
    }

    for (i = 1; i < size; ++i)
        for (j = 0; j < size - i; j++)
            if (x[j + 1].rate > x[j].rate)
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }

    fdes = fopen("descending.txt", "w");
    puts("\n3. Urutan Judul Movie Secara Descending:");
    for (i = 0; i < size; i++){
        printf("   %s %.1f \n", x[i].movie, x[i].rate);
        fprintf(fdes, "%s %.1f \n", x[i].movie, x[i].rate);
    }
    fclose(fptr);
    fclose(fasc);
    fclose(fdes);
    return 0;
}
