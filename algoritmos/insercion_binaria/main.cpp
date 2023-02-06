#include "stdlib.h"
#include <cstdio>
#include <string>
int *  insercion_binaria( int * data , int size){
    int i ,letf , right  , hub , aux; 
    for(  i = 0 ; i < size ; i ++){
        letf = 0;
        right = i -1;
        aux = data[i];
        while ( letf <= right ) {
            hub = ( letf + right ) / 2 ;

            if( data[ hub ] > aux ){
                right = hub -1 ;
            }
            else {
                letf = hub +1 ;
                }
        }

        for( int e = i - 1; e >=  letf; e-- ){
            data[ e  + 1] = data[e]  ;
            
        }
        data[letf]  = aux; 
    }
    return data;
}
void imprimirCadena( int * data , int size ){
    printf("\ndata  : [ ");
    for ( int i = 0 ; i < size ;i++ ){
        printf(" %d , " , data[i]);
    }
    printf("]\n");
}

int main(){
    
    printf("\nhola este es el ordenamiento de por insercion\n");
    int data[] =  {4,21,7,1,15 ,2};
    insercion_binaria(data, 6 );
    imprimirCadena(data, 6);
    
}