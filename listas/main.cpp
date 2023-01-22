#include <cstddef>
#include <iostream>
#include <cstdlib>
using namespace std;
 struct data{
    string nombre;
 };

  typedef data Elemento;

  class Nodo{
      public:
        Elemento elemento;
        Nodo *Sig;      
  };

class ListasS{
    public:
    void insetarcabezaLista( Nodo * cabeza_ptr , Elemento entrada ){

        Nodo * nuevoElemento = new Nodo() ;
        nuevoElemento-> elemento = entrada;
        nuevoElemento -> Sig = cabeza_ptr;
        cabeza_ptr->Sig = nuevoElemento;
        cout<<"\n elemento" << entrada.nombre << " insetadoa a pila ";

    }
};

int main(){
    ListasS listasS ;
    string nombre;
    cout<<"digite un numero\n";
    Nodo * cabeza  = NULL;
    int contador = 0;
    while (cin>>nombre) {
        cin>>nombre;
        cout<<"digite un numero\n";
        Elemento elemento;
        elemento . nombre = nombre;
        listasS.insetarcabezaLista( cabeza , elemento );
    }
    
    
    
    
}

