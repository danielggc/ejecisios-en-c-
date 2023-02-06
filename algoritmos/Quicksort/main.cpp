#include "stdlib.h"
#include <cstdio>
#include <string>

void quicksort( int * cadena,  int init  , int find  ){
    
    int piv, izq = 0 ,der = 0 , med  = 0;

    if( init < find  ){
        piv = cadena[init];
        izq = init;
        der = find;
        while( izq < der ){
        
            while( cadena[der] > piv  && der > izq )
                der --;
            
            if( der > izq ){
                cadena[izq] = cadena[der];
                izq ++ ;
            }

            while( cadena[izq ] < piv   && izq < der)
                izq ++;

            if( izq < der )    {
                cadena[ der ] =   cadena[ izq ];
                der --;
            }

            
            
        }
        cadena[der] = piv;
        med = der;
        quicksort( cadena, init , med -1 );
        quicksort( cadena, med +1  ,find );
        
    }

}

void imprimirCadena( int * data , int size ){
    printf("\ndata  : [ ");
    for ( int i = 0 ; i < size ;i++ ){
        printf(" %d , " , data[i]);
    }
    printf("]\n");
}

int main(){
    int data[] = {7,1,2,5,2,6,16,7};
    quicksort(data, 0 , 7);
    imprimirCadena(data,8);

}