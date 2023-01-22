
 
#include <iostream>
using namespace std;
 

void miniMaxSum(int arr[]) {
    int dataMayor = arr[0];
    int dataMenor = arr[0];
    long suma = arr[0];
    for ( int i = 1;  i<5 ;i++  ){
     if( arr[i] < dataMenor ) dataMenor = arr[i];
     if( dataMayor < arr[i]) dataMayor  = arr[i];
     suma = suma + arr[i];
    }
    cout<< suma - dataMayor << " " << suma - dataMenor  ;
    
    
}

int main(){
    int arr[6] = {769082435, 210437958 ,673982045 ,375809214 ,380564127}; 
    miniMaxSum(arr);

}