#include <iostream>
#include <cstddef>
#include <cstring>
#include<vector>
using namespace std;
int diagonalDifference(vector<vector<int>> arr) ;

int main (){

    vector<vector<int>> data = {{11,2,4},
                                {4,5,6},
                                {10,8,-12},
                                };
    diagonalDifference( data );

}


int diagonalDifference(vector<vector<int>> arr) {
    int primeraD = 0;
    int segundaD = 0;
    const int tamanno =  arr.size();
    for( int i =0; i < tamanno; i++  ){
        primeraD += arr[i][i];
        segundaD += arr[i][ tamanno -i -1];
        
    }
    const int  data = (primeraD -segundaD);
    int resultado =   data  < 0 ? -data  : data;
    cout<< "primera Diagonal : "<< primeraD << " segunda diagonal" << segundaD
    <<"diferencia "<<resultado;

    return 0;
}

