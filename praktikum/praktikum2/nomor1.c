#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("=====Nomor 1=====\n"); 

    float ukuran_cm, hasil;

    //proses input
    printf("Silahkan masukkan besaran cm yang ingin dikonversi ke inci : ");
    scanf("%f", &ukuran_cm);

    //rumus konversi
    hasil = ukuran_cm * 0.394;

    //tampilkan hasil
    printf("Hasil konversi %.2f cm ke inci adalah %.2f inci", ukuran_cm, hasil);
}