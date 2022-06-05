#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
//mezun isimli bir enum oluşturun. mezun || eğitimde isimli 2 değişken verin.
//Tarih isimli bir struct oluşturun. int gun,int ay,int yil isimli 3 field oluşturun.
//ogrenci isimli bir struct oluşturun. char isim, char soyisim mezun kontrol,Tarih GirisTarihi, Tarih mezuntarihi, int ortalama, isimli 5 field oluşturun
//mezun olmuşsa mezuniyet tarihini olmamışsa {0,0,0} yazdırın ve geri kalanı doldurun.
//yazdırın.
typedef enum{mezunO=0,egitim
}mezun;
typedef struct{
	int gun;
	int ay;
	int yil;
}tarih;

typedef struct{
	char Isimsoyisim[50];
	mezun kontrol;
	tarih girisTarih;
	tarih mezunTarih;
	int ortalama;
}ogrenci;

int main(){
	ogrenci o1;
	printf("mezun 0 devam 1 \nmezun musun : ");
	scanf("%d",o1.kontrol);
	
	printf("isim soyisim : ");	
	gets(o1.Isimsoyisim);
	printf("giris tarihi : ");
	scanf("%d%d%d",&o1.girisTarih.gun,&o1.girisTarih.ay,&o1.girisTarih.yil);
	printf("ortalaman : ");
	scanf("%d",&o1.ortalama);
		
	if(o1.kontrol==0)
	{	
		printf("mezun olma tarihi : ");
		scanf("%d%d%d",&o1.mezunTarih.gun,&o1.mezunTarih.ay,&o1.mezunTarih.yil);
	}
	else
	{
		o1.mezunTarih.gun=0;
		o1.mezunTarih.ay=0;
		o1.mezunTarih.yil=0;
	}
	printf("isim soyisim : %s\ngiris tarihi : %d.%d.%d\nortalaman : %d\nmezun olma tarihi : %d.%d.%d",o1.Isimsoyisim,o1.girisTarih.gun,o1.girisTarih.ay,o1.girisTarih.yil,o1.ortalama,o1.mezunTarih.gun,o1.mezunTarih.ay,o1.mezunTarih.yil);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
