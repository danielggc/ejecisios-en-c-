 #include <cstddef>
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

 struct Data{
    char nombre[20];
 };

typedef Data Elemento ;
class Nodo{
      public:
        Elemento elemento;
        Nodo *Sig;      
  };

class ImplColo{
    public:
        void insertarCola( Nodo *& frente, Nodo *&fin , Elemento elemento){
            Nodo  * nuevoNodo = new Nodo();
            nuevoNodo->elemento = elemento;
            nuevoNodo->Sig = fin;
            if( ListaVacia( frente ) ){
                frente =  nuevoNodo;
                printf("es vacia ???");
            }
             fin = nuevoNodo;
        }

        bool ListaVacia( Nodo * frente ){
            return  ( frente == NULL ) ?  true : false;
        }

        void recorrerLista( Nodo * fin ){
            
            Nodo * p = fin;
            printf("Data: [");
            while ( p != NULL ) {
                printf("\n%s",p->elemento.nombre);
                p = p->Sig;
            }
            printf("\n]\n");
        }
};

int main(){
    ImplColo colas ;
    char nombre[20];
    printf("\ndigite un numero\n");
    Nodo * frente  = NULL ;
    Nodo * fin  = NULL ;
    int contador = 0;
    Elemento elemento  ;
    while ( scanf("%s",nombre ) ) {
        strncpy(elemento.nombre, nombre, 20 );
        colas.insertarCola( frente,fin , elemento );
        colas.recorrerLista( fin );
    }

}