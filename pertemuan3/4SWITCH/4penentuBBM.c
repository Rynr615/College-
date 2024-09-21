#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 21 September 2024

    */
int main() {
    int jenis;

    printf("Silahkan masukkan kode dibawah ini : \n");
    printf("1 untuk Pertalite\n2 untuk Pertamax\n3 untuk solar\n");
    printf("Masukkan kode : ");

    scanf("%d", &jenis);
    
    switch (jenis) {
        case 1 : printf("Anda mengisi menggunakan Pertalite");
                break;
        case 2 : printf("Anda mengisi menggunakan Pertamax");
                break;
        case 3 : printf("Anda mengisi menggunakan Solar");
                break;
        default : printf("Masukkan kode dengan benar");
                break;
    }
}