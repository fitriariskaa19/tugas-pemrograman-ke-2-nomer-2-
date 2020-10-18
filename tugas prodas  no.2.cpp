/* Menghitung Upah Mingguan Karyawan */
/* Fitri Ariska */
/* 20051397082 */
/* 2020B */

#include <iostream>
#include <math.h>
using namespace std;


int main(){

 char golongan;
 string nama;
 int jam = 0;
 long gaji;
 int lembur;

 system ("color A");


 cout<<"Program Menghitung Upah Mingguan Karyawan"<<endl;
 cout<<"------------Fitri Ariska--------------" << endl;
 cout<<"-----------------------------------" << endl;
 while(nama.length() < 1){
    cout<< "masukan nama : "; getline(cin, nama);
 }
 cout << endl;
 cout<<"-----------------------------------" << endl;
 cout << "ketik a untuk Golongan A Lalu Tekan Enter" << endl;
 cout << "ketik b untuk Golongan B Lalu Tekan Enter" << endl;
 cout << "ketik c untuk Golongan C Lalu Tekan Enter" << endl;
 cout << "ketik d untuk Golongan D Lalu Tekan Enter" << endl << endl;

 cout << "masukan golongan : "; cin >> golongan; cout << endl;

 cout << "Masukan Jam Kerja : "; cin >> jam; cout << endl;

 lembur=4000;
 int mylembur=0;

 if(jam>48){
  mylembur=jam-48;
 }
 switch(golongan)
 {
 case 'a':
 gaji = (jam-mylembur)*5000;
 break;
 case 'b':
 gaji = (jam-mylembur)*7000;
 break;
 case 'c':
 gaji = (jam-mylembur)*8000;
 break;
 case 'd':
 gaji = (jam-mylembur)*10000;
 break;
  default:
   cout<<"Golongan Tidak Tersedia!"<<endl;
   gaji = 0;
   lembur = 4000;
    }
 if (jam>48){
gaji= gaji+((jam-48)*lembur);
}
cout<<"Nama Karyawan :"<<nama<<endl;
cout<<"Total Upah    :Rp."<<gaji<<endl;
cout<<endl;


return 0;
}
