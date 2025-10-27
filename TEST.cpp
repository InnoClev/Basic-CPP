#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
	int statsiun[2];
	int tiket, nominal, total, kembalian;
	
		menu:
	cout << "===================================== \n";
	cout << "    PEMBELIAN TIKET KERETA ONLINE \n";
	cout << "         PT KAI INDONESIA \n";
	cout << "===================================== \n";
	cout << "STATSIUN ASAL \n";
	cout << "[1] JAKARTA (JK) "<< endl;
	cout << "[2] BANDUNG (BD) "<< endl;
	cout << "MASUKAN PILIHAN : ";
	cin >> statsiun[0];
	cout << "===================================== \n";
	cout << "STATSIUN TUJUAN \n";
	cout << "[1] YOGYAKARTA (YK) "<< endl;
	cout << "[2] SURABAYA (SBY) "<< endl;
	cout << "MASUKAN PILIHAN : ";
	cin >> statsiun[1];
	system ("cls");

	if (statsiun[0]==1 && statsiun[1]==1){
	cout << "=============== PEMESANAN ===============" << endl;
	cout << "     KA ARGO DWIPANGGA - EKSEKUTIF AA \n";
	cout << "STATSIUN ASAL   : JAKARTA (JK)" << endl;
	cout << "STATSIUN TUJUAN : YOGYAKARTA (YK)" << endl;
	cout << "HARGA TIKET 	: Rp 595.000,- \n" << endl;
	cout << "MASUKAN BANYAK TIKET : ";
	cin >> tiket;
	total = tiket*595000;	
		payment:
	cout << "================ PAYMENT ================" << endl;
	cout << "     JAKARTA (JK) - YOGYAKARTA (YK) \n";
	cout << "     08.50          15.00 \n";
	cout << "TIKET YANG DI PESAN        : "<< tiket << endl;
	cout << "TOTAL YANG PERLU DI BAYAR  : "<<"Rp."<< total << endl;
	cout << "\nMASUKAN NOMINAL PEMBAYARAN : Rp.";
	cin >> nominal;
		
		if (nominal >= total){
			kembalian = nominal - total;
			cout << "\nKEMBALIAN : Rp."<< kembalian << endl;
			cout << "\n=========================================";
			cout << "\n             TERIMA KASIH \n";
			cout << "      SIMPAN BUKTI PEMBAYARAN INI !!! \n";
			cout << "  UNTUK DITUKARKAN DENGAN BOARDING PASS \n";
			cout << "  UNTUK RESERVASI DAPAT DILAKUKAN 3 JAM \n";
			cout << "      SEBELUM KEBERANGKATAN KERETA";
			cout << "\n========================================= \n";
			sleep (30);
			system ("cls");
			goto menu;
		}
		else {
			cout << "\n=========================================";
			cout << "\n           MAAF JUMLAH NOMINAL \n";
			cout << "      	YANG ANDA MASUKAN KURANG ";
			cout << "\n========================================= \n";
			sleep (2);
			system ("cls");
			goto payment;
		}
	}
	else if (statsiun[0]==1 && statsiun[1]==2){
	cout <<"=============== PEMESANAN ===============" << endl;
	cout << "  KA ARGO BROMO ANGGREK - EKSEKUTIF AA \n";
	cout << "STATSIUN ASAL   : JAKARTA (JK)" << endl;
	cout << "STATSIUN TUJUAN : SURABAYA (SBY)" << endl;
	cout << "HARGA TIKET 	: Rp 755.000,- \n" << endl;
	cout << "MASUKAN BANYAK TIKET : ";
	cin >> tiket;
	total = tiket*755000;
	cout << "================ PAYMENT ================" << endl;
	cout << "     JAKARTA (JK) - SURABAYA (SBY) \n";
	cout << "     08.20          16.30 \n";
	cout << "TIKET YANG DI PESAN        : "<< tiket << endl;
	cout << "TOTAL YANG PERLU DI BAYAR  : "<<"Rp."<< total << endl;
	cout << "\nMASUKAN NOMINAL PEMBAYARAN : Rp.";
	cin >> nominal;
		
		if (nominal >= total){
			kembalian = nominal - total;
			cout << "\nKEMBALIAN : Rp."<< kembalian << endl;
			cout << "\n=========================================";
			cout << "\n             TERIMA KASIH \n";
			cout << "      SIMPAN BUKTI PEMBAYARAN INI !!! \n";
			cout << "  UNTUK DITUKARKAN DENGAN BOARDING PASS \n";
			cout << "  UNTUK RESERVASI DAPAT DILAKUKAN 3 JAM \n";
			cout << "      SEBELUM KEBERANGKATAN KERETA";
			cout << "\n========================================= \n";
			sleep (30);
			system ("cls");
			goto menu;
		}
		else {
			cout << "\n=========================================";
			cout << "\n           MAAF JUMLAH NOMINAL \n";
			cout << "      	YANG ANDA MASUKAN KURANG ";
			cout << "\n========================================= \n";
			sleep (2);
			system ("cls");
			goto payment;
		}		
	}
	else if (statsiun[0]==2 && statsiun[1]==1){
	cout <<"=============== PEMESANAN ===============" << endl;
	cout << "      KA ARGO WILIS - EKSEKUTIF AA \n";
	cout << "STATSIUN ASAL   : BANDUNG (BD)" << endl;
	cout << "STATSIUN TUJUAN : YOGYAKARTA (YK)" << endl;
	cout << "HARGA TIKET 	: Rp 545.000,- \n" << endl;
	cout << "MASUKAN BANYAK TIKET : ";
	cin >> tiket;
	total = tiket*545000;
	cout << "================ PAYMENT ================" << endl;
	cout << "     BANDUNG (BD) - YOGYAKARTA (YK) \n";
	cout << "     08.15          14.20 \n";
	cout << "TIKET YANG DI PESAN        : "<< tiket << endl;
	cout << "TOTAL YANG PERLU DI BAYAR  : "<<"Rp."<< total << endl;
	cout << "\nMASUKAN NOMINAL PEMBAYARAN : Rp.";
	cin >> nominal;
		 
		if (nominal >= total){
			kembalian = nominal - total;
			cout << "\nKEMBALIAN : Rp."<< kembalian << endl;
			cout << "\n=========================================";
			cout << "\n             TERIMA KASIH \n";
			cout << "      SIMPAN BUKTI PEMBAYARAN INI !!! \n";
			cout << "  UNTUK DITUKARKAN DENGAN BOARDING PASS \n";
			cout << "  UNTUK RESERVASI DAPAT DILAKUKAN 3 JAM \n";
			cout << "      SEBELUM KEBERANGKATAN KERETA";
			cout << "\n========================================= \n";
			sleep (30);
			system ("cls");
			goto menu;
		}
		else {
			cout << "\n=========================================";
			cout << "\n           MAAF JUMLAH NOMINAL \n";
			cout << "      	YANG ANDA MASUKAN KURANG ";
			cout << "\n========================================= \n";
			sleep (2);
			system ("cls");
			goto payment;
		}		
	}
	else if (statsiun[0]==2 && statsiun[1]==2){	
	cout <<"=============== PEMESANAN ===============" << endl;
	cout << "        KA HARINA - EKSEKUTIF AA \n";
	cout << "STATSIUN ASAL   : BANDUNG (BD)" << endl;
	cout << "STATSIUN TUJUAN : SURABAYA (SBY)" << endl;
	cout << "HARGA TIKET 	: Rp 585.000,- \n" << endl;
	cout << "MASUKAN BANYAK TIKET : ";
	cin >> tiket;
	total = tiket*585000;
	cout << "================ PAYMENT ================" << endl;
	cout << "     BANDUNG (BD) - SURABAYA (SBY) \n";
	cout << "     20.25          07.55 \n";
	cout << "TIKET YANG DI PESAN        : "<< tiket << endl;
	cout << "TOTAL YANG PERLU DI BAYAR  : "<<"Rp."<< total << endl;
	cout << "\nMASUKAN NOMINAL PEMBAYARAN : Rp.";
	cin >> nominal;
		
		if (nominal >= total){
			kembalian = nominal - total;
			cout << "\nKEMBALIAN : Rp."<< kembalian << endl;
			cout << "\n=========================================";
			cout << "\n             TERIMA KASIH \n";
			cout << "      SIMPAN BUKTI PEMBAYARAN INI !!! \n";
			cout << "  UNTUK DITUKARKAN DENGAN BOARDING PASS \n";
			cout << "  UNTUK RESERVASI DAPAT DILAKUKAN 3 JAM \n";
			cout << "      SEBELUM KEBERANGKATAN KERETA";
			cout << "\n========================================= \n";
			sleep (30);
			system ("cls");
			goto menu;
		}
		else {
			cout << "\n=========================================";
			cout << "\n           MAAF JUMLAH NOMINAL \n";
			cout << "      	YANG ANDA MASUKAN KURANG ";
			cout << "\n========================================= \n";
			sleep (2);
			system ("cls");
			goto payment;
		}
	}
	else {
		cout <<"MAAF STATSIUN YANG ANDA PILIH TIDAK ADA";
		cout <<"\nSILAHKAN PILIH STATSIUN YANG ADA";
			sleep (2);
			system("cls");
			goto menu;
	}
return 0;
}