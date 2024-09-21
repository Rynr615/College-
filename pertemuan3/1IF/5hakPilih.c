#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int umur;

    printf("Silahkan masukkan umur anda : ");
    scanf("%d", &umur);

    if(umur > 18) {
        printf("Umur anda %d\nAnda sudah bisa melakukan pemungutan suara", umur);
    }
}