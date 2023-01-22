#include <cstddef>
#include <cstring>
#include <iostream>
#include<vector>
using namespace std;
int solution(int *A, int K);

int caculoPosiciones( int  movimientos, int tamanno);

int caculoArry( int  movimientos, int tamanno);

vector<int> solution(vector<int> &A, int K) ;

int main(){

   int * aP = new int[5]{ 1, 2, 3, 4, 5};
   vector<int> data {1, 2, 3, 4, 5};
   int  K = 5;
    solution( data,  K);
}


int solution(int *A, int K){
    int * punteroA = A  ;
    int contador =0;
    while ( *punteroA++ ) contador++;
    int * cadenaResultado = new int[contador];
    int posicionesDesplasar = caculoPosiciones( K , contador );
    
    for( int i = 0 ; i < contador  ; i++ ){
        cadenaResultado[i] = A[ caculoPosiciones( contador - posicionesDesplasar + i, contador )];
        cout <<cadenaResultado[i]<<"\n";
    }
    return 2;
}


vector<int> solution(vector<int> &A, int K) {
    
    int contador = A.size();
    vector<int>  cadenaResultado (contador,0);
    int posicionesDesplasar = caculoPosiciones( K , contador );
    for( int i = 0 ; i < contador  ; i++ ){
        cadenaResultado[i] = A[ caculoPosiciones( contador - posicionesDesplasar + i, contador )];
        cout <<cadenaResultado[i]<<"\n";
    }
    return A;
}



int caculoPosiciones( int  movimientos, int tamanno){
    if( movimientos >= tamanno ){
          return movimientos%tamanno;
    }else{
        return movimientos;
    }
}


