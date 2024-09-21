#include <stdio.h>
#include <stdlib.h>

/*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */

int main() {
    int usia, penghasilan;

    printf("Masukkan usia anda : ");
    scanf("%d", &usia);

    if(usia > 21) {
        printf("Masukkan penghasilan : ");
        scanf("%d", &penghasilan);
        if(penghasilan > 5000000) {
            printf("Pinjaman anda kami terima");
        } else {
            printf("Pinjaman anda kami tolak");
        }
    } else {
        printf("Usia anda belum memenuhi persyaratan");
    }
}