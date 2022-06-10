#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
 int main (){

    printf("I COLORI A DISPOSIZIONE SONO QUESTI:\n\n");	

    printf("RED--> R\n");	
    printf("YELLOW--> Y\n");
	printf("WHITE--> W\n");     //Legenda colori
	printf("PINK--> P\n");     
	printf("BLUE--> B\n");
	printf("GREEN--> G\n\n"); 


	char SecretStringColours [6] = {'R','Y','W','P','B','G'};  //Creo la struttura contenente i colori
	int i;
	int j;
    int CodeLenght;
	char SecretString[5];
	srand(time(NULL)); //Funzione che permette il funzionamento della funzione random 

	printf("Scegli di giocare con un codice da 1 a 5 cifre\n");
	scanf("%d",&CodeLenght);
    
	printf("La sequenza segreta e'\n\n");

		for(i=0; i<CodeLenght; i++){  
        SecretString[i]=SecretStringColours[rand()%(sizeof SecretStringColours)];
        }
    printf("%s\n",&SecretString);  //stampo la sequenza random
    
	printf("INSERISCI LA TUA IPOTESI\n");

    char DigitatedSequence[sizeof CodeLenght]; 
    scanf("%s", DigitatedSequence);
   

    int ComparingVariable=1;

	for(i = 0; i < CodeLenght; i++)
    {
        printf("Giro della lettera n: %d\n",i);
		for(j=0; j<CodeLenght; j++)
        {
            printf("confronto tra %c e %C \n", SecretString[i], DigitatedSequence[j]);
            if(SecretString[i] == DigitatedSequence[j]) //FAccio il confronto
            {
                //printf("\nEsito positivo tra %c e %c \n", SecretString[i], DigitatedSequence[j]);
				ComparingVariable += 1;
                //break;
            }
            else {
                printf("\nEsito negativo tra %c e %c ", SecretString[i], DigitatedSequence[j]);	
			}
	    }
    }
    if(ComparingVariable == CodeLenght)
    {
        printf("Hai indovinato il codice segreto :)");
    }
    else
    {
        printf("Il codice digitato non corrisponde, sei scarso.");
    }

return 0;
}





