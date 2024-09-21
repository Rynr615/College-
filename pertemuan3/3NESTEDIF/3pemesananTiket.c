#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int tanggal, hargaTiket;

    printf("Berapa lama sejak pemesanan tiket? \nMasukkan dalam hitungan hari : ");
    scanf("%d", &tanggal);

    if(tanggal > 30) {
        int cekMember;

        printf("Apakah kamu seorang seorang anggota program loyalitas maskapai ini? \n");
        printf("Silahkan ketik \n0 Jika tidak, dan \n1 Jika iya ");

        scanf("%d", &cekMember);

        if(cekMember == 0) {
            printf("Anda mendapatkan diskon sebesar 10%%");
        } else if (cekMember == 1) {
            printf("Anda mendapatkan diskon sebesar 20%%");
        } else {
            printf("Silahkan masukkan kode dengan benar!");
        }
    }



}