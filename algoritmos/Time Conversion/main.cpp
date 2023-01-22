#include "iostream"
#include "string"
#include <cstddef>
#include <string>
#include <cstring>  


using namespace std;
string timeConversion(string s) ;
int main(){
    string data = "12:45:54PM";
    timeConversion( data );
}
int  valueTime( int time ){
    if(time == 12 )
    return 12;
    else  return time +12 ;
}

string timeConversion(string s) {
    int tamanno = sizeof( s ) / sizeof(s[0]);
    string time = " ";
    
    if( s.find("PM") != string::npos ){
        time  =( to_string( 
                valueTime( stoi(
                 s.substr( 0 , s.find( ":" )
                  )
                ) )
            ) + s.substr(
                 s.find (':' )
                 )).substr( 0, s.find("PM"));
        cout<<" : hour ->   : "<< time <<"\n";              
    }
    if( s.find("AM") != string::npos ){
        if( stoi( s.substr( 0 , s.find( ":" ))) == 12){
            time  =(  "00" + s.substr( s.find (':' ))).substr( 0, s.find("AM"));
            cout<< "- >" << time;
        }
        else{
            time = s.substr( 0, s.find( "AM" ) );
            cout<< " -> " << time;
        }
    }
    

    return time;
}