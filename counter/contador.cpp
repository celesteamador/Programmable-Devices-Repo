//This program counts from 0 to 100 en steps of 5
#include <iostream>

using namespace std;

int main()
{
    int initial_value=0, final_value=100, step=5;
    for(int i=initial_value;i<=final_value;i=i+step)
    {
        cout<<i<<endl;
    }
return 0;
}
