#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int penumpang;

    printf("Masukkan jumlah penumpang : ");
    scanf("%d", &penumpang);

    if(penumpang > 50) {
        printf("Jumlah penumpang : %d \nBus sudah penuh", penumpang);
    }
}