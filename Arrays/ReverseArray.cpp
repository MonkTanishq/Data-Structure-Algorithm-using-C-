#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end =  size - 1;

    while(start <= end){

        swap(arr[start], arr[end]);
        start++;
        end--;

    }

    /*int temp = 0;
    for(start, end; start <= end; start++, end--)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }*/
        
}

void printArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
        cout << arr[i] <<" ";

    cout<<endl;
}


int main()
{
    int arr[6] = {1, 4, 8, 5, -2, 15};
    int arr1[5] = {2, 6, 3, 9, 4};

    reverse(arr,  6);
    reverse(arr1, 5);

    printArray(arr, 6);
    printArray(arr1, 5);


    return 0;
}
