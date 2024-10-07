#include <stdio.h>
#include <stdlib.h>

int main() {
    int nilaiAkhir;

    // nilaiAkhir = 150;

    printf("Silahkan masukkan nilai akhir : ");
    scanf("%d", nilaiAkhir);

    if(nilaiAkhir > 75 && nilaiAkhir <= 100) {
        printf("Lulus\n");
    } else {
        printf("Tidak lulus\n");
    }

    printf("Selesai");
    return 0;
}