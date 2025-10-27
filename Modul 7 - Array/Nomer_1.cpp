#include <iostream>

using namespace std;

int main(){
	string nama, nim, alamat;
	
	cout << "================== INPUT DATA MAHASISWA ===============" << endl;
	cout << "NAMA   : ";
	getline (cin, nama);
	
	cout << "NIM    : ";
	getline (cin, nim);
	
	cout << "ALAMAT : ";
	getline (cin, alamat);
	cout << endl;
	
	cout << "==================== DATA MAHASISWA ====================" << endl;
	cout << "NAMA   : " << nama << endl;
	cout << "NIM    : " << nim << endl;
	cout << "ALAMAT : " << alamat <<endl;
	cout << "========================================================" << endl;
	
	return 0;
}
