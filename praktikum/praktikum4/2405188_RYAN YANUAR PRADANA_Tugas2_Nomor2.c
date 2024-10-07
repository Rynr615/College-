#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    
    berat <= 1kg 3000

    berat > 1 kg && berat <= 10kg 8000

    berat > 10 15000

    */

   float berat;

   printf("Masukkan berat barang dalam kg: ");
   scanf("%f", &berat);

    if(berat <= 1) {
        printf("Berat barang %.2fkg\n", berat);
        printf("Biaya pengiriman anda Rp. 3000");
    } else if(berat > 1 && berat <= 10){
        printf("Berat barang %.2fkg\n", berat);
        printf("Biaya pengiriman anda Rp. 8000");
    } else if(berat > 10){
        printf("Berat barang %.2fkg\n", berat);
        printf("Biaya pengiriman anda Rp. 15000");
    }

}