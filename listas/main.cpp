#include <cstddef>
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

using namespace std;

 struct Data{
    char nombre[20];
 };

typedef Data Elemento ;
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
        printf("\n elemento : [%s] insetadoa a pil\n",entrada.nombre);

    }

    void recorrerLista( Nodo * cabeza_ptr ){
        
        Nodo * p = cabeza_ptr;
        printf("Data: [");
        while ( p != NULL ) {
            printf("\n%s",p->elemento.nombre);
            p = p->Sig;
        }
        printf("\n]\n");
    }
};

int main(){
    ListasS listasS ;
    char nombre[20];
    printf("\ndigite un numero\n");
    Nodo * cabeza  = NULL ;
    int contador = 0;
    Elemento elemento  ;
    while ( scanf("%s",nombre ) ) {
        strncpy(elemento.nombre, nombre, 20 );
        listasS.insetarcabezaLista( cabeza , elemento );
        listasS.recorrerLista( cabeza );
    }
    
    
    
    
}

