#include <iostream> //La libreria iostream nos permite tener entradas y salidas.
#include<ctime> //La libreria ctime nos permite tener funciones para obtener el tiempo de ejecucion.

using namespace std; //Requisito de funciones de iostream

int main()
{
    clock_t t; //Inicializamos la variable t para utilizar la funcion clock_t.
    t=clock(); // Obtenemos la hora del ordenador y la almacenamos en la variable t (Hora de inicio del programa).
    t=clock()-t; // Obtenemos la hora al finalizar el programa y con la resta obtenemos un intervalo de tiempo.

    t=clock(); // Hora de inicio del programa

    float A, B, operation, result;
    cout<<"Enter the first number: ";
    cin>>A;
    cout<<"Enter the second number: ";
    cin>>B;
    cout<<"Operation to execute:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n Operation selected: ";
    cin>>operation;

    if(operation == 1) //Addition
    {
        result=A+B;
        cout<<"The result is: "<<result<<endl;
    }
    else
    {
        if(operation == 2) //Subtraction
        {
            result=A-B;
            cout<<"The result is: "<<result<<endl;
        }
        else
        {
            if(operation == 3) //Multiplication
            {
                result=A*B;
                cout<<"The result is: "<<result<<endl;
            }
            else
            {
                cout<<"Invalid operation\n"; // Other number
            }
        }
    }
    t=clock()-t; //Hora al finalizar el programa
    cout<<"The calculator's execution time was: "<<float(t)/CLOCKS_PER_SEC<<" seconds\n"; //Prints time
}

