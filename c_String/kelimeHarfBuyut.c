#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (){
	char dizi1[255];
	char dizi2[255],dizi3[255];
	
	int deger;
	
	gets(dizi1);
	
	for(int i1=0;i1<strlen(dizi1);i1++){
		if(islower(dizi1[i1])>0){
		}
		else{
			dizi1[i1]=tolower(dizi1[i1]);
		}
	}
	printf("%s\n",dizi1);
	
	for(int i1=0;i1<strlen(dizi1);i1++){
		if(isupper(dizi1[i1])>0){
		}
		else{
			dizi1[i1]=toupper(dizi1[i1]);
		}
	}
	printf("%s",dizi1);
	
	
	
	
	
	
	

	return 0;	
}
