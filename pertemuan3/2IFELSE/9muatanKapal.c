#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int muatan;

    printf("Masukkan muatan kapal dalam satuan KG : ");
    scanf("%d", &muatan);
    
    if(muatan > 10000) {
        printf("Berat muatan : %d kg\n", muatan);
        printf("Muatan terlalu berat.");
    } else {
        printf("Berat muatan : %d kg\n", muatan);
        printf("Muatan normal.");
    }
}