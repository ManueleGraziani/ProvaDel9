#include <stdio.h>
#include "ProvaDel9.h"


// Dichiarazione Funzione
int Numeric_Root_Cycle(int);

int Numeric_Root(int Value){
	
	// Dichiarazione delle variabili
	int NR = 0;
	
	if(Value < -9 || Value > 9){

		NR = Numeric_Root_Cycle(Value);/*viene calcolata la radice numerica
						 del valore inserito dall'utente  */
		while(NR < -9 || NR > 9){
			printf("Ricalcolo radice numerica.....");
			NR = Numeric_Root_Cycle(NR);	
		}

	}else
		NR = Value;


	return NR;
}

// Implementazione della Funzione
int Numeric_Root_Cycle(int Value){
	
	int Num = 0, NR = 0;
	printf("\nLa radice numerica di (%d) è ugale a:", Value);

	while(Value <= -1 || Value >= 1){

		Num = Value%10;	
		NR = NR + Value%10;
		Value = Value/10;

		printf(" + (%d)", Num);
	}

	printf(" = %d \n", NR);

	return NR;
}


