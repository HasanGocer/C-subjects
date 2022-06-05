#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	char dizi1[255];
	gets(dizi1);
	int len2,sayac=0;
	int len =strlen(dizi1);
	
	if(len%2==0){
		len2=len/2;
	}
	else{
		len2=len;
		len2--;
		len2=len2/2;
	}
	len--;
	
	for(int s1=0;s1<len2;s1++){
		if(dizi1[s1]==dizi1[len-s1]){
			sayac++;
		}
	}
	if(sayac==len2){
		printf("polidrom");
	}
	else{
		printf("degil");
	}
	
	
	
	return 0;
}
