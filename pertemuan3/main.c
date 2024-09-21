#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B

    */

   float suhu;

   printf("Input suhu : ");
   scanf("%f", &suhu);

   if(suhu>30) {
    printf("Suhu %.2f derajat terlalu panas", suhu);
   }
}