#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Function for Returning the Minimum Value
int getMin(int num[], int n)
{
    int min = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        //We can also use below singleline instead of below if statement to get Minumum value
        //min = min(min, num[i]);

        if(num[i] < min)
            min = num[i];
    }

    //Returning the Minimum value
    return min;
}

//Function for Returning the Maximum Value
int getMax(int num[], int n)
{
    int max = INT_MIN;

    for(int i =0; i<n; i++){

        //We can also use below singleline instead of below if statement to get Maximum value
        //max = max(max, num[i]);

        if(num[i] > max)
            max = num[i];
    }

    //Returning the Maximum value
    return max;
}


int main()
{

    int size, num[100];
    cout << "Enter the size of an array(mazSize = 100): ";
    cin >> size;

    //Taking input in array
    for(int i=0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Minimum value is: " << getMin(num, size) <<endl;
    cout << "Maximum value is: " << getMax(num, size) <<endl;
    

    return 0;
}
