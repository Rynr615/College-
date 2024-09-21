#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int penghasilan, cekRumah;

    printf("===== Selamat Datang di Layanan Pembelian Rumah =====\n");

    printf("Silahkan masukkan penghasilan anda per bulan : ");
    scanf("%d", &penghasilan);

    if(penghasilan < 10000000) {
        printf("Apakah kamu sudah memiliki rumah?\n");
        printf("Silahkan masukkan angka berikut\n0 Jika sudah memiliki rumah\n1 Jika belum memiliki rumah ");
        scanf("%d", &cekRumah);
        
        if(cekRumah == 1) {
            printf("Anda memenuhi syarat untuk mendapatkan bantuan");
        } else if(cekRumah == 0) {
            printf("Anda tidak memenuhi syarat untuk mendapatkan bantuan");
        } else {
            printf("Silahkan masukkan kode dengan benar!");
        }
    } else {
        printf("Bantuan hanya diberikan jika penghasilan anda kurang dari Rp 10.000.000");
    }
}