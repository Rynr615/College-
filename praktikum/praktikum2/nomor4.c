#include <stdio.h>
#include <stdlib.h>

int main() {
    int hargaSepatu, totalSepatu, totalHarga, totalDiskon, hargaAkhir, diskon;

    hargaSepatu = 98000;

    printf("Masukkan jumlah sepatu yang dibeli : ");
    scanf("%d", &totalSepatu);

    totalHarga = totalSepatu * hargaSepatu;
    diskon = totalSepatu*10;

    totalDiskon = totalHarga * diskon / 100;
    printf("Total belanja anda sebesar : Rp %d\n", totalHarga);
    printf("Total diskon yang anda terima sebesar : %d\n", totalDiskon);

    hargaAkhir = totalHarga - totalDiskon;
    printf("Total yang harus anda bayar setelah diskon : Rp %d", hargaAkhir);

}