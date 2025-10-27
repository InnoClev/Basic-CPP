#include <iostream>
using namespace std;
 
int main(){
	
	// Deklarasi Inisialisasi Variabel angka
	int angka;
	// Masukan Nilai angka
	cout << "Masukan Angka : ";
	cin >> angka;
	cout << endl;
	
	/* Jika angka %2 menghasilan nilai 0 maka 
	tampilkan 'Adalah Genap' 
	Jika tidak tampilkan 'Adalah Ganjil'
	*/
	if (angka%2==0){
		cout << angka << " Adalah Genap" << endl;
	} else {
		cout << angka << " Adalah Ganjil" << endl;
	}
return 0;
}
 