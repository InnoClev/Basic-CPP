#include <iostream>
using namespace std;

int main (){
	int array[10]={1,3,6,9,12,15,17,19,21,23};
	
	cout <<"Isi Array: ";
	cout << array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<" "<<array[5]<<" "<<array[6]<<" "<<array[7]<<" "<<array[8]<<" "<<array[9];
	cout << endl;
	cout <<"Tukar Array ke 1, ke 3, ke 6 dan ke 9" << endl;
	cout <<"Isi Array: ";
	cout << array[0]<<" "<<array[3]<<" "<<array[2]<<" "<<array[1]<<" "<<array[4]<<" "<<array[5]<<" "<<array[9]<<" "<<array[7]<<" "<<array[8]<<" "<<array[6];
	cout << endl;	
}
