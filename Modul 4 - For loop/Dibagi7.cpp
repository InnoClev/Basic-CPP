#include <iostream>
using namespace std;

int main(){
	int b,c,d;
	cout << "Banyaknya Adalah: ";
	cin >> b;
	
	for (int d=1;d<=100;d++){
		if (d%7==0){
			cout << " " << d;
			c++;
		}
	}

	cout << "\n\nAngka Yang Habis Dibagi 7 Adalah " << c << endl;
	return 0;
}