#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define jumlah 100


void menu(){
    puts(" \n\n    PROGRAM CEK KATA / KALIMAT PALINDROME\n");
    puts("            I Putu Agus Arya Wiguna\n");
    puts("             2008561109 / Kelas E\n\n");
    puts("=================::::::::::::::=================\n\n");
}

void cek_palindrome(char *kata){
    char temp[jumlah] = {'\0'};
    int n, i, j = 0;
    n = strlen(kata);

    for(i = 0; kata[i]; i++){
        kata[i] = tolower(kata[i]);
    }

    for(i = n-1; i >= 0; i--){
        temp[j] = kata[i];
        j++;
    }

    printf("\n\n==> Maka kata / kalimat ini merupakan : ");
    if(strcmp(kata, temp) == 0)
        printf("Palindrom");
    else
        printf("Bukan Palindrom");

}

int main(){
    char string[jumlah] = {'\0'};
    menu();
    printf("==> Masukkan kata / kalimat terlebih dahulu : \n    ");
    gets(string);




cek_palindrome(string);
    getch();
    return 0;
}
