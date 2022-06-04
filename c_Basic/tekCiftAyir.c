#include <stdio.h>
int main(){
	int i=0,i2=1,i3=0,v;
	
	
	printf("kac tane sayi olacak:");
	scanf("%d",&v);
	int dizi1[v];
	int dizi2[v];
	
	for(i=0;i<v;i++){
		printf("%d. sayinizi veriniz:",i2);
		scanf("%d",&dizi1[i]);
		i2++;
	}
	
	for(i=0;i<v;i++){
		if(dizi1[i]%2==0){
			dizi2[i3]=dizi1[i];
			i3++;
		}
		}
		for(i=0;i<v;i++){
		
		if(dizi1[i]%2==1){
			dizi2[i3]=dizi1[i];
			i3++;
		}
		}
		
	for(i2=0;i2<v;i2++){
	printf("%d ",dizi2[i2]);
}
	
	
	
	
	
	
	return 0;
}
