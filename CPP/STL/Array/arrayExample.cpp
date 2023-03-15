#include<iostream>
#include<array>
using namespace std;

//Complexity -> O(1)
int main()
{
    //Normal Array
    int basic[3] = {1, 2, 3};

    //STL Array
    array<int,4> a = {1, 2, 3, 4};
    
    for(int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }

    //Access Element by the Index using at()
    cout<<"Element at 2nd Index: "<<a.at(2)<<endl;

    //Array is Empty or Not Check using empty()
    cout<<"Empty or Not -> "<<a.empty()<<endl;

    //Access First Element using front()
    cout<<"First Element: "<<a.front()<<endl;

    //Access Last Element using back()
    cout<<"Last Element: "<<a.back()<<endl;

    return 0;
}