#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int rating;

    printf("Masukkan skor pemain : ");
    scanf("%d", &rating);

    if(!(rating >= 100)) {
        printf("Player mendapatkan skor : %d\n", rating);
        printf("Silahkan coba lagi!!!");
    } else {
        printf("Player mendapatkan skor : %d\n", rating);
        printf("Selamat!!!");
    }
}