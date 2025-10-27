#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout <<"Masukan Nilai Batas: ";
	cin >> c;
	cout << endl;
	b=0;
	for (a=1;a<=c;a=a+2){
		cout << a << " ";
		b=a+b;
	}
	cout << endl;
	cout << "Total Bilangan Ganjil Adalah: ";
	cout << b;
	cout << endl;
	
	return 0;
}