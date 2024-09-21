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
    int kodeKendaraan;

    printf("Masukkan kode kendaraan berdasarkan kode di bawah ini: \n");
    printf("1 untuk Bus\n");
    printf("2 untuk Kereta\n");
    printf("3 untuk Taksi\n");
    printf("Silahkan masukkan kode kendaraan : ");
    scanf("%d", &kodeKendaraan);

    switch (kodeKendaraan) {
        case 1 : printf("Anda memilih Bus");
            break;
        case 2 : printf("Anda memilih Kereta");
            break;
        case 3 : printf("Anda memilih Taksi");
            break;
        default : printf("Silahkan masukkan kode dengan benar");
    }


}