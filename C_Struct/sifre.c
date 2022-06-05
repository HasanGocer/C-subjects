#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
//urun isimli struct olusturun int  satılanMal, int satısFiyati, char urunIsmi 3 field yap.
//bir urun şifresi iste. kontrol et doğruysa verilen ismi doğru ise veriyi yazdır ve txt olarak yazdır
struct musteri{
	int satilanmal;
	int satisfiyati;
	char urunIsim[50];
	char Sifre[50];
}m1{15,50,"Akinci","Anan"};

int main(){
	char sifre[50];
	printf("sifre giriniz : ");
	
	gets(sifre);
	if(strcmp(m1.Sifre,sifre)==0)
	{
		printf("satilan urun : %d\nSatis Fiyati : %d\nUrun Ismi : %s\n",m1.satilanmal,m1.satisfiyati,m1.urunIsim);
	}
	else
	{
		printf("sifre yanlis");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
