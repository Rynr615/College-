#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    float jamKerja;

    printf("Silahkan masukkan berapa lama anda bekerja dalam satuan jam : ");
    scanf("%f", &jamKerja);

    if(jamKerja>8) {
        printf("Anda bekerja selama %.1f jam\nAnda kerja lembur", jamKerja);
    }
}