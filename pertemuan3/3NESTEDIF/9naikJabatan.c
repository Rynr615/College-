#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int kinerja, kehadiran;

    printf("Silahkan masukkan nilai kinerja tahunan karyawan : ");
    scanf("%d", &kinerja);

    if(kinerja > 90) {
        printf("Berapa persen kehadiran karyawan : ");
        scanf("%d", &kehadiran);
        if(kehadiran > 95) {
            printf("Karyawan mendapatkan promosi");
        } else {
            printf("Karyawan tidak mendapatkan promosi");
        }
    } else {
            printf("Karyawan tidak mendapatkan promosi");
    }
}