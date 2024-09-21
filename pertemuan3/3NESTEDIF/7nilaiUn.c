#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    float nilaiRerata;
    int nilaiMapel1, nilaiMapel2, nilaiMapel3, nilaiMapel4;
    
    printf("Silahkan masukkan nilai Matematika siswa : ");
    scanf("%d", &nilaiMapel1);
    printf("Silahkan masukkan nilai Bhs Inggris siswa : ");
    scanf("%d", &nilaiMapel2);
    printf("Silahkan masukkan nilai Bhs Indonesia siswa : ");
    scanf("%d", &nilaiMapel3);
    printf("Silahkan masukkan nilai IPA siswa : ");
    scanf("%d", &nilaiMapel4);

    nilaiRerata = ( nilaiMapel1 + nilaiMapel2 + nilaiMapel3 + nilaiMapel4 ) / 4;

    if(nilaiRerata > 70) {
        if(((nilaiMapel1 < 50) || (nilaiMapel2 < 50)) || ((nilaiMapel3 < 50) || (nilaiMapel4 < 50))) {
            printf("Terdapat nilai siswa yang kurang dari 50\n");
            printf("Siswa tidak lulus");
        } else {
            printf("Siswa lulus");
        }
    } else {
        printf("Nilai rata-rata siswa tidak memenuhi rata-rata\n");
        printf("Siswa tidak lulus");
    }


}