#include <stdio.h>

int main() {
    //Studi Kasus 9: Aplikasi Penghitung Waktu Tempuh
    /*Buat program sederhana untuk menghitung waktu tempuh berdasarkan jarak dan 
    kecepatan. Program menerima input jarak (km) dan kecepatan (km/jam), lalu 
    menampilkan waktu tempuh dalam jam.*/

    // dekralasi variable 
    int jarak, kecepatan, waktu;

    //menampilkan jarak yang ingin di hitung
    printf("Masukkan jarak dalam satuan km : ");

    //input ke variable jarak
    scanf("%d", &jarak);

    //menampilkan kecepatan yang ingin di hitung
    printf("Masukkan kecepatan dalam satuan km : ");

    //input ke variable kecepatan
    scanf("%d", &kecepatan);

    //hitung waktu tempuh
    waktu = jarak / kecepatan;

    //menampilkan waktu tempuh
    printf("Waktu tempuh : %d jam\n", waktu);
}