#include <stdio.h>
int main(){
	int fac = 1,s1,i1;
	
	printf("sayi ver len");
	scanf("%d",&s1);
	
	for(i1=1;i1<=s1;i1++){
		fac = fac * i1;
	}
	
	printf("%d",fac);
	
	
	
	
	return 0;
}
