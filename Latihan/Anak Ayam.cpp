#include <iostream>
using namespace std;

int main(){
	
	int jml;
	
	cout << "Masukan Jumlah Anak Ayam : ";
	cin >> jml;
	
	cout << endl;
	
	for(int i = jml; i > 1; i--){
		
		cout << "\n Anak Ayam Turun " << i << ", mati satu tinggal " << i - 1;
	} 
	
	cout << "\n Anak Ayam Turun 1, Mati Satu Tinggal Induknya";
	return 0;
}