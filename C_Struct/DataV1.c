#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

struct HG{
	int  ogrenciID;
	char *ogrenciAdi;
	int  ogreciSinif;
	float  ogrenciOrt;
	int  kaldigiDers;
	char *enSevilenDers;
}ogrenci[30];

int main (){
	int secim,ID=0;
	char kelime[255];
	
	setlocale(LC_ALL, "Turkish");
	for(int sinir=1;sinir!=0;){
		printf("1- öğrenci ekle\n2-öğrenci verisine ulaş\n3-programi kapat\nNe yapmak istersin : ");
		scanf("%d",&secim);
		if(secim==1){
			printf("öğrencinin ID girin : ");
			scanf("%d",&ogrenci[ID].ogrenciID);
			
			printf("öğrencinin Adını girin : ");
			scanf("%s",kelime);
			ogrenci[ID].ogrenciAdi=(char*) malloc ((strlen(kelime))*sizeof(char));
			strcpy(ogrenci[ID].ogrenciAdi,kelime);
			
			printf("öğrencinin sınıfını girin : ");
			scanf("%d",&ogrenci[ID].ogreciSinif);
			
			printf("öğrencinin Ortalaması girin : ");
			scanf("%f",&ogrenci[ID].ogrenciOrt);
			
			printf("öğrencinin kadlığı ders sayısı girin : ");
			scanf("%d",&ogrenci[ID].kaldigiDers);
			
			printf("öğrencinin en sevdiği ders girin : ");
			scanf("%s",kelime);
			ogrenci[ID].enSevilenDers=(char*) malloc ((strlen(kelime))*sizeof(char));
			strcpy(ogrenci[ID].enSevilenDers,kelime);
			
			
			ID++;
		}
		
		else if(secim==2){
			printf("Hangi sıralı ğrenciye ulaşmak istiyoesun : ");
			scanf("%d",&secim);
			
			printf("ID : %d\nAdı : %s\nSınfı : %d\nOrtalaması : %f\nKaldığı Ders sayısı : %d\nEn sevdiği ders : %s\n",ogrenci[secim].ogrenciID,ogrenci[secim].ogrenciAdi,ogrenci[secim].ogreciSinif,ogrenci[secim].ogrenciOrt,ogrenci[secim].kaldigiDers,ogrenci[secim].enSevilenDers);
		}
		
		else if(secim==3){
			sinir=0;
		}	
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
