#include <stdio.h>
#include "ProvaDel9.h"

int Value_Comparison(int NRFFactor, int NRSFactor, int NRMProduct){
	
	// Dichiarazione variabili locali
	int NRMulti = 0;
	
	NRMulti = NRFFactor * NRSFactor;
	printf("\nMoltiplicazione: %d * %d = %d",NRFFactor,NRSFactor,NRMulti);

	NRMulti = Numeric_Root(NRMulti);

	printf("\nESITO PROVA DEL NOVE: ");
	if(NRMulti == NRMProduct){
		printf("il risultato forse è giusto \n");
		return 0;
	}else{
		printf("il risultato è sicuramente errato \n");
		return 1;
	}

}
