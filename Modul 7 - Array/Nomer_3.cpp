#include <iostream>
#include <string.h>
using namespace std;

int main (){
	struct Mahasiswa {
		int nim, kuis, uts, uas;
		string nama;
	};
	
	cout << "Program Menghitung Struktur Nilai Akhir Mahasiswa \n";
	int jml, i, ket;
	cout << "Masukan Jumlah Data Mahasiswa : ";
	cin >> jml;
	cout << endl;
	Mahasiswa mhs[20];
	for (i=1; i <= jml; i++){
		cout << "Masukan Nama Mahasiswa : ";
		cin >> mhs[i].nama;
		cout << "Masukan NIM : ";
		cin >> mhs[i].nim;
		cout << "Masukan nilai Kuis : ";
		cin >> mhs[i].kuis;
		cout << "Masukan nilai UTS : ";
		cin >> mhs[i].uts;
		cout << "Masukan nilai UAS : ";
		cin >> mhs[i].uas;	
		cout << endl;
	}
	cout << "Nama \t NIM \t Kuis \t UTS \t UAS \t Nilai Akhir \t Keterangan ";
	cout << endl;
	for (i = 1; i <= jml; i++){
		int akhir = ((mhs[i].kuis) + (mhs[i].uts) + (mhs[i].uas))/3;
		cout << mhs[i].nama << " \t" << mhs[i].nim << " \t" << mhs[i].kuis << " \t" << mhs[i].uts << " \t" << mhs[i].uas << " \t" << akhir << " \t \t";
		if (akhir <= 75){
			cout << "Tidak lulus";
		}
		else {
			cout << "Lulus";
		}
		cout << endl;
	}
	return 0;
}
