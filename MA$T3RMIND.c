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
	srand(time(NULL)); //Funzione che permette il funzionamento della funzione random 

	printf("Scegli di giocare con un codice da 1 a 5 cifre\n");
	scanf("%d",&CodeLenght);

	printf("La sequenza segreta e'\n\n");

		for(i=0; i<CodeLenght; i++){  
        printf("%c\n",SecretStringColours[rand()% (sizeof SecretStringColours /*- 1*/)]); //
        }

    printf("INSERISCI LA TUA IPOTESI\n");

    char DigitatedSequence[sizeof CodeLenght]; 
    scanf("%s", DigitatedSequence);
    getch();



     for(i=0; i<CodeLenght; i++)
    {
        scanf("%c", &SecretStringColours[i]);
    //}

    //for(i=0; i<CodeLenght; i++)
    //{
        scanf("%c", &DigitatedSequence[i]);
    }


    int ComparingVariable=0;

	for(i = 0; i < CodeLenght; i++)
    {
        printf("Confronto n* %d",i);
		for(j=0; j<CodeLenght; j++) 
        {
            if(SecretStringColours[i] == DigitatedSequence[j])
            {
                printf("\nEsito positivo\n");
				ComparingVariable += 1;
                break;
            }
        }
    }
    if(ComparingVariable == CodeLenght)
    {
        printf("SecretStringColours e DigitatedSequence sono uguali :)");
    }
    else
    {
        printf("SecretStringColours e DigitatedSequence non sono uguali :(");
    }

return 0;
}
