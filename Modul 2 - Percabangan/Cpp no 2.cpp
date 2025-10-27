#include <iostream>

using namespace std;

 int main(){
 	// Inialisasi Deklarasi Variabel
 	double panjang, lebar, luas;
 	// Input Program
    cout << "Perhitungan Luas Persegi Panjang" << endl;
	cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;
    // Rumus
    luas = panjang * lebar;
	// Output Program
	cout << "Luas persegi panjang : " << luas << endl;
 
return 0;   
}