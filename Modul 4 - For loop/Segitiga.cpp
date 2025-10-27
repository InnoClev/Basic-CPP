#include <iostream>
using namespace std;

int main(){
	int jml;
	cout << "SEGITIGA SIKU SIKU\n";
	
	cout << "Masukan Jumlah Baris :";
	cin >> jml;
	for (int x=1; x<=jml;x++){
		for (int y=jml;y>x; y--){
			cout << " ";
		}
		for (int z=1;z<=x;z++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}