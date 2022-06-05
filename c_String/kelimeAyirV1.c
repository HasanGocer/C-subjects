#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>
//255 elemanlı bir char dizisi oluştur.
//içine birçok kelime iler doldurt boşluklu olsun,
//kelimeleri ayırıp bir matrise aktar.
//matrisi okut.


int main(){
	
	char cDizi[255]="Hasen Huseyin Gocer Mehmet Albayrak Emine Gocer";
	char mDizi[30][255];
	int  i=0,hsayac=0,sayac=0;
	
	for(i=0;cDizi[i]!='\0';i++)
	{
		
		if(cDizi[i]==' ')
		{
			mDizi[sayac][hsayac]='\0';
			hsayac=0;
			sayac++;
		}
		else
		{
			mDizi[sayac][hsayac]=cDizi[i];
			hsayac++;
		}
	}
	mDizi[sayac][i]='\0';
	
	for(int i1=0;i1<sayac+1;i1++)
	{
		printf("%s\n",mDizi[i1]);
	}
	return 0;
}
