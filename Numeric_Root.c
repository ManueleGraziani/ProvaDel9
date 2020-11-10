#include <stdio.h>
#include "ProvaDel9.h"


// Dichiarazione Funzione
int Numeric_Root_Cycle(int);

int Numeric_Root(int Value){
	
	// Dichiarazione delle variabili
	int RM = 0;
	
	if(Value < -9 || Value > 9){

		RM = Numeric_Root_Cycle(Value);/*viene calcolata la radice numerica
						 del valore inserito dall'utente  */
		while(RM < -9 || RM > 9){
			printf("Ricalcolo radice numerica.....");
			RM = Numeric_Root_Cycle(RM);	
		}

	}else
		RM = Value;


	return RM;
}

// Implementazione della Funzione
int Numeric_Root_Cycle(int Value){
	
	int Num = 0, RM = 0;
	printf("\nLa radice numerica di (%d) è ugale a:", Value);

	while(Value <= -1 || Value >= 1){

		Num = Value%10;	
		RM = RM + Value%10;
		Value = Value/10;

		printf(" + (%d)", Num);
	}

	printf(" = %d \n", RM);

	return RM;
}


