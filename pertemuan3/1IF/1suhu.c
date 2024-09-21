#include <stdio.h>
#include <stdlib.h>

    /*
    
    Dibuat oleh : Ryan Yanuar Pradana
    NIM : 2405188
    Kelas : 1B
    Tanggal : 18 September 2024

    */
int main() {

   float suhu;

   printf("Input suhu : ");
   scanf("%f", &suhu);

   if(suhu>30) {
    printf("Suhu %.2f derajat celcius terlalu panas", suhu);
   }
}