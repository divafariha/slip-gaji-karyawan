#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Program Utama
 main(){

 //Deklarasi
 char nama [80], pilih;
 int jam_kerja = 8 * 5 * 4, golongan_jabatan, golongan_pendidikan, jumlah_jam_kerja, jam_lembur;
 long honor_tetap = 500000, honor_lembur_per_jam = 2500, honor_lembur, tunjangan_jabatan, tunjangan_pendidikan, total_honor;

 atas:
 //Layar Masukan
 printf("              -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
 printf("                    PROGRAM HITUNG HONOR KARYAWAN KONTRAK\n");
 printf("                              PT. DINGIN DAMAI\n");
 printf("              -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
 printf("\n");
 printf("                              -=-=Slip Gaji=-=-\n");
 printf("\n");
 printf("              =====================================================\n");
 cout<<"                Nama Karyawan                    : "; gets(nama);
 cout<<"                Golongan                         : "; cin>>golongan_jabatan;
 cout<<"                Pendidikan (1/2/3)               : "; cin>>golongan_pendidikan;
 cout<<"                Jumlah Jam Kerja (Dalam Sebulan) : "; cin>>jumlah_jam_kerja;
 cout<<""<<endl;


 /*Hitung Tunjangan Jabatan
   Golongan 1 =  5% * Honor tetap
   Golongan 2 = 10% * Honor tetap
   Golongan 3 = 15% * Honor tetap
 */
 if(golongan_jabatan==1){
   tunjangan_jabatan = 5 * honor_tetap / 100;
 }
 else if(golongan_jabatan==2){
   tunjangan_jabatan = 10 * honor_tetap / 100;
 }
 else if(golongan_jabatan==3){
   tunjangan_jabatan = 15 * honor_tetap / 100;
 }
 else{
   cout<<"    *Kode Golongan Yang Anda Masukkan Salah !"<<endl<<endl;
   goto bawah;
 }


 /*Hitung Tunjangan Pendidikan
   Kode 1 = SMU = 2.5% * Honor tetap
   Kode 2 = D3  =   5% * Honor tetap
   Kode 3 = S1  = 7.5% * Honor tetap
 */
 if (golongan_pendidikan==1){
   tunjangan_pendidikan = 2.5 * honor_tetap / 100;
 }
 else  if (golongan_pendidikan==2){
   tunjangan_pendidikan = 5 * honor_tetap / 100;
 }
 else  if (golongan_pendidikan==3){
   tunjangan_pendidikan = 7.5 * honor_tetap / 100;
 }
 else{
   cout<<"    *Kode Pendidikan Yang Anda Masukkan Salah !"<<endl<<endl;
   goto bawah;
 }


 /* Hitung Honor Lembur
    Jam kerja normal 8 jam dalam sehari,
    Dalam sebulan jika seminggu adalah 5 hari kerja maka,
    Jam kerja normal dalam sebulan adalah 8*5*4 = 160 jam
 */
 jam_lembur = jumlah_jam_kerja - jam_kerja;
 honor_lembur = jam_lembur * honor_lembur_per_jam;


 //Hitung Honor Yang Diterima
 total_honor = honor_lembur + honor_tetap + tunjangan_jabatan + tunjangan_pendidikan;


 //Layar Keluaran
 cout<<"                Karyawan yang bernama : "<<nama<<endl;
 cout<<"                Honor yang diterima"<<endl<<endl;

 //Layar Hasil Proses
 cout<<"                      Honor Tetap                : Rp. "<<honor_tetap<<endl;
 cout<<"                      Tunjangan Jabatan          : Rp. "<<tunjangan_jabatan<<endl;
 cout<<"                      Tunjangan Pendidikan       : Rp. "<<tunjangan_pendidikan<<endl;
 cout<<"                      Honor Lembur               : Rp. "<<honor_lembur<<endl;
 cout<<"                                                   _____________+"<<endl;
 cout<<"                      Honor yang diterima        : Rp. "<<total_honor<<endl<<endl<<endl;


 bawah:
 //tambahan
 cout<<"    Anda Ingin Menghitung Lagi ? "<<endl;
 cout<<"    Tekan Y atau N : "; cin>>pilih;
 if(pilih=='Y'||pilih=='y'){
 goto atas;
 }
 else if(pilih=='N'||pilih=='n'){
 cout<<"\n THANK YOU";
 }
 getch();
 }
