#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
   int usia;

   printf("Masukkan usia pelanggan : ");
   scanf("%d", &usia);

   if(usia < 12 || usia > 60) {
    printf("Anda mendapatkan diskon");
   } else {
    printf("Anda tidak mendapatkan diskon");
   }
}