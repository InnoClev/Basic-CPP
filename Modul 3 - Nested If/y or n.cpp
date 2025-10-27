#include <iostream>
using namespace std;
 
int main(){
 	
 	// Deklarasi Inisialisasi Variabel yn
 	string yn;
 	// Masukan Nilai yn
 	cout << "Apakah kamu pintar?" << endl;
 	cout << "Masukan y/n : " ;
 	cin >> yn;
 	cout << endl;
 	
 	// Percabangan IF-ELSE-IF
 	if (yn == "y"){
 		cout << "Semangat!!! Terus Belajar Agar Cita Citamu Tercapai" << endl;
	 } else if(yn == "n"){
	 	cout << "Semangat!!! Tidak Ada Manusia Yang Bodoh, Kamu Hanya Perlu Belajar" << endl;
	 } else {
	 	cout << "Tidak Ada Jawaban, Gunakan Huruf Kecil" << endl;
	 }
}