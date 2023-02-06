#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <iostream>
using namespace std;


void cambiarDatoP(int * d ){
    printf("\nfuncion antes %d",*d);
    d =  new int(30);
    printf("\nluego --> %d",*d);
}

void cambiarDatoP2(int*& d ){
    printf("\nfuncion antes  P2 -> %d",*d);
    d = new int (60);
    printf("\nluego -->  P2 -> %d",*d);
}
int main(){
    int dd = 5;
    int * p_dd  = &dd;
    cambiarDatoP(p_dd);
    printf("\nresultado despues de la cunicon _> %d",*p_dd);
    cambiarDatoP2(p_dd);
    printf("\nreslutado despuse de funcion P2 _> %d",*p_dd);
}