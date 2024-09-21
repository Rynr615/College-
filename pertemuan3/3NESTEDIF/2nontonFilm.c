#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int usia, confirm;

    printf("Masukkan usia anda : ");
    scanf("%d", &usia);

    if(usia>17) {
        printf("Apakah kamu membawa kartu identitas?\nSilahkan ketik\n0 untuk tidak, dan\n1 untuk iya\n");
        scanf("%d", &confirm);

        if(confirm == 1) {
            printf("Anda dipersilahkan masuk");
        } else if(confirm == 0){
            printf("Anda tidak diperbolehkan masuk");
        } else {
            printf("Silahkan masukkan kode dengan benar");
        }
    } else {
        printf("Anda tidak dimemenuhi standar usia");
    }
}