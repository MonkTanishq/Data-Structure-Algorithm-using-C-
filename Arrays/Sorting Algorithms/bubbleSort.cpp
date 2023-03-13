//Time Complexity - O(n²)

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{  
    //For round 1 to n-1
   for(int i = 1; i < n; i++)
   {
       for(int j = 0; j<n-i; j++)
       {    
           //process element till n-i th index
           if(arr[j] > arr[j+1])
           {
               swap(arr[j], arr[j+1]);
           }
       }
   }
}



//Optimized Code
//Time Complexity - O(n)

/*
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{  
    //For round 1 to n-1
   for(int i = 1; i < n; i++)
   {
       bool swapped = false;
       for(int j = 0; j<n-i; j++)
       {    
           //process element till n-i th index
           if(arr[j] > arr[j+1])
           {
               swap(arr[j], arr[j+1]);
               swapped = true;
           }
       }

       if(swapped == false)
       //already sorted
        break;
   }
}
*/
