#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    float beratBadan;

    printf("Masukkan berat badan anda dalam satuan KG : ");
    scanf("%f", &beratBadan);

    if(beratBadan > 70) {
        printf("Berat badan anda %.1f kg\nBerat badan anda di atas rata-rata", beratBadan);
    }
}