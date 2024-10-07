#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char huruf1, huruf2, huruf3;

    printf("Masukkan huruf : ");
    scanf("%c %c %c", &huruf1, &huruf2, &huruf3);

    // mengubah kapital menjadi non kapital ( uppercase to lowercase )
    char huruf1Lower = tolower(huruf1);
    char huruf2Lower = tolower(huruf2);
    char huruf3Lower = tolower(huruf3);

    if(huruf1Lower == 'a' || huruf1Lower == 'i' || huruf1Lower == 'u' || huruf1Lower == 'e' || huruf1Lower == 'o'){
        printf("Huruf 1 Vokal\n");
    } else {
        printf("Huruf konsonan\n");
    }
    if(huruf2Lower == 'a' || huruf2Lower == 'i' || huruf2Lower == 'u' || huruf2Lower == 'e' || huruf2Lower == 'o'){
        printf("Huruf 2 Vokal\n");
    } else {
        printf("Huruf konsonan\n");
    }
    if(huruf3Lower == 'a' || huruf3Lower == 'i' || huruf3Lower == 'u' || huruf3Lower == 'e' || huruf3Lower == 'o'){
        printf("Huruf 1 Vokal\n");
    } else {
        printf("Huruf konsonan\n");
    }
}