#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>  
// verilen değer kadar alan oluşturup ilerlet sildir yeniden yazdır ve en son HHG verildiğinde prgramı bitir yazdır.
int main (){
setlocale(LC_ALL, "Turkish");
int i=0,i2=0,secim=0,secim2=0;
int sinir,sayac=0,sayac1,sayac2;
char *pDizi[20];
char kelime[255],kelime3[255];
for(sinir=1;sinir!=0;)
{
	printf("1-kelime ekle\n2-belirli indexdeki kelimeyi sil\n3-belirli indexdeki kelimeyi değiştir\n4-belirli indexdeki kelimenin üstüne yaz\n5-kelimeleri yazdır\n6- programı kapat\nne yapmak istersin : ");
	scanf("%d",&secim);
	if(secim==1)
	{
		printf("bir kelime verin : ");
		scanf("%s",kelime);
		pDizi[sayac]=(char*) malloc ((strlen(kelime))*sizeof(char));
		strcpy(pDizi[sayac],kelime);
		sayac++;
		printf("%d\n",sayac);	
	}
	
	if(secim==2)
	{
		
		printf("hangi indexdeki kelimeyi silmek istersin iptal etmek istersen -1 yaz\n index : q");
		scanf("%d",&secim2);
			if(secim2==-1) continue;
			if(secim2>sayac)
			{
				printf("Verdiğiniz değerdeki index boş");
				continue;
			}
		free(pDizi[secim2]);
	}
	
	if(secim==3)
	{
		sayac1=2;
		printf("hangi indexdeki kelimeyi değiştirmek istersin iptal etmek istersen -1 yaz\n index : ");
		scanf("%d",&secim2);
			if(secim2==-1) continue;
			if(secim2>sayac)
			{
				printf("Verdiğiniz değerdeki index boş");
				continue;
			}
		free(pDizi[secim2]);
		printf("bir kelime verin : ");
		scanf("%s",kelime);
		pDizi[secim2]=(char*) malloc ((strlen(kelime))*sizeof(char));
		strcpy(pDizi[secim2],kelime);
	}
	
	if(secim==4)
	{
		sayac2=2;
		printf("hangi indexdeki kelimenin üstüne yazmak istersin iptal etmek istersen -1 yaz\n index : ");
		scanf("%d",&secim2);
			if(secim2==-1) continue;
			if(secim2>sayac)
			{
				printf("Verdiğiniz değerdeki index boş");
				continue;
			}
		printf("bir kelime verin : ");
		scanf("%s",kelime);
		strcpy(kelime3,pDizi[secim2]);
		strcat(kelime3,kelime);
		free(pDizi[secim2]);
		pDizi[secim2]=(char*) malloc (strlen(kelime3)*sizeof(char));
		strcat(pDizi[secim2],kelime3);
	}
	
	if(secim==5)
	{
		
		for( i2=0;i2<sayac;i2++)
		{
			printf("%d. değer %s \n",i2,pDizi[i2]);
		}
	}
	
	if(secim==6)
	{
		sinir=0;
		printf("program kapandı");
	}
	
}




return 0;
}
