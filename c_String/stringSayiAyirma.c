#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>



int main(){
	char aDizi[255]="3454 6574 675 67543 675432 657765";
	char dDizi[30][255];
	int  iDizi[30];
	int  sayac=0,sSayac=0;
	
	for(int i=0;aDizi[i]!='\0';i++)
	{
		if(aDizi[i]==' ')
		{
			dDizi[sSayac][sayac]='\0';
			sSayac++;
			sayac=0;
		}
		else if(isdigit(aDizi[i])==0)
		{
			dDizi[sSayac][sayac]='\0';
			sSayac++;
			sayac=0;
		}
		else
		{
			dDizi[sSayac][sayac]=aDizi[i];
			sayac++;
		}
	}
	
	for(int i=0;i<=sSayac;i++)
	{
		iDizi[i]=atoi(dDizi[i]);
	}
	
	for(int i=0;i<=sSayac;i++)
	{
		printf("%d\n",iDizi[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
