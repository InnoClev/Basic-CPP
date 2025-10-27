#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	string nama;
	int input0;
	int input1;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"-                                                                                     -"<<endl;
	cout<<"                             6702220104 MUHAMMAD AL GHIFARI                            "<<endl;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"Siapa Namamu ? = ";
	getline(cin,nama);
		menu :
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"Selamat Datang "<<nama<<", Apakah Ada Yang Bisa Di Bantu?"<<endl;
	cout<<"1. Menu Program Perhitungan Bangun Ruang"<<endl;
	cout<<"2. Menu Program Perhitungan Grade Nilai Mahasiswa"<<endl;
	cout<<"-                                                                                     -"<<endl;
	cout<<"-                                                                                     -"<<endl;
	cout<<"Masukan Input"<<endl;
	cout<<"Input = ";
	cin>>input0;
	if (input0==1){
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"-                                                                                     -"<<endl;
	cout<<"                  SELAMAT DATANG DI MENU PERHITUNGAN BANGUN RUANG                      "<<endl;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"1. Perhitungan Luas Lingkaran"<<endl;
	cout<<"2. Perhitungan Volume Balok"  <<endl;
	cout<<"3. Perhitungan volume tabung" <<endl;
	cout<<"4. Back To Main Menu"<<endl;	
	cout<<"Masukan Input"<<endl;
	cout<<"Input = ";
	cin>>input1;
	switch (input1){
		case 1 :
			float luas;
	
			int r;
			cout << "Memasukan Nilai Jari Jari Lingkaran ";
			cin >> r;
	
			luas = 3.14*r*r;
	
			cout<<"Luas Lingkaran = "<<luas<<endl;
			break;
	
		case 2:
			float vol;
	
			int p;
			cout << "memasukan panjang balok ";
			cin >> p;
	
			int t;
			cout << "memasukan tinggi balok ";
			cin >> t;
	
			int l;
			cout << "memasukan lebar balok ";
			cin >> l;
	
			vol=p*t*l;
	
			cout<<"volume balok= "<<vol<<endl;
	break;
	case 3 :
		int volume, jari, tinggi;
	
	cout << "memasukan jari jari tabung ";
	cin >> jari;
	
	cout << "memasukan tinggi tabung ";
	cin >> tinggi;
	
	
	volume=3.14*r*r*t;
	
	cout<<"volume tabung = "<<volume<<endl;
	break;
	case 4:
		goto menu;
	
	}
	}
else if (input0==2){
	float sms1, sms2, sms3, sms4, sms5;
	float rata_rata;
	char grade;
	
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"-                                                                                     -"<<endl;
	cout<<"                  SELAMAT DATANG DI MENU GRADE NILAI MAHASISWA                         "<<endl;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
		cout<<"Masukan Nilai Semester 1 : ";
	cin>>sms1;
	cout<<"Masukan Nilai Semester 2 : ";
	cin>>sms2;
	cout<<"Masukan Nilai Semester 3 : ";
	cin>>sms3;
	cout<<"Masukan Nilai Semester 4 : ";
	cin>>sms4;
	cout<<"Masukan Nilai Semester 5 : ";
	cin>>sms5;
	
	cout<<"=====================================================================================\n";
	rata_rata=(sms1+sms2+sms3+sms4+sms5)/5;
	cout<<"\nNilai rata-rata mahasiswa adalah: "<<rata_rata<<endl;
	cout<<"=====================================================================================\n";
	cout<<"MAKA HASIL AKHIR NILAI MAHASISWA ADALAH: "<<endl;
	cout<<"=====================================================================================\n";
	cout<<endl;
	
	if(rata_rata>=90){
		grade='A';
		cout<<"PERTAHANKAN DAN TERUS SEMANGAT BELAJAR!";
	}else if(rata_rata>=70){
		grade='B';
		cout<<"TINGKATKAN LAGI DAN TERUS SEMANGAT BELAJAR!";
	}else if(rata_rata>=60){
		grade='C';
		cout<<"PERLU DITINGKATKAN LAGI DAN TERUS SEMANGAT DALAM BELAJAR!";
	}else if(rata_rata>=50){
		grade='D';
		cout<<"NILAI SANGAT KURANG, PERLU DITINGKATKAN LAGI DAN BELAJAR LEBIH GIAT LAGI!";
	}else{
		grade='E';
		cout<<"PERBAIKI DAN TINGKATKAN LAGI DALAM BELAJAR!";
	}
	cout<<endl;
	cout<<"Grade: "<<grade<<endl;
	cout<<"=====================================================================================\n"<<endl;
	cout<<"				  TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM INI :)\n                         "<<endl;
	cout<<"=====================================================================================\n"<<endl;
	
	return 0;	
}
}
