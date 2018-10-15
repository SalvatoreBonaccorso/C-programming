
 	 #include <stdio.h>
int main(){
	float numero_A,numero_B,numero_C ;
	float somma_AB,somma_AC, somma_BC;
 	 
 	 printf("digita il numero A :\n");
 	 scanf("%g",&numero_A);
 	 
 	 printf("digita il numero B :\n");
 	 scanf("%g",&numero_B);
 	 
 	 printf("digita il numero C :\n");
 	 scanf("%g",&numero_C);
 	 
 	 
 	 somma_AB =numero_A+numero_B;
 	 somma_AC =numero_A+numero_C;
 	 somma_BC =numero_B+numero_C;
 	 
 	 printf("La sommadei due numeri A+B e' uguale a :%g\n",somma_AB);
 	 printf("La sommadei due numeri A+C e' uguale a :%g\n",somma_AC);
 	 printf("La sommadei due numeri B+C e' uguale a :%g\n",somma_BC);
	return 0;
 }
