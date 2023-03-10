// First and Last Position of an Element in Sorted Array
#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid]) // Right me jao
        {
            start = mid + 1;
        }

        else if (key < arr[mid]) // Left me jao
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid]) // Right me jao
        {
            start = mid + 1;
        }

        else if (key < arr[mid]) // Left me jao
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int odd[5] = {1, 2, 3, 3, 5};
    cout << "First occurrence of 3 is: " << firstOcc(odd, 5, 6) << endl;
    cout << "Last occurrence of 3 is: " << lastOcc(odd, 5, 3);
    return 0;
}