#include <iostream>
#include <conio.h>
using namespace std;

float nim, matkul, presensi, nilai_tg;
string nama;

int main(){
	ulangi:
		system("cls");
		
	cout << "Percabangan Sederhana (Nested IF)" << endl;
	cout << "Masukan Nama  : ";
	getline (cin, nama);
	cout << "Masukan Nim   : "; cin >> nim;
	cout << "Pilih Mata Kuliah" << endl;
	cout << "1.Matkul SISTEM KOMPUTER" << endl;
	cout << "2.Matkul SISTEM OPERASI" << endl;
	cout << "Pilih Mata Kuliah : "; cin >> matkul;
	cout << "Masukan Presensi Praktikum : "; cin >> presensi;  
	cout << "Masukan Nilai Tugas Besar  : ";	cin >> nilai_tg;
	
	if (matkul==1){
		if(presensi>=75)
			cout << "Selamat Anda Berhasil Mendapat Nilai Tugas Besar" << endl;
		else
			cout << "Nilai Tugas Besar Anda Nol Karna Presensi Praktikum Dibawah 75%" << endl;
	}
	else if (matkul==2){
		if(presensi>=80)
			cout << "Selamat Anda Berhasil Mendapat Nilai Tugas Besar" << endl;
		else 
			cout << "Nilai Tugas Besar Anda Nol Karna Presensi Praktikum Dibawah 80%" << endl;
	} else{
		cout << "PILIHAN ANDA TIDAK ADA" << endl;
		cout << "TEKAN ENTER UNTUK MENGULANGI" << endl;
		getch();
		goto ulangi;
	}
 	return 0;
}