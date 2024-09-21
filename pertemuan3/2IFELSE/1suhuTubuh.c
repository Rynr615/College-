#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int suhuTubuh;

    printf("Silahkan masukkan suhu tubuh anda : ");
    scanf("%d", &suhuTubuh);

    if(suhuTubuh > 37) {
        printf("Suhu tubuh : %d\nAnda demam", suhuTubuh);
    } else {
        printf("Suhu anda : %d\nSuhu tubuh anda normal", suhuTubuh);
    }
}