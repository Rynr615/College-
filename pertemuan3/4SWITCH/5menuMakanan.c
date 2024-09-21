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
    int hari;

    printf("Masukkan nama hari berdasarkan kode ini: \n");
    printf("1 untuk Senin\n");
    printf("2 untuk Selasa\n");
    printf("3 untuk Rabu\n");
    printf("4 untuk\n");
    printf("5 untuk Jumat \n");
    printf("Silahkan masukkan kode : ");
    scanf("%d", &hari);

    switch (hari) {
        case 1 : printf("Nasi goreng");
            break;
        case 2 : printf("Mie ayam");
            break;
        case 3 : printf("Soto ayam");
            break;
        case 4 : printf("Nasi padang");
            break;
        case 5 : printf("Sate ayam");
            break;
        default : printf("Masukkan kode dengan benaar");
            break;
    }


}