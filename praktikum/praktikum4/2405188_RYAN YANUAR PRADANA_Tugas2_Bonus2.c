#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int kodeBarang;
    char kodeKategori;

    printf("Masukkan kode kategori barang : \n");
    printf("A untuk Elektronik\nB untuk Pakaian\nC untuk Makanan\n");
    printf("Silahkan masukkan kode : ");
    scanf("%c", &kodeKategori);
     
    kodeKategori = toupper(kodeKategori);

    switch(kodeKategori){
        case 'A' : 
            printf("Masukkan kode jenis barang : \n");
            printf("1 untuk Laptop\n");
            printf("2 untuk Smartphone\n");
            printf("3 untuk TV\n");
            printf("Silahkan masukkan kode : ");
            scanf("%d", &kodeBarang);
            switch(kodeBarang) {
                case 1 : printf("Kategori : Elektronik\nBarang : Laptop");
                    break;
                case 2 : printf("Kategori : Elektronik\nBarang : Smartphone");
                    break;
                case 3 : printf("Kategori : Eletronik\nBarang : TV");
                    break;
                default: printf("Masukkan kode dengan benar!!");
            }
            break;
        case 'B' : 
            printf("Masukkan kode jenis barang : \n");
            printf("1 untuk Kemeja\n");
            printf("2 untuk Celana\n");
            printf("3 untuk Jaket\n");
            printf("Silahkan masukkan kode : ");
            scanf("%d", &kodeBarang);
            switch(kodeBarang) {
                case 1 : printf("Kategori : Pakaian\nBarang : Kemeja");
                    break;
                case 2 : printf("Kategori : Pakaian\nBarang : Celana");
                    break;
                case 3 : printf("Kategori : Pakaian\nBarang : Jaket");
                    break;
                default: printf("Masukkan kode dengan benar!!");
            }
            break;
        case 'C' : 
            printf("Masukkan kode jenis barang : \n");
            printf("1 untuk Roti\n");
            printf("2 untuk Susu\n");
            printf("3 untuk Buah\n");
            printf("Silahkan masukkan kode : ");
            scanf("%d", &kodeBarang);
            switch(kodeBarang) {
                case 1 : printf("Kategori : Makanan\nBarang : Roti");
                    break;
                case 2 : printf("Kategori : Makanan\nBarang : Susu");
                    break;
                case 3 : printf("Kategori : Makanan\nBarang : Buah");
                    break;
                default: printf("Masukkan kode dengan benar!!");
            }
            break;
        default: printf("Masukkan kode dengan benar");
            break;
    }

    
}