#include <stdio.h>
int main(){
	
	int dizi1[50];
	int i1=0,i2=25,toplam=0;
	for(i1=0;i1<i2;i1++){
		dizi1[i1]=i1+1;
		dizi1[i1+25]=dizi1[i1]*2;
	}
	for(i1=0;i1<50;i1++){
		printf("%d\n",dizi1[i1]);
	}
	for(i1=0;i1<50;i1++){
		toplam=toplam+dizi1[i1];
	}
	printf("%d",toplam);
	
	
	
	
	
	
	
	
	
	return 0;
}
