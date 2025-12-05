//This program gives the result from the sine, cosine or tangent functions based on the user's election.
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    float value, operation, result;
    string func;
    clock_t t;

    t=clock();
    cout<<"Enter a number: ";
    cin>> value;
    cout<<"Select the function to perform:\n 1.Sine\n 2.Cosine\n 3.Tangent\n Function selected: ";
    cin>> operation;

    if(operation == 1) //Sine
    {
        func = "sine";
        result = sin(value);
        cout<<"The sine of "<<value<<" is "<<result<<endl;
    }
    else
    {
        if(operation == 2) //Cosine
        {
            func = "cosine";
            result = cos(value);
            cout<<"The cosine of "<<value<<" is "<<result<<endl;
        }
        else
        {
            func = "tangent";
            if(operation == 3) //Tangent
            {
                result = tan(value);
                cout<<"The tangent of "<<value<<" is "<<result<<endl;
            }
            else
            {
                func = "program";
                cout<<"Invalid option\n";
            }

        }

    }
    t=clock()-t;
    cout<<"The execution time of the "<<func<<" was: "<<float(t)/CLOCKS_PER_SEC<<" seconds\n";




}
