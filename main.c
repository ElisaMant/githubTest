/******************************************************************************

Primo esercizio: 
- Crea un numero intero 
- Crea il puntatore della variabile 
- Fai puntare al puntatore l'indirizzo della variabile
- Cambia il valore della variabile e stampala 
- Cambia il valore della variabile tramite puntatore e stampa il nuovo valore
- Crea una seconda variabile intera e stampala
- Scambia i due valori usando i puntatori all'interno di una function. 
  La funzione deve ricevere come input i due puntatori. Stampa le variabili 
  esternamente alla funzione e all'interno del main 

*******************************************************************************/

#include <stdio.h>

// Definizione delle function utilizzate 
void scambio(int *x, int *y); 


// Routine principale
int main()
{
    // Definizione delle variabili 
    int var1 = 42; 
    int var2 = 15;
    
    // Definizione dei puntatori associati alle variabili
    int *puntatore1 = &var1; 
    int *puntatore2 = &var2; 
    
    // Stampa l'indirizzo di memoria 
    printf("Indirizzo della prima variabile var1 = %d. \n", puntatore1); 
    printf("Indirizzo della seconda variabile var2 = %d. \n", puntatore2);
    
    // Stampa il valore della variabile associata 
    printf("Valore di var1 = %d. \n", *puntatore1);
    printf("Valore di var2 = %d. \n", *puntatore2); 
    
    // Modifica il valore della prima variabile 
    var1 = 3; 
    printf("Modifica manuale var1: %d. \n", var1); 
    
    // Modifica il valore della prima variabile usando il puntatore
    *puntatore1 = 6; 
    printf("Modifica tramite puntatore di var1: %d. \n", var1); 
    
    // Richiama la function per lo scambio dei valori usando i puntatori 
    scambio(puntatore1, puntatore2); 
    printf("post function var1: %d. \n", var1); 
    printf("post function var2: %d. \n", var2); 
    
    
    return 0;
}





// Function e sottoprogrammi 
void scambio(int *x, int *y){
    
    /* Variabili di input 
    x : puntatore della prima variabile
    y : puntatore della seconda variabile 
    */
    
    int z; // Variabile di lavoro 
    
    z = *x; 
    *x = *y; 
    *y = z; 
}

