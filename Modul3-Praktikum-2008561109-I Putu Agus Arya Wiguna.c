#include <stdio.h>
#include <stdlib.h>

void menu_data (){
    printf("\t===================::::::::::::===================\n\n");
    printf("\t          PROGRAM PERKALIAN ANTAR MATRIKS\n\n");
    printf("\t===================::::::::::::===================\n\n");
    printf("\tDIBUAT OLEH : \n");
    printf("\t I PUTU AGUS ARYA WIGUNA\n");
    printf("\t NIM 2008561109\n");
    printf("\t KELAS E\n\n");
}

void nilai_matriks (int matriks[][15], int baris, int kolom){
    printf("\n\t==> Masukkan nilai elemen : \n");
    for (int i=0; i<baris; i++){
        for (int j=0; j<kolom; j++){
            printf("\t    Masukkan matriks[%d][%d] : ", i+1, j+1);
            scanf("%d", &matriks[i][j]);
        }
    }
}
void cetak_matriks (int matriks[][15], int baris, int kolom){
    printf("\n\tElemen Matriks yang telah diinput : \n");
    for (int i=0; i<baris; i++){
        for (int j=0; j<kolom; j++){
            printf("\t%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

void perkalian_matriks (int matriks_a[][15], int matriks_b[][15], int hasil[][15],
int baris_a, int kolom_a, int baris_b, int kolom_b){
    for (int i=0; i<baris_a; ++i){
        for (int j=0; j<kolom_b; ++j){
            hasil[i][j] = 0;
        }
    }

    for (int i=0; i<baris_a; i++){
        for (int j=0; j<kolom_b; j++){
            for (int k=0; k<kolom_a; k++){
                hasil[i][j] = hasil[i][j] + (matriks_a[i][k] * matriks_b[k][j]);
            }
        }
    }
}

void hasil_matriks (int hasil[][15], int baris, int kolom){
    printf("\n\tHasil Perkalian Matriksnya yaitu : \n");
    for (int i=0; i<baris; i++){
        for (int j=0; j<kolom; j++){
            printf("\t%d ", hasil[i][j]);
            if (j==kolom-1){
                printf("\n");
            }
        }
    }

}


int main(){
    system("cls");
    int matriks_a[15][15], matriks_b[15][15], baris_a, kolom_a, baris_b, kolom_b, hasil[15][15];
    menu_data();
    printf("\tMasukkan panjang baris dan kolom Matriks A : ");
    scanf("%d x %d", &baris_a, &kolom_a);
    printf("\tMasukkan panjang baris dan kolom Matriks B : ");
    scanf("%d x %d", &baris_b, &kolom_b);

    while (kolom_a!=baris_b){
        printf("\tMaaf, inputan salah! Silahkan coba kembali . . . \n");
        printf("\tMasukkan panjang baris dan kolom Matriks A : ");
        scanf("%d %d", &baris_a, &kolom_a);
        printf("\tMasukkan panjang baris dan kolom Matriks B : ");
        scanf("%d %d", &baris_b, &kolom_b);
    }

    nilai_matriks (matriks_a, baris_a, kolom_a);
    nilai_matriks (matriks_b, baris_b, kolom_b);
    cetak_matriks (matriks_a, baris_a, kolom_a);
    cetak_matriks (matriks_b, baris_b, kolom_b);
    perkalian_matriks (matriks_a, matriks_b, hasil, baris_a, kolom_a, baris_b, kolom_b);
    hasil_matriks (hasil, baris_a, kolom_b);
    return 0;
}
