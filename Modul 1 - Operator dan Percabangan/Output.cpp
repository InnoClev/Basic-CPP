#include <iostream>
using namespace std;

int main(){
	
	cout << "===MUHAMMAD ALGHIFARI===" << endl;
	cout << endl;
	
	// Deklarasi Tipe Data Variabel
	string nama;
	int umur;
	int kelas;
	
	cout << "Siapa Namamu?" << endl;
	cout << "Jawab: ";
	getline(cin,nama);
	
	cout << "Berapa Umurmu?" << endl;
	cout << "Jawab: ";
	cin >> umur;
	
	cout << "Kelas Apa?" << endl;
	cout << "Jawab: ";
	cin >> kelas;
	
	cout << "Salam Olahraga " << nama << endl;
	cout << "Umurmu " << umur << endl;
	cout << "Kamu Berada Dikelas " << kelas << endl;
	
	return 0;
}
