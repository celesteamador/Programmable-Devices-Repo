//This program evaluates if a number is prime or not
#include <iostream>

using namespace std;

int main()
{
    int value, divider=2, condition=0, remainder;

    cout<<"Enter a positive integer greater than 2: ";
    cin>>value;

    while(divider<value)
    {
        remainder = value % divider;
        if(remainder == 0)
        {
            condition = 1;
        }
        divider ++;
    }
    if (condition ==1)
    {
        cout<<"Your number is not prime";
    }
    else
    {
        cout<<"Your number is prime";
    }
    return 0;
}

