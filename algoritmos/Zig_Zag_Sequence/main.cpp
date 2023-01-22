#include <iostream>
#include <cstddef>
#include <cstring>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

void findZigZagSequence(vector < int > a, int n){
    sort(a.begin(), a.end());
    n--;
    int mid = (n )/2;
    cout<< "\ntamaño : "<< n << " mitad : "<< mid;
    for( int i  = mid, e = 0 ; e <= mid/2 ; i++ , e++){
        cout << "\nmovimiento" <<a[i] <<"->  "<< a[n - e];
        swap( a[i], a[n  - ( e )  ]);
    }
    cout<<"\n";
    for(int i  = 0;i <= n;  i++ ){
        cout<<" -> " << a[i];
    }
    

}

int main(){
    vector<int> data = { 1 , 2 ,3 , 4 , 5,  6 , 7 };
    findZigZagSequence( data,  data.size() );
}