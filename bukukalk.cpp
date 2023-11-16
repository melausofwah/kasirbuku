#include<iostream>

using namespace std;

int main()
{ 
 // Membuat variabel
 int D_h, Ds_h, Pk, Lk, Mam;
 float Book, Stat, Disc, FixBook, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t===== Daftar buku beserta harganya ====="<<endl;
 cout<<"\t\t| Dikta Hukum	: Rp 85.000,00 |"<<endl;
 cout<<"\t\t| Dago Setelah Hujan	: Rp 99.000,00 |"<<endl;
 cout<<"\t\t| Perahu Kertas		: Rp 90.000,00 |"<<endl;
 cout<<"\t\t| Laskar Pelangi	: Rp 85.000,00 |"<<endl;
 cout<<"\t\t| Malioboro at Midnight	: Rp 99.000,00 |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah novel DH yang dibeli	: "; cin>>D_h;
 cout<<"Masukkan jumlah novel DSH yang dibeli   : "; cin>>Ds_h;
 cout<<"Masukkan jumlah novel PK yang dibeli    : "; cin>>Pk;
 cout<<"Masukkan jumlah novel LP yang dibeli  	: "; cin>>Lk;
 cout<<"Masukkan jumlah novel MAM yang dibeli   : "; cin>>Mam;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<D_h<<"\t\t Dikta Hukum \t85000 \t\t"<<D_h*85000<<"\t    |"<<endl;
 cout<<"\t|   "<<Ds_h<<"\t\t Dago setelah hujan \t\t99000 \t\t"<<Ds_h*99000<<"\t    |"<<endl;
 cout<<"\t|   "<<Pk<<"\t\t Perahu Kertas \t\t90000 \t\t"<<Pk*90000<<"\t    |"<<endl;
 cout<<"\t|   "<<Lk<<"\t\t Laskar Pelangi \t85000 \t\t"<<Lk*85000<<"\t    |"<<endl;
 cout<<"\t|   "<<Mam<<"\t\tMalioboro at Midnight \t\t99000 \t\t"<<Mam*99000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;

 Book = D_h*85000+Ds_h*99000+Pk*90000+Lk*85000+Mam*99000;
 Disc = 0.10*Book;
 FixBook = Book-Disc;
 cout<<"\t|\t\t\tHarga Total \t: "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\t\tDiskon \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;

}
