#include <cstddef>
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <iostream>
using namespace std;



typedef int Elemento ;

class Nodo{
      public:
        Elemento elemento;
        Nodo *Sig;      
  };

class ListasS{
    public:
    void insetarcabezaLista( Nodo *&cabeza_ptr , Elemento entrada ){
        
        Nodo * nuevoElemento = new Nodo() ;
        nuevoElemento -> elemento = entrada;
        nuevoElemento -> Sig = cabeza_ptr;
        cabeza_ptr = nuevoElemento;
        printf("\n elemento : [%d] insertado  a pila \n",entrada);

    }

    void recorrerLista( Nodo * cabeza_ptr ){
        
        Nodo * p = cabeza_ptr;
        printf("Data: [");
        while ( p != NULL ) {
            printf("\n%d",p->elemento);
            p = p->Sig;
        }
        printf("\n]\n");
    }

    int sacar( Nodo *&cabeza_ptr ){
        Nodo * indise = cabeza_ptr;
        Elemento data = 0 ;
        if( cabeza_ptr == NULL ){
            printf("\nla pila ya esta vacia\n");
        }
        else{
            data =  indise->elemento ;
            printf("\nsacando elemento : [%d] de la pila\n", data );
            cabeza_ptr = indise->Sig;
            delete indise;
        }
        return data;
    }
    
};

int main(){
    ListasS lista_base ;
    char nombre[20];
    printf("\ndigite un numero\n");
    Nodo * cabeza  = NULL ;
    int contador = 0;
    Elemento elemento  ;
    char data;
    Elemento resultado = 0 ;
    while (cin.get(data) ) {
        printf("hola comensadon con -----> %c",data );
        resultado = 0;
        while( data == ' ' ){
            cin.get(data);
        }
        if( data == '+'){
             resultado = lista_base.sacar( cabeza ) +  lista_base.sacar( cabeza );
             printf("\nhola por aca en la suma \n");
        }
        if( data == '-'){
             printf("\nhola por aca en la resta\n");
             resultado = lista_base.sacar( cabeza ) -  lista_base.sacar( cabeza );
        }

        while ( data >= '0' && data <= '9') {
            resultado = resultado * 10 + (  data - '0');
            cin.get(data);
        }
        if( resultado != 0 ){
            lista_base.insetarcabezaLista( cabeza, resultado );
        }

    }
    
    
    
    
}

