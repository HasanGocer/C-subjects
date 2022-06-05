#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>



int main(){
	FILE *oHG= fopen("HG.txt","r");
	int sayac=0;
	char TC[10][255];
	char isim[10][255];
	if(oHG ==NULL)
	{
		printf("dosya bos\n");
	}
	else
	{
		while(!feof(oHG))
		{
			fscanf(oHG,"%s%s",TC[sayac],isim[sayac]);
			sayac++;
		}
		sayac--;
	}
	fclose(oHG);
	printf("HG");
	
	for(int i=sayac;i<4;i++)
	{
		scanf("%s",TC[i]);
		scanf("%s",isim[i]);
	}
	
	
	FILE *yHG=fopen("HG.txt","w");
	
	for(int i=0;i<4;i++)
	{
		fprintf(yHG,"%s %s\n",TC[i],isim[i]);
		printf("%s %s\n",TC[i],isim[i]);
	}
	
	
	
	
	
	return 0;
}
