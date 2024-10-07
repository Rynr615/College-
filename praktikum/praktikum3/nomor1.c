#include <stdio.h>

int a, b, c;
int main() {

    int na = 65;

    char indeks;

    if(na>80 && na<100) {
        indeks = 'A';
    } else if(na>70) {
        indeks = 'B';
    } else if(na>60) {
        indeks = 'C';
    } else if ( na >= 40 ) {
        indeks = 'D';
    } else {
        indeks = 'E';
    }
    printf("%c", indeks);
}