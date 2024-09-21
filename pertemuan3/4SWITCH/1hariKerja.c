#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int hari;

    printf("Silahkan masukkan kode untuk absen dibawah ini\n");
    printf("1 untuk Senin\n");
    printf("2 untuk Selasa\n");
    printf("3 untuk Rabu\n");
    printf("4 untuk Kamis\n");
    printf("5 untuk Jumat\n");
    printf("6 untuk Sabtu\n");
    printf("7 untuk Minggu\n");
    printf("Masukkan kode : ");
    scanf("%d", &hari);

    switch (hari) {
        case 1 : printf("Senin"); 
            break;
        case 2 : printf("Selasa"); 
            break;
        case 3 : printf("Rabu"); 
            break;
        case 4 : printf("Kamis"); 
            break;
        case 5 : printf("Jumat"); 
            break;
        case 6 : printf("Sabtu"); 
            break;
        case 7 : printf("Minggu"); 
            break;
        default: printf("Masukkan kode dengan benar!!");
            break;
    }  
}