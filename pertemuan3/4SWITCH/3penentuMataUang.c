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

    printf("Masukkan salah satu kode mata uang dibawah ini : \n");
    printf("1 untuk USD\n");
    printf("2 untuk EUR\n");
    printf("3 untuk JPY\n");
    printf("Masukkan kode mata uang : ");
    scanf("%d", &hari);

    switch (hari) {
    case 1 : printf("USD = United States Dollar");
        break;
    case 2 : printf("EUR = Euro");
        break;
    case 3 : printf("JPY = Japanese Yen");
        break;
    
    default: printf("Masukkan kode dengan benar");
        break;
    }
}