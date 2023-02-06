#include <string.h>
#include <cstdio>
#include <stdio.h>

void imprimirCadena( int * data , int size ){
    printf("\nresult  : [ ");
    for ( int i = 0 ; i < size ;i++ ){
        printf(" %d , " , data[i]);
    }
    printf("]\n");
}


int num_max_list( int * data  ,  int size){
    int num = data[0];
    for( int i = 0; i < size ; i++ )
        if( data[i] >  num )
            num = data[i];
    return num;            
    
}

void reodenar_cadena( int * data , int size , int decima ){
    int  salida [size+ 1];
    int max  =  10;
    int  count[max];

    for( int i = 0;  i < max;  i++ )
        count[i] = 0;

    for( int i = 0;  i < size  ;  i++ ){
//        printf("%d , ",  ( data[i] / decima ) % 10  );
          count[  ( data[i] / decima ) % 10  ] ++ ;
    }
    
    for( int i = 1; i < size  ; i++ )
        count[i] +=  count[ i - 1 ];
    
    for (int i = size -1  ; i >= 0; i--) {
        salida[count[(data[i] / decima) % 10] - 1] = data[i];
        count[(data[i] / decima) % 10]--;
    }
    
    for(int i = 0;  i < size -1    ;i++ ){
        data[i] = salida[i];
    }

    printf("\n data  : [  ");
    
    for( int i  =0 ; i < size ; i++)
        printf("  %d, ", count[i]);
    printf(" ]\n");

}

void radix_sort( int * data , int size ){
    int num = num_max_list( data,  size  );
    
    for (int decima = 1 ; num / decima >0; decima *= 10  ){
        reodenar_cadena(data, size,  decima);
    } 
}

int main(){
    printf("radix Sort");
    int array[ 7 ] = {121, 432, 564, 23, 1, 45, 788};
    radix_sort( array, 7);
    imprimirCadena( array, 7 );
}