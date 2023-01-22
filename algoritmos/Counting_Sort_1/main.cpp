#include <cstddef>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
vector<int> countingSort(vector<int> arr);
int main(){
    vector<int> arr {6 , 5 , 7 , 1 , 9 , 7 , 5 ,8 ,0 ,10 ,0,0,0 };
    countingSort( arr );
}


vector<int> countingSort(vector<int> arr) {
    const  int tamanno = arr.size();    
    int mayor = 0;

    vector<int> data(1, 0) ;
    for ( int a =0 ; a < tamanno; a ++){
        if( mayor < arr[a]){
            mayor = arr[a];
            data.resize(mayor+1);
            cout<<data.size()<<"\n";
        }
        data[arr[a]]  = data[arr[a]] + 1;
    }
    for ( int a =0 ; a < mayor; a ++){
        cout<<"->"<<data[a];
    }
    return  data;
    

}


vector<int> countingSort2(vector<int> arr) {
    const  int tamanno = arr.size();    
    int mayor = 0;
    for ( int a =0 ; a < tamanno; a ++){
        if( arr[a] > mayor ){
            mayor = arr [a];
        }
    }
    vector<int> data(mayor+1, 0) ;
    for ( int a =0 ; a < tamanno; a ++){
        data[arr[a]] = data[arr[a]] + 1;
    }
    for ( int a =0 ; a < mayor; a ++){
        cout<<"->"<<data[a];
    }
    
    return  data;
    

}
