#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int baterai;

    printf("Masukkan jumlah baterai ponsel anda : ");
    scanf("%d", &baterai);

    if(baterai>20) {
        printf("Sisa baterai anda %d\nAnda tidak perlu mengisi ulang baterai", baterai);
    }
}