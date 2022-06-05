#include <stdio.h>
void ayristir(int sayi, int* a,int* b,int* c,int* d)
{
	int A1 = (sayi%10);
	int A2 =A1;	
	a=&A2;
	
	int B1=(sayi/10);
	int B2=(B1%10);
	b=&B2;
	
	int C1= (sayi/100);
	int C2= (C1%10);
	c= &C2;
	
	int D1=sayi/1000;
	d= &D1;
	
	printf("\n%d %d %d %d",*a,*b,*c,*d);
}
int main (){
	int sayi;
	printf("4 haneli bir sayı verin");
	scanf("%d",&sayi);
	
	int A1,B1,C1,D1;
	int *a=&A1,*b=&B1,*c=&C1,*d=&D1;
	ayristir(sayi,a,b,c,d);

	
	
	
	
	
	return 0;
}
