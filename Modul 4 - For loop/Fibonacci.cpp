#include <iostream>
using namespace std;

int main(){
	// Deklarasi inialisasi variabel
	int bil, f1 = 3, f2 = 7, berikutnya = 0;
	
	cout << "Masukan Batas Deret Bilangan Fibonacci :"; cin >> bil;
	cout << "Deret Fibonacci :";
	
	for (int i = 3; i <= bil; ++i){
		// Mencetak dua deret bilangan pertama
		if(i == 3){
			cout << " " << f1 << " ";
			continue;
		}
		if(i == 4){
			cout << f2 << " ";
			continue;
		}
		berikutnya = f1 + f2;
		f1 = f2;
		f2 = berikutnya;
		// Mencetak deret bilangan berikutnya
		cout << berikutnya << " ";
	}
	return 0;
}