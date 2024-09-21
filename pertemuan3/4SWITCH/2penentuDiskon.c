#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int hari;

    printf("Masukkan salah satu kode hari dibawah ini : \n");
    printf("1 untuk Senin\n");
    printf("2 untuk Selasa\n");
    printf("3 untuk Rabu\n");
    printf("Masukkan kode hari : ");
    scanf("%d", &hari);

    switch (hari) {
    case 1 : printf("Anda mendapatkan diskon sebesar 10%%");
        break;
    case 2 : printf("Anda mendapatkan diskon sebesar 15%%");
        break;
    case 3 : printf("Anda mendapatkan diskon sebesar 20%%");
        break;
    
    default: printf("Masukkan kode dengan benar");
        break;
    }
}