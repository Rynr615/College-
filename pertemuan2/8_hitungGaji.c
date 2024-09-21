#include <stdio.h>

int main() {
    //Studi Kasus 8: Aplikasi Penghitung Gaji Bersih
    /*Buatlah program yang menghitung gaji bersih karyawan setelah dipotong pajak. 
    Program menerima input gaji pokok dan persentase pajak, kemudian menghitung 
    dan menampilkan gaji bersih.*/

    //dekralasi int 
    int gajiPokok, pajak, gajiBersih;

    //menampilkan pesan untuk menginput gaji pokok
    printf("Masukkan gaji pokok : ");
    //membaca input gaji pokok
    scanf("%d", &gajiPokok);

    //menampilkan pesan untuk menginput persentase pajak
    printf("Masukkan persentase pajak : ");
    //membaca input persentase pajak
    scanf("%d", &pajak);

    //rumus gaji bersih
    gajiBersih = gajiPokok - (gajiPokok * pajak/100);
    
    //menampilkan gaji bersih
    printf("Gaji bersih : %d", gajiBersih);
}