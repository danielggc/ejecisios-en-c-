
#include <stdio.h>

void main(){

  char datosIntput[10][1000];
  
  for(int i =0 ;  i < 3 ; i ++ ){
    gets(datosIntput[i]);
  }
  
  for(int i =0 ;  i < 3 ; i ++ ){
    printf("\n%s",datosIntput[i]);
  }

}
