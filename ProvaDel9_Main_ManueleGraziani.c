#include <stdio.h>
#include "ProvaDel9.h"

#define FactorSize 4
#define MProductSize 8

int main(){

	// Dichiarazione Variabili 
	int FirstFactor	 = 0,  NRFFactor	= 0;
	int SecondFactor = 0,  NRSFactor	= 0;
	int MProduct	 = 0,  NRMProduct	= 0;
	
	printf("PROVA DEL NOVE \n");
	printf("Developed by Manuele Graziani\n\n");

	// Assegnazione valori tramite STDIN
	
	printf("Inserisci il primo fattore della moltiplicazione: ");
	FirstFactor	= User_Input(FactorSize);

	printf("Inserisci il secondo fattore della moltiplicazione: ");
	SecondFactor	= User_Input(FactorSize);

	printf("Inserisci il prodotto della moltiplicazione: ");
	MProduct	= User_Input(MProductSize);
			
		
//	printf("\n Valori Inseriti %d ; %d ; %d \n", FirstFactor, SecondFactor, MProduct );
	
	
	// Calcolo della Radice Numerica dei valori forniti in input
	NRFFactor  = Numeric_Root(FirstFactor);
	NRSFactor  = Numeric_Root(SecondFactor);
	NRMProduct = Numeric_Root(MProduct);
	printf("\nRadice Numerica Fattore 1° =  %d ; Fattore 2° =  %d ; Prodotto = %d \n", NRFFactor, NRSFactor, NRMProduct);
	printf("----------------------------------------------------- \n");


	return Value_Comparison(NRFFactor,NRSFactor,NRMProduct);

}
