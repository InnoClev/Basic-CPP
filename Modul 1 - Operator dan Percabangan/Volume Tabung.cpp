#include <iostream>
using namespace std;

int main(){
	
	cout << "===MUHAMMAD ALGHIFARI===" << endl;
	cout << endl;
	
	// DEKLARASI VARIABEL
	
	float r,t,l,v;
	float phi=3.14;
	
	cout << "Menghitung Volume Tabung" << endl;
	cout << endl;
	
	cout << "Masukan Jari - Jari: ";
	cin >> r;
	
	cout << "Masukan Tinggi: ";
	cin >> t;
	
	// HITUNG LUAS TABUNG
	
	l=(2*phi*r*(r+t));
	
	// HITUNG VOLUME TABUNG
	
	v=(phi*t*(r*r));
	
	cout << endl;
	cout << "Luas Balok: " << l << endl;
	cout << "Volume Balok: " << v << endl;

	return 0;	
}
