#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>
//Hasenm31Gocer32akinci33ozcan34hayirli35gocer
//dizideki değerleri sayıları ayır bir int dizisine ata.kelimeleri bir char matrisine ata.


int main(){
	char HG[255];
	char HHG[30][255];
	char SHG[30][255];
	int belirtec;
	int sayac=1,hSayac=0,sSayac=0,Asayac=1;
	
	strcpy(HG,"Hasen31Gocer32akinci33ozcan34hayirli35gocer");
	
	if(isalpha(HG[0])==0)//sayı
	{
		belirtec=0;
		SHG[0][0]=HG[0];
		
	}
	else//harf
	{
		belirtec=1;
		HHG[0][0]=HG[0];
	}
	
	for(int i=1;HG[i]!='\0';i++)
	{
		
		if(belirtec==0)//sayı
		{
			SHG[sSayac][sayac]=HG[i];
			sayac++;
			if(isdigit(HG[i+1])==0)
			{
				SHG[sSayac][sayac]='\0';
				belirtec=1;
				sayac=0;
				sSayac++;
			}
		}
		else//harf
		{
			HHG[hSayac][sayac]=HG[i];
			sayac++;
			if(isalpha(HG[i+1])==0)
			{
				HHG[hSayac][sayac]='\0';
				belirtec=0;
				sayac=0;
				hSayac++;
			}
		}	
	}
	
	if(belirtec==0)
	{
		SHG[sSayac][sayac+1]='\0';
		sSayac++;
	}
	else
	{
		HHG[hSayac][sayac+1]='\0';
		hSayac++;
	}
	
	for(int i=0;i<hSayac;i++)
	{
		printf("%s\n",HHG[i]);
	}
	
	for(int i=0;i<sSayac;i++)
	{
		printf("%s\n",SHG[i]);
	}
	return 0;
}
