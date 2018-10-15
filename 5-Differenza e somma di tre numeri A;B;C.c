	 #include <stdio.h>
int main(){
	float numero_A,numero_B,numero_C ;
	float differenza_AB,differenza_AB_sommaC, differenza_ABC;
 	 
 	 printf("digita il numero A :\n");
 	 scanf("%g",&numero_A);
 	 
 	 printf("digita il numero B :\n");
 	 scanf("%g",&numero_B);
 	 
 	 printf("digita il numero C :\n");
 	 scanf("%g",&numero_C);
 	 
 	 
 	 differenza_AB =numero_A-numero_B;
 	 differenza_AB_sommaC =differenza_AB+numero_C;
 	 differenza_ABC =differenza_AB-numero_C;
 	 
 	 printf(" A-B e' uguale a :%g\n",differenza_AB);
 	 printf("A-B+C e' uguale a :%g\n",differenza_AB_sommaC);
 	 printf("A-B-C e' uguale a :%g\n",differenza_ABC);
	return 0;
 }
