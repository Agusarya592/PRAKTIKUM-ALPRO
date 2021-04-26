#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int birth_month(char*bln);
int main(){
    char nama[30];
    char NIM[10];
    char kelas[2];
    char alamat[50];
    char nomorHp[14];
    int tgl, thn;
    char bln[20];
    int current_tgl = 16;
    int current_bln = 2;
    int current_thn = 2021;
    int bln2;

    printf("Data Mahasiswa : \n");
    printf("Nama : ");
    fgets(nama, 30, stdin);
    printf("NIM : ");
    fgets(NIM, 10, stdin);
    printf("Kelas : ");
    fgets(kelas, 2, stdin);
    getchar();
    printf("Alamat : ");
    fgets(alamat, 50, stdin);
    printf("Nomor HP : ");
    fgets(nomorHp, 14, stdin);
    printf("Tanggal Lahir : ");
    scanf("%d %s %d", &tgl, &bln, &thn);



    printf("\n\n\n*********Terimakasih Telah Mendaftar!*********\n\n\n");

    printf("Nama     : %s", nama);
    printf("NIM      :%s", NIM);
    printf("Kelas    :%s\n", kelas);
    printf("Alamat   :%s", alamat);
    printf("Nomor HP : %s", nomorHp);

    printf("Tanggal lahir : %d %s %d", tgl, bln, thn);

    bln2 = birth_month (bln);
    int umur_sementara = current_thn - thn;
    if (current_bln - bln2 < 0)
    {
        umur_sementara = umur_sementara - 1;
    }else if (current_bln - bln2 == 0)
    {
       if (current_tgl - tgl < 0)
       {
           umur_sementara = umur_sementara - 1;
       }

    }

    printf("\nUmur : %d", umur_sementara);
}

int birth_month(char*bln){
    if (!strcmp(bln,"Januari"))
    {
       return 1;
    }else if (!strcmp(bln,"Februari"))
    {
        return 2;
    }else if (!strcmp(bln,"Maret"))
    {
        return 3;
    }else if (!strcmp(bln,"April"))
    {
        return 4;
    }else if (!strcmp(bln,"Mei"))
    {
        return 5;
    }else if (!strcmp(bln,"Juni"))
    {
        return 6;
    }else if (!strcmp(bln,"Juli")){
        return 7;
    }else if (!strcmp(bln,"Agustus"))
    {
        return 8;
    }else if (!strcmp(bln,"September"))
    {
        return 9;
    }else if (!strcmp(bln,"Oktober"))
    {
        return 10;
    }else if (!strcmp(bln,"November"))
    {
        return 11;
    }else if (!strcmp(bln,"Desember"))
    {
        return 12;
    }




}
