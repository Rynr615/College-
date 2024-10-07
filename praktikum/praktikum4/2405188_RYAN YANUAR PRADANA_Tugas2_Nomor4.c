#include <stdio.h>
#include <stdlib.h>

int main() {
    float angka1, angka2, hasil;

    char operasi;

    printf("Masukkan angka pertama : ");
    scanf("%f", &angka1);
    printf("Masukkan operasi ( *, /, +, - ) : ");
    scanf(" %c", &operasi);
    printf("Masukkan angka kedua : ");
    scanf("%f", &angka2);

    if(operasi == '*'){
        hasil = angka1 * angka2;
        printf("Hasil dari %.2f * %.2f = %.2f", angka1, angka2, hasil);
    }  else if(operasi == '/') {
        hasil = angka1 / angka2;
        printf("Hasil dari %.2f / %.2f = %.2f", angka1, angka2, hasil);
    } else if(operasi == '+') {
        hasil = angka1 + angka2;
        printf("Hasil dari %.2f + %.2f = %.2f", angka1, angka2, hasil);
    } else if(operasi == '-'){
        hasil = angka1 - angka2;
        printf("Hasil dari %.2f - %.2f = %.2f", angka1, angka2, hasil);
    } else {
        printf("Masukkan operator yang sesuai!");
    }

return 0;
}