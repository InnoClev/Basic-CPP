#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	reset:
		system("cls");
	// Deklarasi Inisialisasi Variabel th (total_harga), pb (pilih_bonus)
	int th, pb;
	// Input Total Harga
	cout << "Masukan Total Harga Belanjaan : Rp."; cin >> th;
	// Percabangan Bersarang (Nested IF)
	// Kondisi 1, Jika Lebih Dari 250000
	// Dan Jika Kurang Dari 500000
	if(th<=500000, th==250000)
	{
		cout << "Pilih Bonus :" << endl;
		cout << "1. Kupon Diskon 10%" << endl;
		cout << "2. Diskon Pembelian Laptop 5%" << endl;
		cout << "Masukan : "; cin >> pb;
		if(pb==1){
		cout << "Selamat Anda Mendapatkan Kupon Diskon 10%" << endl;	
		} 
		else if(pb==2){
		cout << "Selamat Anda Mendapatkan Diskon Pembelian Laptop 5%" << endl;	
		}
		else
		{
		cout << "Pilihan Anda Tidak Ada" << endl;
		cout << "Tekan Enter Untuk Mengulang" << endl;
		}
		getch();
		goto reset;
	}
	// Kondisi 2 Jika Lebih Dari 500000
	else if(th >= 500000)
	{
		cout << "Pilih Bonus :" << endl;
		cout << "1. Handuk Mandi" << endl;
		cout << "2. Piring Melamin" << endl;
		cout << "Masukan : "; cin >> pb;
		if(pb==1){
		cout << "Selamat Anda Mendapatkan Handuk Mandi" << endl;	
		} 
		else if(pb==2){
		cout << "Selamat Anda Mendapatkan Piring Melamin" << endl;	
		}
		else
		{
		cout << "Pilihan Anda Tidak Ada" << endl;
		cout << "Tekan Enter Untuk Mengulang" << endl;
		}
		getch();
		goto reset;
	}
	// Kondisi Jika Kurang Dari 250000
	else
	{
		cout << "Maaf Total Belanjaan Anda Belum Memenuhi Syarat" << endl;
		cout << "Tekan Enter Untuk Mengulang" << endl;
		getch();
		goto reset;
	}
	system("cls");
	return 0;
}