#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    float rerata, cekAktif;

    printf("Masukkan nilai rata-rata siswa : ");
    scanf("%f", &rerata);

    if(rerata > 85) {
        printf("Apakah siswa aktif dalam organisasi?\n"); 
        printf("Masukkan kode : \n0 Jika tidak aktif, dan \n1 Jika aktif : ");
        scanf("%d", &cekAktif);

        if(cekAktif == 0 ) {
            printf("Siswa hanya mendapatkan sebagian beasiswa");
        } else if(cekAktif == 1) {
            printf("Siswa mendapatkan full beasiswa");
        } else {
            printf("Silahkan masukkan kode dengan benar");
        } 
    } else {
        printf("Siswa tidak memenuhi nilai rata-rata yang diharuskan");
    }

}