#include "stdlib.h"
#include <cstdio>
#include <string>
int *  Insercionlineal( int * data , int size){
    int i , j , aux ;
    
    for( i = 1 ; i < size    ; i ++  ){
        j = i -1 ;
        bool flag  =  false;
        aux =  data[i];
        while (  ( j >= 0 ) &&  !flag ) {
            if( aux < data[j]  ){
                data[ j + 1 ] = data[ j ];
                j--;
            }
            else
                flag = true;
            
        }
        data[ j +1 ] = aux;
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
    int data[] =  {4,21,1,7,15 ,2};
    Insercionlineal(data, 6 );
    imprimirCadena(data, 6);
    
}