#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <time.h>
//musteri isimli bir struct oluşturun.
// icinde int harcanPara, int alınanMal, char isim. olacak.
// mainin içinde pointerlı bir müsteri değişkeni oluşturun. normal müsteri değişkenine eşitleyin.
// müşteri değişkenini pointerlı struct ile doldurun.
//  pointersız structyi yazdırın.

struct HG
{
	int  harcananPara;
	int  alinanMal;
	char isim[30];
}HHG;

int main()
{
	
	HG *PHG=&HHG;
	
	printf("müsteri ismi : ");
	gets(PHG->isim);
	
	printf("alınan mal : ");
	scanf("%d",&PHG->alinanMal);
	
	printf("harcanan para : ");
	scanf("%d",&PHG->harcananPara);
	
	printf("müsteri ismi : %s\nalınan mal : %d\nharcanan para : %d\n",HHG.isim,HHG.alinanMal,HHG.harcananPara);
	
	
	
	
	
	return 0;
}
