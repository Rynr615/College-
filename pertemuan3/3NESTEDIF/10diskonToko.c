#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 19 September 2024

    */
int main() {
    int cekMember, belanja, hargaDiskon;
    float diskon;

    printf("Masukkan total belanja : ");
    scanf("%d", &belanja);

    if(belanja > 500000) {
        printf("Apakah pelanggan memili member VIP? \n");
        printf("Silahkan masukkan kode berikut : \n");
        printf("0 Jika tidak memiliki member\n1 Jika memiliki member ");
        scanf("%d", &cekMember);
        if(cekMember == 0) {
            diskon = 0.1;
            hargaDiskon = belanja - (belanja*diskon);
            printf("Total yang harus dibayar Rp. %d", hargaDiskon);
        } else if(cekMember == 1) {
            diskon = 0.15;
            hargaDiskon = belanja - (belanja*diskon);
            printf("Total yang harus dibayar Rp. %d", hargaDiskon);
        } else {
            printf("Silahkan masukkan kode dengan benar!!");
        }
    } else {
        printf("Total yang harus dibayar Rp. %d", belanja);
    }


}