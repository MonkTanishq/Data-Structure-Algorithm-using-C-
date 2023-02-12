#include<iostream>
using namespace std;

//Function for Calculating the Sum of the array
int SumOfArray(int arr[], int size)
{
    int sum = 0;

    //Calculating sum
    for (int i = 0; i < size; i++)
       sum += arr[i]; 

    return sum;
}

int main()
{
    int size, arr[50];
    cout << "Enter the size of an array[Maximum Size = 50]: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Sum of the Array is: " << SumOfArray(arr, size) <<endl;

    return 0;
}
