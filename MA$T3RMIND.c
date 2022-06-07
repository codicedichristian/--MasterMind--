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
        printf("Confronto n* %d\n",i);
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












   /*int j;
    int N=(CodeLenght + 1); //L'idea è quella di usare un unica variabile in modo da avere la dimensione del codice inzziale uguale a quella che verrà visualizzata della sequenza digitata
    char Seq;
  //algoritmo per l'output della sequenza digitata dal giocatore in input.
    printf("Inserisci il codice ");
    Seq=getchar();
    while(N<=5)
    { 
     DigitatedSequence[N++]=Seq;
     Seq=getchar();
    } 
    for(j=0; j<N; j++){     
	  putchar(DigitatedSequence[j]);
    }  */

