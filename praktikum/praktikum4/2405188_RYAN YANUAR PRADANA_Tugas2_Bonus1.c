#include <stdio.h>
#include <stdlib.h>

int main() {
    int tahun, hasil100, hasil4, hasil400;

    printf("Masukkan tahun : ");
    scanf("%d", &tahun);

    if(tahun % 400 == 0) {
        printf("Merupakan tahun kabisat");
    } else if (tahun % 400 != 0 && tahun % 100 == 0) {
        printf("Bukan tahun kabisat");
    } else if (tahun % 400 != 0 && tahun % 100 != 0 && tahun % 4 == 0) {
        printf("Merupakan tahun kabisat");
    } else if (tahun % 400 != 0 && tahun % 100 != 0 && tahun % 4 != 0) {
        printf("Bukan tahun kabisat");
    }
    

    return 0;

    
}