#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>
//bir char matrisi oluşturun. 3 kelime isteyin ve harflerine göre(büyükten küçüğe) sıralayın.
//yazdırın.


int main(){
	
	char dizi1[3][255];
	char dizi2[255];
	int  belirtec=0;
	
	for(int i=0;i<3;i++)
	{
		gets(dizi1[i]);
	}
	
	printf("\n\n<------------------------>\n\n");
	
	for(int i=0;i<3;i++)
	{
		for(int i1=1;i1<3;i1++)
		{
			belirtec=strcmp(dizi1[i1-1],dizi1[i1]);
			if(belirtec==-1)
			{
			}
			else
			{
				strcpy(dizi2,dizi1[i1-1]);
				strcpy(dizi1[i1-1],dizi1[i1]);
				strcpy(dizi1[i1],dizi2);
			}
		}
	}
	
	for(int i=0;i<3;i++)
	{
		printf("%s\n",dizi1[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
