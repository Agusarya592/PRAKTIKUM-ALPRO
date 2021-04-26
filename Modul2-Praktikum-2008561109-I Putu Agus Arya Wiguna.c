#include<stdio.h>
#include <stdlib.h>

void menu(){
    printf("::::::========= PRAKTIKUM ALGORITMA DAN PEMROGRAMAN =========::::::\n");
    printf("               'Tugas Pengecekan Bilangan Palindrome'\n");
    printf("    \nOleh : \n\n");
    printf("    I Putu Agus Arya Wiguna\n");
    printf("    NIM 2008561109\n");
    printf("    Kelas E\n\n");
    printf("Tekan ENTER untuk menuju pada menu berikutnya...\n");
    fflush(stdin);
    getchar();
}
int main(){
    int x,y, jumlah=0, bil;
    menu();
    printf("\n::::::::::::===========================================::::::::::::");
    printf("\n||            PROGRAM PENGECEKAN BILANGAN PALINDROME             ||");
    printf("\n::::::::::::===========================================::::::::::::");
    printf("\n\n    Inputkan bilangan = ");
    scanf("%d", &x);
    bil=x;
    while (x>0){
        y=x %10;
        jumlah=(jumlah*10)+y;
        x=x/10;
    }
    if(bil==jumlah)
        printf("::==> Ini adalah bilangan Palindrome\n");
    else
        printf("::==> Ini bukan bilangan Palindrome");
    return 0;
}
