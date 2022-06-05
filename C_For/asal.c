#include <stdio.h>
int main(){
	int sayac = 0;
	int i,sayi;
	printf("sayi ver\n");
	scanf("%d",&sayi);
	
	
	for(int i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{		
		sayac++;
		}
	}
	if(sayac==0)
	{
		printf("\nsayi asal");
	}
	else
	{
		printf("\nsayi asal degil");
	}	
	return 0;
}
