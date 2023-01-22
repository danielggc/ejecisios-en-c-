
#include <iostream>
#include <cstddef>
#include <cstring>
#include <type_traits>
#include<vector>
#include <string>
using namespace std;
int movientos( int );

string caesarCipher(string s, int k ) ;


int main(){
    const string data = "Pz-/aI/J`EvfthGH";
    caesarCipher(data, 66 );
}

int  movientos( int n ){
    if( n  < 26 ){
        return n;
    }
    if( n % 26 != 0 ){
        return  ( n % 26)  ;
    }
    else{
        return 0;
    }
}

string caesarCipher(string s, int k ) {
    int tamanno = s.size();
    char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char a[26];
    cout<<"tamanno"<<tamanno<<"\n";
    for(int i = 0 ; i < 26 ; i++ ){
        a[i] = A[i] +32 ;
    }
    char hash[tamanno] ;
    cout<<"tamaño - > "<< tamanno <<"\n";
    cout<< "\n data = "<< s[0]%97<<"\n";
    for( int i = 0 ; i < tamanno ; i ++ ) {
        if( ( s[i] >= 65 & s[i] < 91 ) |( s[i] >=97 & s[i] <123  ) ){
        if(s[i]<= 90){
            hash[ i ] = A[ movientos ( ( ( s[i] %  65 )  +  k ) )  ];
        }
        else{
            hash[ i ] = a [ movientos ( ( ( s[i] %  97 )  +  k ) )  ];
        }
        }
        else{
            hash[i] = s[i];
        }
        cout<< hash[i]; 
    }
    return hash;
}
