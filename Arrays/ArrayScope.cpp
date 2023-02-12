#include<iostream>
using namespace std;

void update(int arr[], int size)
{
    cout << "Inside the function-" <<endl;

    //Updating Arrays 1st element which means 0th element
    arr[0] = 120;

    //Printing the Array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

    cout << "Going back to main function-" <<endl;
}
int main()
{
    int arr[3] = {1,2,3};

    update(arr, 3);

    //Printing the Array
    cout << endl << "Printing the Main function- " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
