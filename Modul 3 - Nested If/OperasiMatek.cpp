#include <iostream>
#include <conio.h>
using namespace std;

float penjumlahan (float x, float y){
	float jumlah = x + y;
	return jumlah;
}
float pengurangan (float x, float y){
	float jumlah = x - y;
	return jumlah;
}
float perkalian (float x, float y){
	float jumlah = x * y;
	return jumlah;
}
float pembagian (float x, float y){
	float jumlah = x / y;
	return jumlah;
}

int main(){
	ulangi:
		system("cls");
	float x, y, z;
	cout << "Masukan Nilai Angka = "; cin >> x;
	cout << "Masukan Nilai Angka = "; cin >> y;
	cout << "Pilih Operasi Matematika" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "Masukan Pilihan = "; cin >> z;
	cout << endl;
	
	if (z == 1){
		float tambah = penjumlahan (x, y);
		cout << "Hasil Penjumlahan = " << tambah;
		return 0;
	}
	else if (z == 2){
		float kurang = pengurangan (x, y);
		cout << "Hasil Pengurangan = " << kurang;
		return 0;
	}
	else if (z == 3){
		float kalian = perkalian (x, y);
		cout << "Hasil Perkalian = " << kalian;
		return 0;
	}
	else if (z == 4){
		float bagian = pembagian (x, y);
		cout << "Hasil Pembagian = " << bagian;
		return 0;
	}
	else {
		cout << "PILIHAN ANDA TIDAK ADA" << endl;
		cout << "SILAHKAN TEKAN ENTER UNTUK MENGULANGI" << endl;
		getch();
		goto ulangi;
	}
	system ("cls");
	return 0;
}