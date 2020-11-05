#include <stdio.h>
#include "ProvaDel9.h"

int Value_Comparison(int RMFFactor, int RMSFactor, int RMMProduct){
	
	// Dichiarazione variabili locali
	int RMMulti = 0;
	
	RMMulti = RMFFactor * RMSFactor;
	printf("\nMoltiplicazione: %d * %d = %d",RMFFactor,RMSFactor,RMMulti);

	RMMulti = Numeric_Root(RMMulti);

	printf("\nESITO PROVA DEL NOVE: ");
	if(RMMulti == RMMProduct){
		printf("il risultato forse è giusto \n");
		return 0;
	}else{
		printf("il risultato è sicuramente errato \n");
		return 1;
	}

}
