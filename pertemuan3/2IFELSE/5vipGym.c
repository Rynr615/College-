#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {
    int bayaranPerBulan;

    printf("Berapa bayaran anda perbulan : ");
    scanf("%d", &bayaranPerBulan);

    if(!(bayaranPerBulan > 1000000)) {
        printf("Bayaran anda perbulan adalah : %d\n", bayaranPerBulan);
        printf("Anda bukan member VIP");
    } else {
        printf("Bayaran anda perbulan adalah : %d\n", bayaranPerBulan);
        printf("Anda member VIP");
    }
}