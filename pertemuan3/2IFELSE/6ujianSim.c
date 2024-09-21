#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int nilaiUjian;

    printf("Masukkan nilai ujian SIM : ");
    scanf("%d", &nilaiUjian);

    if(!(nilaiUjian >= 70)) {
        printf("Nilai ujian SIM anda : %d\n", nilaiUjian);
        printf("Anda tidak lulus ujian SIM");
    } else {
        printf("Nilai ujian SIM anda : %d\n", nilaiUjian);
        printf("Anda lulus ujian SIM");
    }
}