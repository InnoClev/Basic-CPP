#include <iostream>

using namespace std;

int main()
{
	ulangi:
		system("cls");
     long harga=0;
     char KodeKacamata, Ukuran;
     string Merk;

     cout<<"\t== Program Cek Harga Kacamata ==\n\n";
     cout<<"1. Rodenstock (UKURAN S,M)\n";
     cout<<"2. Rayban (UKURAN S,M)\n";
     cout<<"3. Esilor (UKURAN S,M)\n";

     cout<<"Masukkan Kode Kacamata   : ";
     cin>>KodeKacamata;

     cout<<"Masukkan Ukuran Kacamata : ";
     cin>>Ukuran;

     if(KodeKacamata=='1'){
          Merk="Rodenstock";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=500000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=1000000;
          }
          else{
               harga=250000;
          }
     }
     else if(KodeKacamata=='2'){
          Merk="Rayban";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=400000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=600000;
          }
          else{
               harga=170000;
          }
     }
     else if(KodeKacamata=='3'){
          Merk="Esilor";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=700000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=1200000;
          }
          else{
               harga=200000;
          }
     }
     else{
          Merk="Error";
          cout<<"\n== Salah Input Kode Kacamata ==";
     }
     

     cout<<"\n\nMerek Kacamata  = "<<Merk;
     cout<<"\nUkuran Kacamata = "<<Ukuran;
     cout<<"\nHarga Kacamata  = "<<harga;
	
     return 0;
}