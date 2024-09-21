#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {

    int nilai;

    printf("Masukkan nilai siswa : ");
    scanf("%d", &nilai);

    if(nilai >= 75) {
        printf("Nilai anda adalah : %d \nAnda dinyatakan lulus ujian", nilai);
    }

}