#include <iostream>
using namespace std;
int getOddOccurrence(int ar[], int ar_size);
int main (){
     int ar[] = {20, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 20};
    int n = sizeof(ar)/sizeof(ar[0]);
     
    // Function calling
    cout << getOddOccurrence(ar, n);
    return 1 ;
}


int getOddOccurrence(int ar[], int ar_size){
    int respuesta = 0; 
    for( int i = 0; i< ar_size; i++){
        cout<<"  "<< ar[i]<< " : " << respuesta;
        respuesta = respuesta ^ ar[i];
        cout<<" -> "<<respuesta<<"\n";
    }
    return  respuesta;
}