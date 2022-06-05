#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
	char dizi1[255];
	int rakams=0,harfs=0;
	
	gets(dizi1);
	
	for(int i1=0;dizi1[i1]!='\0';i1++){
		if(isdigit(dizi1[i1])>0){
			rakams++;
		}
		if( isalpha(dizi1[i1])>0){
			harfs++;
		}
		
		
	}
	printf("harf : %d\nrakam : %d",harfs,rakams);
	
	
	
	
	
	
	
	
	

	return 0;	
}
