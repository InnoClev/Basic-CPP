#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//deklarasi variabel
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	cout<<"---------------DAFTAR HARGA MENU BAKSO CEU UMIN---------------"<<endl;
    cout<<"1. Bakso Urat                 Rp.22000"<<endl;
    cout<<"2. Bakso Cincang              Rp.22000"<<endl;
    cout<<"3. Bakso Mercon               Rp.25000"<<endl;
    cout<<"4. Frestea	              Rp.7000" <<endl;
    cout<<"5. Teh Sosro	              Rp.7000" <<endl;
    cout<<"6. Air Mineral 	              Rp.3000" <<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    //Percabangan if, dan switch case
    while(selesai==false){
    	
    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=6){
    		//Jika pembeli memasukan angka 0 maka pemesanan selesai
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Bakso Urat        "; harga[i]=22000; break;
		    		case 2 : menu[i]="Bakso Cincang     "; harga[i]=22000; break;
		    		case 3 : menu[i]="Bakso Mercon      "; harga[i]=25000; break;
		    		case 4 : menu[i]="Frestea           "; harga[i]=7000; break;
		    		case 5 : menu[i]="Teh Sosro         "; harga[i]=7000; break;
		    		case 6 : menu[i]="Air Mineral       "; harga[i]=3000; break;
		    		default : menu[i]="";harga[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	// jumlah x harga
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		// jika menu yang dipilih tidak sesuai maka akan kembali ke pilih menu	
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                          STRUK PEMBAYARAN                            "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;
	
}