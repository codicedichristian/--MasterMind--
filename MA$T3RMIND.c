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
   // getch();



     //for(i=0; i<CodeLenght; i++)
    //{
        //scanf("%c", &SecretStringColours[i]); 
		//scanf("%c", &DigitatedSequence[i]);
   // }


    int ComparingVariable=0;

	for(i = 0; i < CodeLenght; i++)
    {
        printf("Giro della lettera n: %d\n",i);
		for(j=0; j<CodeLenght; j++) 
        {
            printf("confronto tra %c e %c \n", SecretStringColours[i], DigitatedSequence[j]);
            if(SecretStringColours[i] == DigitatedSequence[j])
            {
                printf("\nEsito positivo tra %c e %c \n", SecretStringColours[i], DigitatedSequence[j]);
				ComparingVariable += 1;
                break;
            }
        }
    }
    if(ComparingVariable == CodeLenght + 1)
    {
        printf("Hai indovinato il codice segreto :)");
    }
    else
    {
        printf("Il codice digitato non corrisponde, sei scarso.");
    }

return 0;
}




