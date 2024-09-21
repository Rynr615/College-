#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int waktu, amoebaAwal, amoebaAkhir;

    printf("Masukkan jumlah awal amoeba : ");
    scanf("%d", &amoebaAwal);
    printf("Masukkan waktu dalam menit : ");
    scanf("%d", &waktu);

    waktu = waktu/15;
    amoebaAkhir = amoebaAwal * pow(2, waktu);
    printf("Jumlah amoeba akhir sebanyak %d", amoebaAkhir);
}