#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>
struct hasen
{
	int vize;
	int final;
	int ort;
	char isim[20];
};


int main(){
	hasen sHG[4];
	
	FILE *oHG =fopen("HG.txt","r");
	
	
	int sayac=0;
	if (oHG == NULL)
		{
			puts("Dosya acilamadi");
		}
	else
	{
		while(!feof(oHG))
		{
			fscanf(oHG,"%d %d %s",&sHG[sayac].vize,&sHG[sayac].final,sHG[sayac].isim);
			sHG[sayac].ort=(sHG[sayac].vize+sHG[sayac].final)/2;
			sayac++;
			printf("%d",sayac);
		}
	}
	
	/*for(int i=sayac;i<4;i++)
	{
		scanf("%d%d%s",&sHG[i].vize,&sHG[i].final,sHG[i].isim);	
		sHG[i].ort=(sHG[i].vize+sHG[i].final)/2;
	}*/
	
	for(int i=0;i<4;i++)
	{
		printf("%d %d %d %s\n",sHG[i].vize,sHG[i].final,sHG[i].ort,sHG[i].isim);
		printf("Hasen Beyzasini deliler gibi seviyor\n");
	}
	
	fclose(oHG);
	FILE *yHG=fopen("HG.txt","w");
	
	for(int i=0;i<4;i++)
	{
		fprintf(yHG,"%d %d %d %s\n",sHG[i].vize,sHG[i].final,sHG[i].ort,sHG[i].isim);
	}
	fclose(yHG);
	
	return 0;
}
