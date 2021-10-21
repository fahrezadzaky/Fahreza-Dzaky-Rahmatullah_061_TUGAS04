#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

main()
{
	
	int n, i=1;
	float nilai,rata,jumlah=0,jawab;
	cout<<"======================";
	cout<<"PROGRAM MENENTUKAN IPK";
	cout<<"======================"<<endl<<endl;
	while(i<=n){
		cout<<"Masukkan Nilai Mata Kuliah Ke"<<i<<"(0=E 1=D 2=C 3=B 4=A)"; cin>>nilai;
		jumlah=jumlah+nilai;
		rata=jumlah/n;
		i++;
	}
	cout<<"\nIPK="<<rata;
	cout<<"\n\nMenghitung Kembali IPK(0=Tidak 1=Iya)?="; cin>>jawab;
	if(jawab==1){
		system("cls");
	}
	else if (jawab==0){
		cout<<"jawaban";
	}
	getch();
}
