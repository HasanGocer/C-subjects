#include <stdio.h>
int main(){
	int i1,i2,i3,i4,s1,s2;
	
	printf("sayi veriniz efenim\n");
	scanf("%d",&s1);
	
	
	for(i1=0;i1<s1;i1++){
		for(i2=0;i2<s1-i1;i2++){
			printf(" ");}
			
			if(i1<s1-1){
				printf("*");}
			if(i1>0&&i1<s1-1){
				printf(" ");
				for(i3=1;i3<i1;i3++){
					printf("  ");
				}
			printf("*");
			}
			if(i1==s1-1){
				for(i4=0;i4<i1+s1;i4++){
					printf("*");
				}
			}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
