#include<iostream>
using namespace std;

//Function for printing an Array
void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "Printing Done" <<endl;
}

int main()
{

    //Printing the Array [First Array]
    int first[15] = {2,7};
    int n = 15;
    cout << "Printing the Array[First Array] -" <<endl;

    printArray(first, n);
    cout<<endl;


    //Initializing all locations with 0 [Second Array]
    int second[10] = {0};
    n = 10;
    cout << "Printing the Array[Second Array] -" <<endl;

   
    printArray(second, n);
    cout<<endl;


    //Initializing all locations with 1(not possible with below line) [Third Array]
    int third[10] = {1};

    n = 10;
    cout << "Printing the Array[Third Array] -" <<endl;

   
    printArray(third, n);

    return 0;
}
