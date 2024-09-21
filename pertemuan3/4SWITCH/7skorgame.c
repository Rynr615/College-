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
    int skor;

    printf("Masukkan skor pemain berdasarkan skor di bawah ini: \n");
    printf("1 untuk Pemula\n");
    printf("2 untuk Menengah\n");
    printf("3 untuk Ahli\n");
    printf("Silahkan masukkan skor pemain : ");
    scanf("%d", &skor);

    switch (skor) {
        case 1 : printf("Pemula");
            break;
        case 2 : printf("Menengah");
            break;
        case 3 : printf("Ahli");
            break;
        default : printf("Silahkan masukkan kode dengan benar");
    }


}