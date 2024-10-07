#include <stdio.h>
#include <stdlib.h>

int main() {
    int penumpangLk, penumpangPr, mobil, jumlahPenumpang;

    printf("Masukkan jumlah penumpang Laki-laki: ");
    scanf("%d", &penumpangLk);
    // printf("Masukkan jumlah penumpang Perempuan: ");
    // scanf("%d", &penumpangPr);

    // jumlahPenumpang = penumpangLk + penumpangPr; 

    // if(penumpangLk > penumpangPr) {
    //     if(jumlahPenumpang % 12 == 0) {
    //         mobil = jumlahPenumpang/12;
    //         printf("Jumlah Penumpang Laki-laki : %d\n", penumpangLk);
    //         printf("Jumlah Penumpang Perempuan : %d\n", penumpangPr);
    //         printf("Jumlah bus yang digunakan : %d\n", mobil);
    //     } else {
    //         mobil = (jumlahPenumpang / 12) + 1;
    //         printf("Jumlah Penumpang Laki-laki : %d\n", penumpangLk);
    //         printf("Jumlah Penumpang Perempuan : %d\n", penumpangPr);
    //         printf("Jumlah bus yang digunakan : %d\n", mobil);
    //     }
    // } else {
    //     if(jumlahPenumpang % 8 == 0) {
    //         mobil = jumlahPenumpang / 8;
    //         printf("Jumlah Penumpang Laki-laki : %d\n", penumpangLk);
    //         printf("Jumlah Penumpang Perempuan : %d\n", penumpangPr);
    //         printf("Jumlah angkot yang digunakan : %d\n", mobil);
    //     } else {
    //         mobil = (jumlahPenumpang / 8) + 1;
    //         printf("Jumlah Penumpang Laki-laki : %d\n", penumpangLk);
    //         printf("Jumlah Penumpang Perempuan : %d\n", penumpangPr);
    //         printf("Jumlah angkot yang digunakan : %d\n", mobil);
    //     }
    // }

    // if(penumpang % 7 == 1) {
    //     mobil += (penumpang/7) + 1;
    //     printf("Jumlah penumpang : %d\n", penumpang);
    //     printf("Jumlah mobil : %d", mobil);
    // } else if (penumpang % 7 == 0){
    //     mobil += (penumpang/7);
    //     printf("Jumlah penumpang : %d\n", penumpang);
    //     printf("Jumlah mobil : %d", mobil);
    // }



    printf("Jumlah penumpang : %d\n", penumpangLk);
    int i;
    for (i = penumpangLk; i >= 7; i-=7) {
        mobil ++;
    } 
    if(i > 0 && i <= 7) {
        mobil ++;
    }
    printf("Jumlah mobil : %d", mobil);
    
}