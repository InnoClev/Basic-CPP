#include <iostream>
using namespace std;

int main(){
	int array[3][3]={{4, 2, 5},{1, 8, 9},{3, 6, 7}};
	int b,k;
	for(int i = 0; i < 3; i++){
		cout << "{ ";
		for(int j = 0; j < 3; j++){
			cout << array[i][j];
		}
		cout << " }";
		cout << endl;
	}
	cout << "\nTampilkan Array \n";
	cout << "Baris: ";
	cin >> b;
	cout << "Kolom: ";
	cin >> k;
	cout << endl;
	cout << "Isi Array: "<< array[b-1][k-1];
}
