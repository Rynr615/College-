#include <stdio.h>

int main() {
    //Studi Kasus 5: Aplikasi Penghitung Harga Setelah Diskon
    /*Buat program yang menerima harga awal suatu barang dan persentase diskon, lalu 
    menghitung harga akhir setelah diskon.*/

    //dekralasi variable
    int hargaAwal, diskon;
    int hargaAkhir;

    //menampilkan pesan total belanja 
    printf("Total belanja : ");
    // menyimpan input ke variable hargaAwal
    scanf("%d", &hargaAwal);
    //menampilkan besaran diskon
    printf("Masukkan besaran diskon : ");
    //menyimpan input ke variable diskon
    scanf("%d", &diskon);

    // rumus harga akhir setelah diskon
    hargaAkhir = hargaAwal - (hargaAwal * diskon/100);

    //menampikan harga akhir setelah diskon
    printf("Harga Akhir : %d\n", hargaAkhir);


}