
//Introducción a CodeBlocks
//Dentro de tu código puedes utilizar 2 barras para escribir comentarios, procura no utilizar acentos.

#include <iostream>
//La funcion include nos permite agregar librerias en nuestro programa

using namespace std;
//Esta funcion nos permite utilizar funciones para imprimir datos en pantalla.

int main () //Esta funcion es la primpial (main) donde escribiremos todo nuestro codigo.
{
    cout<<"Hola mundo \n"; //La funcion COUT  permite imprimir texto en pantalla una vez ejecutado el programa
    int Entero=5; //Esta es la primera variable y es un entero
    double Double=10.70; //tipo double
    float Flotante=20.893; //tipo float
    char Letra='a'; //tipo char

    cout<<"Integer: "   << Entero   << "\n" //Imprime el entero
        <<"Double: "    << Double   << "\n" //Imprime el double
        <<"Float: "     << Flotante << "\n" //Imprime el flotante
        <<"Character: " << Letra    << "\n"; //Imprime la letra

    return 0;
}
