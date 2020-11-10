#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "ProvaDel9.h"


int  User_Input(int Size){

        int  UserInput = 0  , ExitValue = -1; 
        char Buffer[10] = "\0" , *endptr  = NULL;
	
        do{
				
		if( Size == 4)
			scanf("%5s",Buffer); /*Legge solamente i primi cinque caratteri inseriti dall'utente impendendo 
					       overflow del Buffer (il primo carattere è riservato per il segno)*/
		else
			scanf("%9s",Buffer);

		for(int i=0;i<10;i++)
		printf("Buffer[%d] %c : %d \n",i, Buffer[i],Buffer[i]);

                if(getchar() == '\n'){

                        errno = 0;

               		UserInput = (int) strtol (Buffer,&endptr, 10);

			if(UserInput > 9999 && Size == 4 || UserInput > 99999999 && Size == 8){
				printf("Errore, valore inserito superiore alla dimensione massima consentitai di: %d cifre. Riprovare!!\n",Size);
				ExitValue = -1;
			}else
				ExitValue = 0;

                        //Controllo sui possibili errori
		
                        if(errno != 0){
                                printf("Error: strtol %d",errno);
                                exit(EXIT_FAILURE);
                        }


                        if(*endptr != '\0'){
                                printf("Per favore inserire valori appartenenti all'insieme N\n\n");
                                ExitValue = -1;
                        }



                }else{

                        printf("Errore, valore inserito superiore alla dimensione massima consentitai di: %d cifre. Riprovare!!\n",Size);
                        while(getchar() != '\n'); /*Nell’eventualità di un input di dimensioni maggiori di due caratteri, i caratteri 
                                                   in eccesso verranno cancellati fino al raggiungimento dell’carattere terminazione*/

                        ExitValue = -1;

                }




        }while(ExitValue == -1);

        return UserInput;
}
