 
#include <iostream>
using namespace std;
 
// function to convert decimal to binary
int  decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    int counter= 0;
    int resultado = 0;
    bool abertura = false;
    bool cerradura = false;

    while (n > 0) {

        binaryNum[i] = n % 2;
        if( n%2 == 1){
            if( abertura == true && cerradura == false)
            {
                cerradura = true;
            }else{
                if( abertura == false){
                    abertura = true;
                    counter = 0 ;
                }            
            }
            if( abertura == true && cerradura == true ){
                if( counter > resultado ){
                    resultado = counter;
                }
                counter = 0 ;
            }
   
        }
        if( n%2 == 0 ){
            counter++;
        }
        n = n / 2;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];

    cout<< "\n El catidad mayor es : " << resultado ;
    return resultado;
}
 

 int main (){
    
    while( 1 ){
        cout<< "\ningrese un numero  \n";
        int d;
        cin >> d;
        decToBinary(d);
        
    }
 }