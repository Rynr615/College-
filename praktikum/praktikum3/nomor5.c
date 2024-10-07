#include <stdio.h>
#include <stdlib.h>

int main() {
    int kodeHari;

    printf("Daftar kode hari : \n");
    printf("1 untuk Senin\n");
    printf("2 untuk Selasa\n");
    printf("3 untuk Rabu\n");
    printf("4 untuk Kamis\n");
    printf("5 untuk Jumat\n");
    printf("6 untuk Sabtu\n");
    printf("7 untuk Minggu\n");
    printf("Silahkan masukkan kode : ");
    scanf("%d", &kodeHari);

    switch(kodeHari) {
        case 1 : printf("Hari Senin");break;
        case 2 : printf("Hari Selasa");break;
        case 3 : printf("Hari Rabu");break;
        case 4 : printf("Hari Kamis");break;
        case 5 : printf("Hari Jumat");break;
        case 6 : printf("Hari Sabtu");break;
        case 7 : printf("Hari Minggu");break;
        default : printf("Masukkan kode dengan benar");break;
    }
}