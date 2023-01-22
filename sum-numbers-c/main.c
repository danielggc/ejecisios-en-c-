#include <stdio.h>

void main(){
  int numbersInt[4];
  float numbersFloat[4];
  scanf("%d %d",&numbersInt[0],&numbersInt[1]);
  scanf("%f %f",&numbersFloat[0],&numbersFloat[1]);
  printf("%d %d \n",numbersInt[0]+numbersInt[1] ,numbersInt[0]-numbersInt[1]) ;
  printf("%.1f %.1f ",numbersFloat[0]+numbersFloat[1], numbersFloat[0]-numbersFloat[1] );
  
  
}
