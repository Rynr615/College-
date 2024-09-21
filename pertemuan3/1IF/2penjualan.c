#include <stdio.h>
#include <stdlib.h>

/*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */

int main() {
    int jumlahBarang;

    printf("Masukkan jumlah barang yang terjual : ");
    scanf("%d", &jumlahBarang);

    if(jumlahBarang>100) {
        printf("Barang yang terjual sebanyak %d \nTarget penjualan tercapai", jumlahBarang);
    }

    return 0;
}