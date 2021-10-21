#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main(){
	
	int jumlahbarang,n,harga=9, hargatotal, i=1, jawab;
	cout<<"Program Menghitung Total Belanja Barang"<<endl<<endl;
	
	cout<<"Silahkan Memasukkan Data Di Bawah Ini"<<endl;
	cout<<"Jumlah Barang="; cin>>jumlahbarang;
	while(i<=jumlahbarang){
		harga=harga+n;
		i++;
	}
	if (harga=500000){
		hargatotal=harga-(harga*0.1);
	}
	else if(harga>=200&& jumlahbarang<=500000){
		hargatotal=harga-(harga*0.05);
	}
	else if(harga<=200000){
		hargatotal=harga;
	}
	cout<<"Harga Asli="<<harga<<endl;
	cout<<"Harga Setelah DI Diskon"<<hargatotal<<endl;
	
	cout<<"Anda Mau Mengulangi Perhitungan(0=tidak 1=iya)=";cin>>jawab;
	if (jawab==1){
		system("cls");
	}
	else if(jawab==0){
		cout<<"Lancar Lancar Gaes";
	}
	getch();
}
