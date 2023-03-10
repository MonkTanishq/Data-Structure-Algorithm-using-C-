#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


int main()
{
    int even[6] = {1,11,22,33,44,55};
    int odd[5] = {3,5,9,13,27};

    int evenIndex = binarySearch(even, 6, 66); 
    cout <<"Index of Even Array is: "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 15);
    cout <<"Index of Odd Array is: "<<oddIndex;

    return 0;
}