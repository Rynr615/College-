#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int nilaiMatkul1, nilaiMatkul2;

    printf("Masukkan nilai mata kuliah pertama : ");
    scanf("%d", &nilaiMatkul1);
    printf("Masukkan nilai mata kuliah kedua : ");
    scanf("%d", &nilaiMatkul2);

    // if(!((nilaiMatkul1 > 70) && (nilaiMatkul2 > 70))) {
    //     printf("Anda tidak lulus");
    // } else {
    //     printf("Anda lulus");
    // }

    if(nilaiMatkul1>70) {
        if(nilaiMatkul2>70) {
            printf("Anda lulus");
        } else {
            printf("Anda tidak lulus");
        }
    } else {
        printf("Anda tidak lulus");
    }
}