
#include <iostream>
#include<vector>
#include <string>


using namespace std;


enum EstadoClientes{
    moroso,
    atrasado,
    pagado,
};

enum Moneda{
    dolar,
    pesoColombiano,
};

struct Produto{
    char * nombreProducto ;
    int idProducto;
    float precio ;
    Moneda moneda;
} motor{ "motor dc", 0,  9 , dolar  },
  elices{ "elices drone " , 1, 15000, pesoColombiano},
  ecs{ "controlador velocidad" , 2, 32000 , pesoColombiano }  
  ;

Produto produto1 [3] = { motor, ecs , elices };
Produto produto2 [3] = { motor, ecs };



struct InfoClientes{
    EstadoClientes estado;
    char *nombreCliente;
    float abonado;
    Moneda moneda  ;
    Produto *produto  ;
    
} cl[2]  =  {
        { atrasado , " daniel" , 0 , pesoColombiano, produto1} ,
        { moroso, "yetu" , 12, pesoColombiano,  produto2}
    };



void imprimirFacturaClientes( EstadoClientes &estado ) {


};
int main (){

}