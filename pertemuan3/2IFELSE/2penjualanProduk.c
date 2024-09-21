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

    printf("Masukkan banyak belanjaan : ");
    scanf("%d", &jumlahBarang);

    if(jumlahBarang > 3) {
        printf("Jumlah barang belanjaan anda : %d\n", jumlahBarang);
        printf("Anda mendapatkan diskon");
    } else {
        printf("Jumlah barang belanjaan anda : %d\n", jumlahBarang);
        printf("Anda tidak mendapatkan diskon");        
    }
}