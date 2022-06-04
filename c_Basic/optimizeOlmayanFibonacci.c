#include <stdio.h>
int main (){

int s1 = 0,s2 = 1,s5 = 0,s6 = 0,s7 = 0,i1,s4;

printf("kac sayi ilerlesin");
scanf("%d",&s4);

for(i1=1;i1<=s4;i1++){
	s5 = s1;
	s6 = s2;
	s7 = s2 + s1;
	s1 = s6;
	s2 = s7;
	printf("%d\n",s1);
}


return 0;
}
