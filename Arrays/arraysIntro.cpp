#include<iostream>
using namespace std;

int main() 
{
    //Declare
    int first[15];

    //Accessing an Array [First Array]
    cout << "First Array -> Value at 0th index: " << first[0] <<endl;

    //Initializing an Array
    int second[5] = {5,4,3,2,1};

    //Accessing an Array [Second Array]
    cout << "Second Array -> Value at 0th index: " << second[2] <<endl;

    //Printing the Array [Third Array]
    int third[15] = {2,7};

    int n = 15;
    cout << "Printing the Array[Third Array] -" <<endl;

    for (int i = 0; i < n; i++ )
    {
        cout << third[i] << " ";
    }

    cout<<endl;
    //Initializing all locations with 0 [Fourth Array]
    int fourth[10] = {0};

    n = 10;
    cout << "Printing the Array[Fourth Array] -" <<endl;

    for (int i = 0; i < n; i++ )
    {
        cout << fourth[i] << " ";
    }

    cout<<endl;
    //Initializing all locations with 1(not possible with below line) [Fifth Array]
    int fifth[10] = {1};

    n = 10;
    cout << "Printing the Array[Fifth Array] -" <<endl;

    for (int i = 0; i < n; i++ )
    {
        cout << fifth[i] << " ";
    }

    return 0;
}
