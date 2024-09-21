#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int nilaiKinerja, lamaKerja;

    printf("Silahkan masukkan nilai kinerja karyawan : ");
    scanf("%d", &nilaiKinerja);

    if(nilaiKinerja > 100) {
        printf("Nilai kinerja karyawan tidak bisa melebihi 100");
    } else if (nilaiKinerja > 80) {
        printf("Silahkan masukkan sudah berapa lama karyawan bekerja dalam satuan tahun : ");
        scanf("%d", &lamaKerja);

        if(lamaKerja > 2) {
            printf("Karyawan mendapatkan bonus penuh");
        } else {
            printf("Karyawan hanya mendapatkan bonus setengah");
        }
    }
}