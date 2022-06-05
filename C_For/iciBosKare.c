#include <stdio.h>
int main(){
	int i1,i2,i3,s1;
	
	printf("sayi veriniz efenim");
	scanf("%d",&s1);
	
	for(i1=0;i1<=s1;i1++){
		if(i1==0|| i1==s1){
	    for(i2=0;i2<s1;i2++){
		printf("*");}}
		
		else{
		printf("*");
		for(i2=0;i2<(s1-2);i2++){
		printf(" ");
		}printf("*");
		}
		
		printf("\n");
		}
		
		
		
		
	
	
	
	
	
	
	return 0;
}
