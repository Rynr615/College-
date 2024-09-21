#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    float kecepatan;

    printf("Masukkan kecepata internet anda : ");
    scanf("%f", &kecepatan);

    if(!(kecepatan > 10)) {
        printf("Kecepatan internet anda %.1fMbps\n", kecepatan);
        printf("Kecepatan internet lambat");
    } else {
        printf("Kecepatan internet anda %.1fMbps\n", kecepatan);
        printf("Kecepatan internet cukup cepat");
    }
}