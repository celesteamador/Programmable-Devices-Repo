//This program gives the result from the sine, cosine or tangent functions based on the user's election.
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    float value, operation, result; //Definiendo variables
    string func; //String para el cambio de nombre al mostrar el tiempo de operacion de acuerdo a la funcion seleccionada.
    clock_t t; //Declaracion de la variable t para almacenar la hora del reloj.

    t=clock(); //Hora de inicio de programa
    cout<<"Enter a number: "; //Usuario ingresa un numero
    cin>> value; //El numero se guarda en la variable value
    cout<<"Select the function to perform:\n 1.Sine\n 2.Cosine\n 3.Tangent\n Function selected: ";  //Menu de seleccion
    cin>> operation; //Se guarda la funcion seleccionada en la variable operation

    if(operation == 1) //Sine == Si se ingresa 1
    {
        func = "sine";
        result = sin(value); //funcion de seno
        cout<<"The sine of "<<value<<" is "<<result<<endl; //Impresion de resultado
    }
    else
    {
        if(operation == 2) //Cosine == si se ingresa 2
        {
            func = "cosine";
            result = cos(value); //funcion de coseno
            cout<<"The cosine of "<<value<<" is "<<result<<endl; //Impresion de resultado
        }
        else
        {
            if(operation == 3) //Tangent == si se ingresa 3
            {
                func = "tangent";
                result = tan(value); //funcion de tangente
                cout<<"The tangent of "<<value<<" is "<<result<<endl; //Impresion de resultado
            }
            else //Si se ingresa cualquier otro numero
            {
                func = "program";
                cout<<"Invalid option\n"; //Opcion invalida
            }

        }

    }
    t=clock()-t; //Tiempo final de ejecucion
    cout<<"The execution time of the "<<func<<" was: "<<float(t)/CLOCKS_PER_SEC<<" seconds\n"; //Impresion de tiempo de ejecucion




}
