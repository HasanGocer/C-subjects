#include <stdio.h>
int main(){
	int i1,s1,top = 0;
	
	printf("sayi ver lan\n");
	scanf("%d",&s1);
	
	for(i1=0;i1<=s1;i1++){
		top= i1 + top;
		printf("%d\n",i1);
	}
	
	printf("toplam %d",top);
	
	
	
	
	
	
	
	return 0;
}
