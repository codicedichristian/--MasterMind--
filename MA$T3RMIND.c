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
	char SecretString[5]; //QUESTO ARRAY INVECE SALVERA' LA STRINGA RANDOM GENERATA
	srand(time(NULL)); //Funzione che permette il funzionamento della funzione random 

	printf("Scegli di giocare con un codice da 1 a 5 cifre\n");
	scanf("%d",&CodeLenght);
    
	printf("\nLa sequenza segreta e'\n\n");

		for(i=0; i<CodeLenght; i++){  
        SecretString[i]=SecretStringColours[rand()%(sizeof SecretStringColours)];
        }
    printf("\n%s",&SecretString);  //stampo la sequenza random
    
	printf("\nINSERISCI LA TUA IPOTESI-RICORDA DI INSERIRE IN MAIUSCOLO\n\n");

    char DigitatedSequence[sizeof CodeLenght]; 
    scanf("%s", DigitatedSequence);
   

    int ComparingVariable=0;

	for(i = 0; i < CodeLenght; i++)
    {
        printf("Giro della lettera n: %d\n",i);
		for(j=0; j<CodeLenght; j++)
        {
            printf("\nconfronto tra %c e %C \n", SecretString[i], DigitatedSequence[j]);
            if(SecretString[i] == DigitatedSequence[j]) //FACCIO IL CONFRONTO
            {
                printf("Esito positivo tra %c e %c \n", SecretString[i], DigitatedSequence[j]);
				ComparingVariable += 1;
				printf("\nIl valore e'%d\n",ComparingVariable);//METTO LA STAMPA PER AVERE SOTT'OCCHIO DOVE LA VARIABILE ASSUME IL VALORE E PERCHE'
                //break;
            }
            else {
                printf("Esito negativo tra %c e %c\n ", SecretString[i], DigitatedSequence[j]);	
                printf("\nIl valore e'%d\n",ComparingVariable);//METTO LA STAMPA PER AVERE SOTT'OCCHIO DOVE LA VARIABILE ASSUME IL VALORE E PERCHE'
			}
	    }
    }
    printf("\nIl valore finale assunto e'%d\n",ComparingVariable); //QUESTA STAMPA E' PER CAPIRE CHE VALORE ASSUME COMPARING VARIABLE. A QUANTO PARE IL BUG E' NEL VALORE CHE DOVREBBE O MENO ASSUMERE QUESTA VARIABILE.
	if(ComparingVariable == CodeLenght)
    {
        printf("\nHai indovinato il codice segreto :)");
    }
    else
    {
        printf("\nIl codice digitato non corrisponde, sei scarso.");
    }

return 0;
}

//AGGIORNAMNETI: IL PROGRAMMA SEMBRA FUNZIONARE MA BISOGNA SISTEMARE ALCUNI BUG. RESTA DA CREARE DEI CONTATORI CHE GIOCANDO CON I CONTI STABILIRANNO L'ESISTENZA O MENO E LA QUANTITA'
// DEI PIOLI NERI E BIANCHI PER AVERE UNA LINEA GUIDA NELLO SVOLGIMENTO DEL GIOCO.



