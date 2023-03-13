//Code Using For Loop

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1; i<n; i++)
    {   
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = temp;
    }
}


//Code Using While Loop

/*
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
  
  int i=1;
  
    while(i<n)
    {
        int temp = arr[i];
        int j=i-1;
        while(j >= 0)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        i++;
    }
}
*/