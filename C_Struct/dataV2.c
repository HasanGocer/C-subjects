#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
//struckeri bir data olarak kullanacağız. kullanılacak her değer pointer olacak ve datanın kendi dizi olacak
//1-kelime ekle\n2-belirli indexdeki kelimeyi sil\n3-belirli indexdeki kelimeyi değiştir\n4-belirli indexdeki kelimenin üstüne yaz\n5-kelimeleri yazdır\n6- programı kapat
//restorant int ID, Char[] Kullanıcıİsim, Char[] enÇokSevilenYemek, int ortalmaHarcananPara, int HaftadaGelmeSıklığı;

struct HG{
	int    ID;
	char   kullaniciIsim;
	char   enCokSevilenYemek;
	float  ortalamaHarcananPara;
	int    haftadaGelmeSikligi;
}R1[30];

void Yazdir(HG *R1,int ID)
{
	printf("Kullanıcının İsmi : ");
	scanf("%s",&(R1->kullaniciIsim));
	
	printf("Kullanıcının En Çok Sevdiği Yemek : ");
	scanf("%s",&(R1->enCokSevilenYemek));
	
	printf("Kullanıcı Ortalama Harcanan Para : ");
	scanf("%f",&(R1->ortalamaHarcananPara));
	
	printf("Kullanıcı Haftada Gelme Sıklığı : ");
	scanf("%d",&(R1->haftadaGelmeSikligi));
}

void Silme(HG R1,int ID)
{
	free(R1[ID].kullaniciIsim);
	strcpy((R1->kullaniciIsim),"Silindi");
	free((*R1).enCokSevilenYemek);
	strcpy((R1->enCokSevilenYemek),"Silindi");
	free((R1->ortalamaHarcananPara));
	(R1->ortalamaHarcananPara)=0;
	free((R1->haftadaGelmeSikligi));
	(R1->haftadaGelmeSikligi)=0;
}

void Degistir(HG *R1,int ID)
{
	free(R1->kullaniciIsim);
	printf("Kullanıcının İsmi : ");
	gets(R1->kullaniciIsim);
	
	free((*R1).enCokSevilenYemek);
	printf("Kullanıcının En Çok Sevdiği Yemek : ");
	gets(R1->enCokSevilenYemek);
	
	free((R1->ortalamaHarcananPara));
	printf("Kullanıcı Ortalama Harcanan Para : ");
	scanf("%f",&(R1->ortalamaHarcananPara));
	
	free((R1->haftadaGelmeSikligi));
	printf("Kullanıcı Haftada Gelme Sıklığı : ");
	scanf("%d",&(R1->haftadaGelmeSikligi));
}

void Oku(HG *R1,int ID)
{
	printf("HG");
	printf("Kullanıcı ID : %d\nKullanıcının İsmi : %s\nKullanıcının En Çok Sevdiği Yemek : %s\nKullanıcı Ortalama Harcanan Para : %f\nKullanıcı Haftada Gelme Sıklığı : %d\n",(*R1).ID,(*R1).kullaniciIsim,(*R1).enCokSevilenYemek,(*R1).ortalamaHarcananPara,(*R1).haftadaGelmeSikligi);
}//   

int main(){
	setlocale(LC_ALL, "Turkish");
	int ID=0,secim;
	for(int i=1;i!=0;)
	{

		printf("1-Kullanıcı Ekle\n2-Kullanıcı Silme\n3-Kullanıcı Değiştir\n4-Kullanıcıyı Göster\n5-Kullanıcıları göster\n6-programı kapat\nNe yapmak istersin: ");
		scanf("%d",&secim);
		if(secim==1)
		{
			Yazdir(&R1[ID],ID);
			R1[ID].ID=&ID;
			printf("%d",[ID].ID);
			ID++;
		}
		else if(secim==2)
		{
			printf("Kaçıncı ID silinecek : ");
			scanf("%d",&secim);
			if(ID>secim){
				Silme(&R1[secim],ID);
			}
			else
			{
				printf("Böyle birisi yok");
			}
		}
		else if(secim==3)
		{
			printf("Kaçıncı ID değiştirilecek : ");
			scanf("%d",&secim);
			if(ID>secim){
				Degistir(&R1[secim],ID);
			}
			else
			{
				printf("Böyle birisi yok");
			}
		}
		else if(secim==4)
		{
			printf("Kaçıncı ID okunacak : ");
			scanf("%d",&secim);
			if(ID>secim){
				Oku(&R1[secim],ID);
			}
			else
			{
				printf("Böyle birisi yok");
			}
		}
		else if(secim==5)
		{
			
		}
		else if(secim==6)
		{
			i=0;
		}
	}
	
	
	
	
	
	return 0;
}
