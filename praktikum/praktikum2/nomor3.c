#include <stdio.h>
#include <stdlib.h>

int main() {
    int nasGor, miGor, sate, total;

    printf("Masukkan jumlah pesanan : \n");
    printf("Nasi Goreng ( Rp 25.000 ) : ");
    scanf("%d", &nasGor);
    printf("Mie Goreng ( Rp 20.000 ) : ");
    scanf("%d", &miGor);
    printf("Sate Ayam ( Rp 30.000 ) : ");
    scanf("%d", &sate);

    //perhitungan
    total = (nasGor*25000) + (miGor*20000) + (sate*30000);

    printf("Total yang harus kamu bayar adalah sebesar Rp %d", total);

}