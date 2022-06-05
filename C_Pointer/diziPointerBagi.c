#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>
//8 elemanlı bir int dizisi oluşturun.
//kendiniz kullanıcıdan ALMADAN doldurun.
//bir intiger pointer ı oluşturun.
//4. değeri pointera atayın.
// pointerin 2 üstünü 5 düşür.
//pointerin 1 altını pointerı ve 2 üstünü topla.
//pointerı 3 artır.
//pointerın 1 üstünü pointer çarpı pointer 3 üssü.


int main(){
	
	int dizi[8]={1,2,3,4,5,6,7,8};
	
	int *p1=&dizi[3];
	
	*(p1+2)-=5;
	*(p1-1)+= *p1+2;
	*p1+=3;
	*(p1+1)=*(p1)* *(p1+3);
	
	for(int i=0;i<8;i++)
	{
		printf("%d\n",*(p1-3+i));
	}
	return 0;
}
