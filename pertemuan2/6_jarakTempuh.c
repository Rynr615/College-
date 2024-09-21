#include <stdio.h>

int main() {
    //Studi Kasus 6: Aplikasi Penghitung Jarak Tempuh
    /*Buatlah program yang menghitung jarak tempuh berdasarkan kecepatan dan waktu 
tempuh. Program menerima kecepatan (km/jam) dan waktu (jam), kemudian 
menampilkan jarak yang ditempuh.*/

// dekralasi variable
int jarak, kecepatan, waktu;

//menampilkan pesan berapa besaran kecepatan
printf("Masukkan besar kecepatan dalam satuan km : ");

//menginputkan kecepatan
scanf("%d", &kecepatan);

//menampilkan pesan berapa besaran waktu
printf("Masukkan waktu dalam satuan jam : ");

//menginputkan waktu
scanf("%d", &waktu);

//rumus jarak
jarak = kecepatan * waktu;

//menampilkan hasil jarak
printf("Jarak yang ditempuh adalah : %d km", jarak);

return 0;

}