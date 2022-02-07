#include <iostream>
#include<Windows.h> //system("CLS") 
using namespace std;

int main () {
	string isim, soyad, kullaniciad, sifre,kullaniciadi, sifre1, yeniad, yenisifre;
	int bakiye=2000, secim, yatir, cek ;
	double dolar1, euro1, dolar=8.14, euro=9.7;
	
	cout<<"LUTFEN UYE OLMAK ICIN ASAGIYI DOLDURUNUZ."<<endl;
	
	cout<<"Isminizi giriniz : ";
	cin>>isim;
	
	cout<<"Soyadinizi giriniz : ";
	cin>>soyad;
	
	cout<<"Kullanici adinizi olusturunuz : ";
	cin>>kullaniciadi;
	
	cout<<"Sifre belirleyiniz : ";
	cin>>sifre1;
	
	system("CLS"); 
	
	cout<<"\nGiris yapmak icin asagidaki bilgileri doldurunuz."<<endl;
	
	cout<<"\nKullanici adinizi giriniz : ";
	cin>>kullaniciad;
	
	cout<<"Sifrenizi giriniz : ";
	cin>>sifre;
	
	while (kullaniciad!=kullaniciadi||sifre!=sifre1) {
		cout<<"Kullanici adi veya sifreniz yanlis. Lutfen tekrar deneyiniz."<<endl;

	cout<<"\nKullanici adinizi giriniz : ";
	cin>>kullaniciad;
	
	cout<<"Sifrenizi giriniz : ";
	cin>>sifre;
	}
	
	system("CLS"); 
	
	cout<<"Baslangic bakiyeniz: 2000";
	while(true)
	{
	
	cout<<"\n\t\t\tISLEM MENUSU"<<endl<<"\t\t\t************"<<endl;
			printf(" 1-Hesaba Para Yatirma\n");
			printf(" 2-Hesaptan Para Cekme\n");
			printf(" 3-Parayi Dolara Cevirme\n");
			printf(" 4-Parayi Euroya Cevirme\n");
			printf(" 5-Kullanici Adi Degistirme\n");
			printf(" 6-Sifre Degistirme\n");
			printf(" 7-Cikis\n");
	cout<<"\nLutfen yapacaginiz islemi seciniz : ";
	cin>>secim;
	
	system("CLS"); 
	
	while(secim<1 || secim>7){
		cout<<"Boyle Bir Islem Secenegi Yoktur. Lutfen Tekrar Deneyiniz.";
		cout<<"\nLutfen yapacaginiz islemi seciniz : ";
		cin>>secim;	
	}
	
	if(secim==1){
		cout<<"\nHesaba Para Yatirma";
		printf("\n -------------------");
		cout<<"\nHesabiniza yatirilicak para tutarini giriniz : ";
		cin>>yatir;
		bakiye=bakiye+yatir;
		cout<<"\nToplam paraniz\t"<<bakiye<< "\tTL olmustur.\n";
		continue;	
	}
	
	else if(secim==2) {
		cout<<"\nHesaptan Para Cekme";
		printf("\n -------------------");
		cout<<"\nHesabinizdan cekilecek para tutarini giriniz : ";
		cin>>cek;
		
		while(cek>bakiye){
			cout<<"\nLutfen bakiyenize esit veya daha az bir para cekiniz!!!"<<"\n\nHesabinizdan cekilecek para tutarini giriniz :  ";
			cin>>cek;
			bakiye=bakiye-cek;
		}
		bakiye=bakiye-cek;
		cout<<"\nToplam paraniz\t"<<bakiye<< "\tTL olmustur.\n";
		continue;
	}
	
	else if(secim==3) {
	cout<<"\nHesaptaki Parayi Dolara Cevirme";
	printf("\n -------------------");
	dolar1=bakiye/dolar;
	cout<<"\nParaniz\t"<<dolar1<<"\tdolardir";
		continue;
	}
	
	else if(secim==4) {
		cout<<"\nHesaptaki Parayi Euroya Cevirme";
		printf("\n -------------------");
	euro1=bakiye/euro;
	cout<<"\nParaniz\t"<<euro1<<"\teurodur.";
		continue;
	}
	
	else if(secim==5){
		cout<<"\nKullanici Adi Degistirme";
		printf("\n -------------------");
		cout<<"Lutfen baska bir kullanici adi seciniz : ";
		cin>>yeniad;
		
		while(yeniad==kullaniciad) {
			cout<<"Kullanici adiniz eskisiyle ayni, lufen baska bir kullanici adi seciniz.";
			cin>>yeniad;
			cout<<"Kullanci adiniz basariyla degistirilmistir.";
		}
		continue;
	}
	
	else if(secim==6){
		cout<<"\nSifre Degistirme";
		printf("\n -------------------");
		cout<<"Lutfen baska bir sifre seciniz : ";
		cin>>yenisifre;
		
		while(yenisifre==sifre) {
			cout<<"Sectiginiz yeni sifre eskisiyle ayni, lutfen baska bir sifre seciniz.";
			cout<<"\nLutfen baska bir kullanici sifre seciniz : ";
			cin>>yenisifre;
			cout<<"Sifreniz basariyla degistirilmistir.";
		}
	
	}
	
	else {
		cout<<"Cikis yapmak icin herhangi bir tusa basiniz";
		break;
	}
}

}

 
