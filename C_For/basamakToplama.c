#include <stdio.h>
int main(){
	int sayi,top=0,kal;
	printf("sayı ver : ");
	scanf("%d",&sayi);
	
	while(sayi != 0)
	{
		kal=sayi%10;
		top=top+kal;
		sayi=sayi/10;
		
		
	}
	printf("basamag toblami:%d",top);
	
	
	return 0;
}
