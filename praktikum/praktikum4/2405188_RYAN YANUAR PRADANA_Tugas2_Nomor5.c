#include <stdio.h>
#include <stdlib.h>

int main() {
    int angka1, angka2, hasil, kodeOperasi;
    float hasilBagi;

    printf("Kalkulator sederhana\n");
    printf("Silahkan masukkan operasi berdasarkan kode dibawah\n");
    printf("1. Kali ( * )\n");
    printf("2. Bagi ( / )\n");
    printf("3. Tambah ( + )\n");
    printf("4. Kurang ( - )\n");
    printf("5. Modulus (%%)\n");
    printf("Silahkan pilih operasi : ");
    scanf("%d", &kodeOperasi);


    if(kodeOperasi == 1){
        printf("Masukkan angka pertama : ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua : ");
        scanf("%d", &angka2);

        hasil = angka1 * angka2;
        printf("Hasil dari %d * %d = %d", angka1, angka2, hasil);
    } else if (kodeOperasi == 2) {
        printf("Masukkan angka pertama : ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua : ");
        scanf("%d", &angka2);

        hasilBagi = angka1 / angka2;
        printf("Hasil dari %d / %d = %.2f", angka1, angka2, hasilBagi);
    } else if(kodeOperasi == 3) {
        printf("Masukkan angka pertama : ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua : ");
        scanf("%d", &angka2);

        hasil = angka1 + angka2;
        printf("Hasil dari %d + %d = %d", angka1, angka2, hasil);
    } else if (kodeOperasi == 4) {
        printf("Masukkan angka pertama : ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua : ");
        scanf("%d", &angka2);

        hasil = angka1 - angka2;
        printf("Hasil dari %d - %d = %d", angka1, angka2, hasil);
    } else if (kodeOperasi == 5) {
        printf("Masukkan angka pertama : ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua : ");
        scanf("%d", &angka2);

        hasil = angka1 % angka2;
        printf("Hasil dari %d %% %d = %d", angka1, angka2, hasil);
    } else {
        printf("Masukkan kode yang sesuai!");
    }

}