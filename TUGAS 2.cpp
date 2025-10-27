#include <iostream>
using namespace std;

int main (){
	string array[50];
	int mhs;
	
	cout << "Array Of String | Memanggil Mahasiswa \n";
	cout << "\nInput Banyak Mahasiswa: "; 
	cin >> mhs;
	cout << endl;
	
	for (int i=0; i < mhs; i++){
		cout <<"Input Nama Mahasiswa - "<< i+1 <<" : ";
		cin >> array[i];
	}
	cout << endl;
	cout << "Panggil Mahasiswa Ke: ";
	cin >> mhs;
	cout << "\nNama Mahasiswa: " << array[mhs-1];
	
}
