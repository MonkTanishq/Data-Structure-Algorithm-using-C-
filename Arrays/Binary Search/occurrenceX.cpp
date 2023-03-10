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

int countOccurences(int arr[], int n, int X)
{
    int first = firstOcc(arr, n, X);
    int last = lastOcc(arr, n, X);

    // if(first == -1)
    //     return 0;
    // else
    //     return (last - first) +1;

    if (first < 0 && last < 0)
        return 0;
    else
        return (last - first) + 1;
}