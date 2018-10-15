#include<stdio.h>
int main(){
	int base,altezza,area;
	printf("Inserisci la base del triangolo :\n");
	scanf("%d",&base);
	printf("Inserisci l'altezza del triangolo :\n");
	scanf("%d",&altezza);
	area=base*altezza;
	printf("L'area del triangolo e' : %d",area);	
	return 0;
}
