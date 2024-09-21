#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int kecepatan;

    printf("Silahkan masukkan kecepatan kendaraan dalam satuan km: ");
    scanf("%d", &kecepatan);

    if(kecepatan>80) {
        printf("Kecepatan kendaraan anda %d km\nAnda melebihi batas kecepatan maksimal", kecepatan);
    }
}