#include<iostream>
#include<vector>
using namespace std;

//Complexity -> O(1)
int main()
{
    //Whenever the Vector is fully filled, it's Capacity gets Doubled
    vector<int> v;

    //If you know the Size for to Create  a Vector
    // a -> Name of Vector
    //5 -> Size of Vector
    //1 -> All the Element Initializing with 1 means {1, 1, 1, 1, 1}
    vector<int> a(5, 1);

    //Checking the Capacity of the Vector before Pushing any Element using capacity()
    cout<<"Capacity -> "<<v.capacity()<<endl;

    //Pushing the  First Element in Vector using push_back()
    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

     //Pushing the  Second Element in Vector using push_back()
    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

     //Pushing the  Third Element in Vector using push_back()
    v.push_back(3);
    //Here when we check the Capacity of the Vector it shows Capacity -> 4, it means when you tried to put 3 but it didn't have space, earlier it was 2 but now it converted it to 4 just double the space.

    cout<<"Capacity -> "<<v.capacity()<<endl;

    //SIZE tells the HOW MANY ELEMENTS ARE HERE and
    //CAPACITY tells FOR HOW MANY ELEMENT THE SIZE HAS BEEN ASSIGNED. 
    cout<<"Size -> "<<v.size()<<endl;

    //Access Element by the Index using at()
    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;

    //Array is Empty or Not Check using empty()
    cout<<"Empty or Not -> "<<v.empty()<<endl;

    //Access First Element using front()
    cout<<"First Element: "<<v.front()<<endl;

    //Access Last Element using back()
    cout<<"Last Element: "<<v.back()<<endl;

    //Printing Vector Before Removing Element
    cout<<"Before POP"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //Removing Element from Vector
    v.pop_back();

    //Printing Vector After Removing Element
    cout<<"After POP"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //Before Clearing the Vector
    cout<<"Before Clear Size -> "<<v.size()<<endl;

    //Removing All the Elements from Vector
    v.clear();

    //After Clearing the Vector
    cout<<"After Clear Size -> "<<v.size()<<endl;
    return 0;
}