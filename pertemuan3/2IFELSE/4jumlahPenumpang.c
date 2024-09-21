#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int jumlahPenumpang, jumlahYangAkanNaik, jumlahPenumpangSaatIni;
    jumlahPenumpangSaatIni = 70;

    printf("Jumlah penumpang saat ini : %d\n", jumlahPenumpangSaatIni);
    printf("Masukkan jumlah penumpang: ");
    scanf("%d", &jumlahYangAkanNaik);

    jumlahPenumpang = jumlahPenumpangSaatIni + jumlahYangAkanNaik ; 

    if(jumlahPenumpang >= 100) {
        printf("Tidak ada kursi kosong yang tersedia");
    } else {
        printf("Masih ada kursi kosong yang tersedia");
    }
}