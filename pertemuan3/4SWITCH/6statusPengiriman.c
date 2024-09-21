#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 21 September 2024

    */
int main() {
    int kode;

    printf("Masukkan kode pengiriman berdasarkan kode di bawah ini: \n");
    printf("1 untuk Dalam Pengiriman\n");
    printf("2 untuk Untuk tiba di tujuan\n");
    printf("3 untuk Sedang dikirim\n");
    printf("Silahkan masukkan kode pengiriman : ");
    scanf("%d", &kode);

    switch (kode) {
        case 1 : printf("Dalam pengiriman");
            break;
        case 2 : printf("Tiba di tujuan");
            break;
        case 3 : printf("Sedang dikirim");
            break;
        default : printf("Silahkan masukkan kode dengan benar");
    }


}