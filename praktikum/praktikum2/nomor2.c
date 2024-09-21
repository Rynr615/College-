#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float AB = 45, AC = 24, BC, hasil;

    BC = sqrt(pow(AB, 2) + pow(AC, 2));

    printf("Hasil = %.2f", BC);
}