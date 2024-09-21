#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 21 September 2024

    */
int main() {
    int kodeRating;

    printf("===== Hotel Sigma Skibid Rizz Ohio +9999 Aura =====\n");
    printf("Masukkan kode dibawah untuk memberikan rating : \n");
    printf("1 untuk Bintang 1\n");
    printf("2 untuk Bintang 3\n");
    printf("3 untuk Bintang 5\n");
    printf("Silahkan masukkan kode rating : ");
    scanf("%d", &kodeRating);

    switch (kodeRating) {
        case 1 : 
            printf("Anda memberikan 1 bintang\n");
            printf("Pesan atmin : -9999 aura \n");
            break;
        case 2 : 
            printf("Anda memberikan 3 bintang\n");
            printf("Anda kurang sigma\n");
            break;
        case 3 : 
            printf("Anda memberikan 5 bintang\n");
            printf("Terima kasih tuan, jangan lupa mewing selalu");
            break;
        default : printf("Silahkan masukkan kode dengan benar");
    }


}