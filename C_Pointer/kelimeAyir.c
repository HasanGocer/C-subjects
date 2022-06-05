#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
	char anadizi[255];
	char kelimeler[20][255];
	int  bosluk[255];
	int  len,sayac=0,i1,i2,i3=0,bosluks=0,kelimes1,kelimes2=0,kelime;
	char harf;
	
	printf("kelime ver : ");
	gets(anadizi);
	len=strlen(anadizi);
	
	for(i1=0;i1<len;i1++)
	{
		if(anadizi[i1]==' ' && anadizi[i1]!='\0')
		{
		sayac++;
		bosluk[bosluks]=i1;
		bosluks++;
		}	
	}
	
	bosluk[bosluks]=len+1;
	
	//for(i1=0;i1<=sayac;i1++) printf("%d ",bosluk[i1]);
	
	for(i1=0;i1<=sayac;i1++){
		kelimes1=0;
		for(;i2<bosluk[i1];i2++){
			kelimeler[i1][kelimes1]=anadizi[i2];
			kelimes1++;
		}
		kelimeler[i1][kelimes1]='\0';
		i2++;
	}
	
	/*kelimes1=0;
	for(;i2<(len+1);i2++){
	kelimeler[i1-1][kelimes1]=anadizi[i2-1];
	kelimes1++;
	}*/
	
	kelimeler[i1][kelimes1]='\0';
	
	for(int i1=0;i1<=(sayac+1);i1++)
	{
		for (int j=0;kelimeler[i1][j]!='\0';j++ ){
			printf("%c",kelimeler[i1][j]);	
		}
		printf("\n");
		
	}
	
	printf("bir harf ver : ");
	scanf("%c",&harf);
	
	for (i1=0;i1<(sayac+1);i1++){
		if(kelimeler[i1][0]==harf){
			printf("%s ",kelimeler[i1]);
		}
	}
	
	
	
	
return 0;
}
