#include <stdio.h>
#include <stdlib.h>

int main() {
    int biayaParkir, jamParkir, jamMasuk, jamKeluar, jenisKendaraan;

    printf("Silahkan masukkan kode dibawah ini : \n");
    printf("1 untuk Mobil\n2 untuk Motor\n");
    printf("Masukkan berdasarkan kode kendaraan tersebut : ");
    scanf("%d", &jenisKendaraan);


    if(jenisKendaraan == 1){
        printf("Masukkan jam masuk parkir : ");
        scanf("%d", &jamMasuk);
        printf("Masukkan jam keluar parkir : ");
        scanf("%d", &jamKeluar);
        if(jamMasuk>jamKeluar){
            jamParkir = (jamKeluar+12)-jamMasuk;
            biayaParkir = 7000 * jamParkir;
            printf("Total biaya parkir anda : Rp. %d", biayaParkir);
        } else {
            jamParkir = jamKeluar - jamMasuk;
            biayaParkir = 7000 * jamParkir;
            printf("Total biaya parkir anda : Rp. %d", biayaParkir);
        }
    } else if (jenisKendaraan == 2){
        printf("Masukkan jam masuk parkir : ");
        scanf("%d", &jamMasuk);
        printf("Masukkan jam keluar parkir : ");
        scanf("%d", &jamKeluar);
        if(jamMasuk>jamKeluar){
            jamParkir = (jamKeluar+12)-jamMasuk;
            biayaParkir = 5000 * jamParkir;
            printf("Total biaya parkir anda : Rp. %d", biayaParkir);
        } else {
            jamParkir = jamKeluar - jamMasuk;
            biayaParkir = 5000 * jamParkir;
            printf("Total biaya parkir anda : Rp. %d", biayaParkir);
        }
    } else {
        printf("Masukkan kode kendaraan yang sesuai");
    }
    

}