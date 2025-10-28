#include <iostream>

using namespace std;

struct menu{
	string pesanan[10]={"BAKSO SAPI","BAKSO URAT","BAKSO CINCANG","BAKSO MERCON","BAKSO BERANAK","TEH BOTOL","JERUK","TEH TARIK","LEMON TEA","SODA GEMBIRA"};
	int harga[10]={13000,15000,10000,20000,25000,5000,5000,9000,7000,10000};
	int jumlah[10];
};

int main(){
	char yn;
	int pil,seluruh,uang;
	int y[10],total[10],lvl[10];
	string pns[10];
	menu menu1;
	
	x:
	cout <<" ======================================================== \n";
	cout <<"                           MENU\n";
	cout <<" ======================================================== \n";
	cout << " |*===================== MAKANAN ======================*|\n";
	cout << " |(1) BAKSO SAPI                      Rp.18.000         |\n";
	cout << " |(2) BAKSO URAT                      Rp.21.000         |\n";
	cout << " |(3) BAKSO CINCANG                   Rp.21.000         |\n";
	cout << " |(4) BAKSO MERCON                    Rp.20.000         |\n";
	cout << " |(5) BAKSO BERANAK                   Rp.25.000         |\n";
	cout << " |*===================== MINUMAN ======================*|\n";
	cout << " |(6)  TEH BOTOL                       Rp.5.000         |\n";
	cout << " |(7)  JERUK                           Rp.5.000         |\n";
	cout << " |(8)  TEH TARIK                       Rp.9.000         |\n";
	cout << " |(9)  LEMON TEA                       Rp.7.000         |\n";
	cout << " |(10) SODA GEMBIRA                    Rp.10.000        |\n";
	cout << " |______________________________________________________|\n";
	cout << " |======================== NOTE ========================|\n";
	cout << " |#LEVEL 1 - 10 TIDAK ADA BIAYA TAMBAHAN                |\n";
	cout << " |#LEVEL 10 - 20 DIKENAKAN BIAYA TAMBAHAN Rp.5000       |\n";
	cout << " ========================================================\n";
	cout << " |SILAHKAN MASUKKAN BANYAK PESANAN: ";cin >> pil;
	cout << endl;
	
	for (int i=0;i<pil;i++){
	cout << " =============== PESANAN KE - "<< i+1 <<" ===============\n";
	cout << " |MASUKAN NO MENU        : ";	cin >> y[i];
		if (y[i]>10){
			cout << " |TIDAK ADA MENU ITU!! MOHON PERIKSA KEMBALI MENU!!\n";
			sleep(3);
			system("cls");
			goto x;
		}
		if (y[i]< 6){
			cout <<" |LEVEL PEDAS 1-20       : ";cin >> lvl[i];
			}
		else if (y[i]>5){
			cout<<"| PANAS / DINGIN :";	cin>>pns[i];
		}
	cout << " |MASUKAN JUMLAH PESANAN : "; cin >> menu1.jumlah[i];
		if (lvl[i]>10){
			total[i]=menu1.jumlah[i]*menu1.harga[y[i]-1]+(5000*menu1.jumlah[i]);
		}
		else{
			total[i]=menu1.jumlah[i]*menu1.harga[y[i]-1];
		}
	cout << endl;
	}
	cout << " =======================================================\n";
	cout << " | APAKAH SUDAH YAKIN DENGAN PESANAN? (Y/N) : "; cin >> yn;
	
	if (yn=='n'||yn=='N'){
		system("cls");
		goto x;		
	}
	system("cls");
	cout << "==================== STRUK PESANAN ====================\n";	
	for (int i=0;i<pil;i++){
	cout << "|NO - "<<i+1<<endl;
	cout << "|MENU PESANAN        :"<<menu1.pesanan[y[i]-1]<<endl;
	cout << "|HARGA               :Rp."<<menu1.harga[y[i]-1]<<endl;
		if (y[i]< 6){
			cout << "|LEVEL PEDAS         : "<<lvl[i]<<endl;
		}
		else if (y[i]>5){
			cout << "|PANAS / DINGIN :"<<pns[i]<<endl;
		}
	cout<<"|JUMLAH PESAN        : "<<menu1.jumlah[i]<<endl;
	cout<<"|TOTAL HARGA         :Rp."<<total[i]<<endl;
	if (lvl[i]>10){
			cout << "|BIAYA LVL PER PORSI :Rp.5000 \n";
		}
	seluruh+=total[i];
	cout<<endl;
	}

	cout << "=======================================================\n";
	cout << "| TOTAL BELANJAAN  :Rp."<<seluruh<<endl;
		do{
	cout << "| MASUKAN UANG ANDA:Rp.";cin >> uang;
	
	 seluruh-=uang;
	 if(seluruh>0){
	 	cout<<"|Uang anda Kurang  :Rp."<<seluruh<<"\n\n";
		 }
	}
	while (seluruh>0);
	 if (seluruh<0){
	 	cout<<"|Uang Anda Kembali :Rp."<<seluruh*-1<<endl;
	 	}	

return 0;
}