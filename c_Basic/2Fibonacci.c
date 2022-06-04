#include <stdio.h>
// 2 sayı toplanır toplamı 2ye tam bölünüyorsa 2ye bölerek devam et, bölünmüyorsa toplamıyla devam edeceğin bir fibonacci yap
int main (){
	int s1,s2,s3=0,i2=3;
	
	printf("2 sayi giriniz\n");
	scanf("%d%d",&s1,&s2);
	
	printf("1. sayi=%d\n2. sayi=%d\n",s1,s2);
	
	
	for(int i1=0;i1<13;i1++){
		s3=s1+s2;
		if(s3%2==0){
			s3=s3/2;
			s1=s2;
			s2=s3;
			printf("%d.sayi=%d \n",i2,s2);
		}
		else{
			s1=s2;
			s2=s3;
			printf("%d.sayi=%d\n",i2,s2);
		}
	i2++;	
	}
	
	
	
	
	
	
	
	
	return 0;
}
