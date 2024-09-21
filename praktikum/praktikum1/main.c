#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

printf("======A1======\n");
// int nilai_kuis, nilai_tugas, nilai_uts, nilai_uas;
// float rerata;

// printf("Masukkan nilai kuis :");
// scanf("%d", &nilai_kuis);
// printf("Masukkan nilai tugas :");
// scanf("%d", &nilai_tugas);
// printf("Masukkan nilai UTS :");
// scanf("%d", &nilai_uts);
// printf("Masukkan nilai UAS :");
// scanf("%d", &nilai_uas);

// // rumus rerata 
// rerata = (nilai_kuis + nilai_tugas + nilai_uas + nilai_uts) / 4;

// //hasil
// printf("Nilai rerata anda adalah : %.2f\n", rerata);


printf("======A2======\n");
// float volume, tinggi, panjangAlas, lebarAlas, luasAlas;

// printf("Masukkan tinggi : ");
// scanf("%f", &tinggi);

// printf("Masukkan panjang alas : ");
// scanf("%f", &panjangAlas);

// printf("Masukkan lebar alas : ");
// scanf("%f", &lebarAlas);

// luasAlas = panjangAlas * lebarAlas;

// volume = (luasAlas * tinggi) / 3;

// printf("Volume = %.2f cm3\n", volume);


printf("=====A3=====\n");
// int panjang, lebar, tinggi, luas;
// //input nilai variabel dan hitung luas balok
// printf("Masukkan panjang dalam cm : ");
// scanf("%d", &panjang);
// printf("Masukkan lebar dalam cm : ");
// scanf("%d", &lebar);
// printf("Masukkan tinggi dalam cm : ");
// scanf("%d", &tinggi);

// luas = 2 * ((panjang*lebar)+(panjang*tinggi)+(lebar*tinggi));
// printf("luas = %d cm2\n", luas);


printf("=====A4=====\n");
// float jari_jari, tinggi, luas_alas, luas_permukaan;
// // Input jari-jari dan tinggi tabung
// printf("Masukkan jari jari dalam cm : ");
// scanf("%f", &jari_jari);

// printf("Masukkan tinggi dalam cm : ");
// scanf("%f", &tinggi);
// // Hitung luas alas tabung
// luas_alas = 3.14159 * pow(jari_jari,2);
// //pow digunakan untuk menghitung pangkat suatu angka, pow(nilai dasar,nilai pangkat)
// // Hitung luas permukaan tabung
// luas_permukaan = 2 * luas_alas * ( jari_jari + tinggi);
// // Tampilkan hasil perhitungan
// printf("Luas permukaannya adalah %.2f\n", luas_permukaan);


printf("=====A5=====\n");
// int r=9;
// float phi=3.14159;
// float luas_p,volume;
// //hitung luas permukaan bola dan volume bola (menggunakan pow())
// luas_p = 4 * phi * pow(r, 2);
// printf("Luas permukaan bola: %.2f", luas_p);
// volume = 4 * phi * pow(r,3)/3;
// printf("\nVolume bola: %.2f\n", volume);

printf("=====B1=====\n");
// char nama[] = "Clara"; //bagian yang di benarkan dengan menambahkan [] 
// float nilai1, nilai2, avrg;
// printf("Nilai 1 : ");
// scanf("%f", &nilai1);
// printf("Nilai 2 : ");
// scanf("%f", &nilai2);
// avrg = (nilai1 + nilai2)/2;
// printf("nilai %s adalah %.2f\n", nama, avrg);

printf("=====B2=====\n");
// float nilai1, nilai2,nilai3; // bagian yang dibenarkan dengan mengubah jenis variable dari int ke float
// char nama[] = "Sean";
// float avrg;
// nilai1 = 85.7;
// nilai2 = 65.9;
// nilai3 = 98.2;
// avrg = (nilai1 + nilai2 + nilai3)/3;
// printf("nilai %s = %.2f\n",nama,avrg); // mengubah %c menjadi %s dan mengubah %d ke %f
// // %c digunakan untuk char bukan untuk string
// // 

printf("=====B3=====\n");
// float sisi_alas, tinggi_sisi, luas_alas, luas_sisi, luas_permukaan; // diubah menjadi variable bertipe float
// printf("Masukkan panjang sisi alas limas (cm): ");
// scanf("%f", &sisi_alas); // mengubah dari %.2f menjadi %f
// printf("Masukkan tinggi sisi segitiga limas (cm): ");
// scanf("%f", &tinggi_sisi); // mengubah dari %.2f menjadi %f
// luas_alas = sisi_alas * sisi_alas;
// luas_sisi = 4 * (0.5 * sisi_alas * tinggi_sisi);
// luas_permukaan = luas_alas + luas_sisi;
// printf("Luas permukaan limas segiempat = %.2f cm2\n", luas_permukaan);

