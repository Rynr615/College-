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
    int kodeJurusan;

    printf("Masukkan kode jurusan berdasarkan kode di bawah ini: \n");
    printf("1 untuk IPA\n");
    printf("2 untuk IPS\n");
    printf("3 untuk Bahasa\n");
    printf("Silahkan masukkan kode jurusan : ");
    scanf("%d", &kodeJurusan);

    switch (kodeJurusan) {
        case 1 : printf("IPA");
            break;
        case 2 : printf("IPS");
            break;
        case 3 : printf("Bahasa");
            break;
        default : printf("Silahkan masukkan kode dengan benar");
    }


}