#include <iostream>

using namespace std;

int main (){
	struct Mahasiswa {
		int nim;
		string nama, alamat;
	};
	
	cout << "================== INPUT DATA MAHASISWA ================" << endl;
	int jml, i;
	cout << "Input Jumlah Data  : ";
	cin >> jml;
	cout << endl;
	Mahasiswa mhs[20];
	for (i = 1; i <= jml; i++){
		cout << "Masukan Nama   : ";
		cin >> mhs[i].nama;
		cout << "Masukan NIM    : ";
		cin >> mhs[i].nim;
		cout << "Masukan Alamat : ";
		cin >> mhs[i].alamat;
	cout << "========================================================" << endl;
	cout << endl;
	}
	cout << "==================== DATA MAHASISWA ====================" << endl;
	for (i = 1; i <= jml; i++){
		cout << "NAMA   : " <<mhs[i].nama << endl;
		cout << "NIM    : " <<mhs[i].nim << endl;
		cout << "ALAMAT : " <<mhs[i].alamat << endl;
	cout << "========================================================" << endl;
	}
	return 0;
}