printf("=====B4=====\n");
// int jumlah_apel, jumlah_orang,sisa_apel;
// printf("Jumlah apel yang dimiliki : ");
// scanf("%d", &jumlah_apel);
// printf("Jumlah orang yang akan diberi apel : ");
// scanf("%d", &jumlah_orang);
// sisa_apel = jumlah_apel%jumlah_orang;
// printf("Sisa apel yang dimiliki sebanyak %d apel\n", sisa_apel);

printf("=====B5=====\n");
char nama[20], alamat[30];
int usia, nim; // mengubah tipe data nim dari string ke int
printf("Masukkan nama : "); //nama : Clarissa
scanf("%s", &nama);
printf("Masukkan nim : "); //nim : 245790
scanf("%d", &nim);
printf("Masukkan usia : "); //usia : 18
scanf("%d", &usia);
printf("Masukkan alamat : "); //alamat : Jln. Kenanga Raya No.23
scanf(" %30[^\n]", &alamat); // mengubah %s menjadi %30[^\n]
printf("\n%s memiliki nim %d dengan usia %d dan tinggal di %s\n", nama, nim, usia, alamat); // menambahkan , ( comma ) setelah usia
printf("=====C1=====\n");
// float m, f, a, v1, v2, t1, t2;
// // m = massa
// // a = percepatan
// // v1 = kecepatan awal
// // v2 = kecepatan akhir
// // t1 = waktu awal
// // t2 = waktu akhir
// // f = gaya

// printf("Silahkan masukkan massa : ");
// scanf("%f", &m);

// printf("Silahkan masukkan kecepatan awal : ");
// scanf("%f", &v1);

// printf("Silahkan masukkan kecepatan akhir : ");
// scanf("%f", &v2);

// printf("Silahkan masukkan waktu awal : ");
// scanf("%f", &t1);

// printf("Silahkan masukkan waktu akhir : ");
// scanf("%f", &t2);

// a = (v2 - v1) / (t1);

// f = m * a;
// printf("%.2f N\n", f);

printf("=====C2=====\n");
// float ek, m, v;

// printf("Masukkan massa : ");
// scanf("%f", &m);

// printf("Masukkan kecepatan : ");
// scanf("%f", &v);

// ek = 0.5 * m * pow(v, 2);
// printf("Ek = %.2f J\n", ek);

printf("=====C3=====\n");
// float permukaanKerucut, phi, jariJari, s, t, diameter, volume;
// // s = garis pelukis
// // t = tinggi
// phi = 3.14159;
// diameter = 35;
// t = 75;
// jariJari = 0.5 * diameter;
// s = sqrt(pow(jariJari, 2) + pow(t, 2));
// permukaanKerucut = (phi * jariJari * s) + (phi * pow(jariJari, 2));
// volume = 1 * (phi * pow(jariJari, 2) * t) / 3;
// printf("Luas permukaan : %.2fcm2\n", permukaanKerucut);
// printf("Volume : %.2fcm3\n", volume);


printf("=====C4=====\n");
// float baju, celana, sepatu, diskon, hargaAkhir;
// diskon = 10;
// baju = 100000 - (100000 * diskon/100);
// diskon = 15;
// celana = 150000 - (150000 * diskon/100);
// diskon = 20;
// sepatu = 200000 - (200000 * diskon/100);

// hargaAkhir = (2 * baju) + celana + sepatu;
// printf("Total harga setelah diskon : Rp. %.2f\n", hargaAkhir);

printf("=====C5=====\n");
// int jumlahNasgor, jumlahMigor, jumlahSate, hargaNasgor, hargaMigor, hargaSate, hargaAkhir;

// printf("Masukkan jumlah pesanan : \n");
// printf("Isi dengan angka 0 jika tidak memesan\n");
// printf("Nasi Goreng ( Rp. 25.000 ) = ");
// scanf("%d", &jumlahNasgor);
// printf("Mie Goreng ( Rp. 20.000 ) = ");
// scanf("%d", &jumlahMigor);
// printf("Sate Ayam ( Rp. 30.000 ) = ");
// scanf("%d", &jumlahSate);

// hargaNasgor = jumlahNasgor * 25000;
// hargaMigor = jumlahMigor * 20000; 
// hargaSate = jumlahSate * 30000;

// hargaAkhir = hargaNasgor + hargaMigor + hargaSate;

// printf("\nTotal harga pesanan : Rp. %d\n", hargaAkhir);


}
