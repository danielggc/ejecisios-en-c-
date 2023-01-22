#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
void intercambia(int a[] , int d ,int f );
int max_of_four(int dataInput[5] );
int main() {
    int dataInput[6];
    scanf("%d %d %d %d", &dataInput[0],&dataInput[1], &dataInput[2] , &dataInput[3]);
    int ans = max_of_four(dataInput);
    printf("%d", ans);
    for(int d = 0 ; d < 4 ;  d ++ ){
      //printf("\n -> %d",dataInput[d]);
    }
    return 0;
}




int max_of_four(int dataInput[] ){
  for( int i  = 0 ; i < 4 ; i++){
    if(  dataInput[i+1] < dataInput[i] && i != 3 ){
      intercambia(dataInput,i,i+1);
      max_of_four(dataInput);
    }
  }
  return(   dataInput[3] );
}

void intercambia(int a[], int d , int f){                            
   int c;                   
   c=a[d];
   a[d]=a[f];
   a[f]=c;
}
