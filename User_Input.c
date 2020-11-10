#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include "ProvaDel9.h"

int  User_Input(int Size){

	int  UserInput = 0  , ExitValue = 0, InputSize = 0; 
	
	do{
		errno = 0;
		scanf("%d", &UserInput);
		
		ExitValue = 0;

		if(errno != 0){

			perror("scanf");
			exit(EXIT_FAILURE);
		}
	       
		if(getchar() != '\n'){

			printf("Per favore inserire valori appartenenti all'insieme N\n\n");
			while(getchar() != '\n');
			ExitValue = -1;
		}

		InputSize = 1 + log10(fabs(UserInput));

		if(InputSize > Size){
			printf("Errore, valore inserito superiore alla dimensione massima consentita di: %d cifre. Riprovare!!\n",Size);
			ExitValue = -1;
		}

	}while(ExitValue == -1);

	return UserInput;
}



