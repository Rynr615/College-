#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int nilaiSiswa;

    printf("Masukkan nilai siswa: ");
    scanf("%d", &nilaiSiswa);

    if(!(nilaiSiswa >= 75)) {
        printf("Nilai siswa : %d\nw", nilaiSiswa);
        printf("Siswa tidak lulus");
    } else {
        printf("Nilai siswa : %d\n", nilaiSiswa);
        printf("Siswa lulus");
    }
}