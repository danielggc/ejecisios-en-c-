#include "iostream"

using namespace std;
int mcd( int , int );
int main(){
    int x , y ;
    cout <<  " ingrese dos numeros ";
    while( cin >> x  && cin >> y  ){
        if( x > 0 && y > 0 ){
            cout << '\n' << x << " , " << y << " \n, mcd = "<< mcd( x, y);
        }
    };
}



int mcd( int d , int b ){
    
    while(  d > 0 ) {
        if( d < b){ int t = d ; d = b; b = t; }
        d = d - b ;
        cout <<"  = " << d << " ,  "  << b ;
    }
    return b;
}