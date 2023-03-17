#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //Creating a Priority Queue - Max Heap
    priority_queue<int> maxi;

     //Creating a Priority Queue - Min Heap
    priority_queue<int,vector<int>, greater<int> > mini;

    //Adding Elements in the Max Heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size of the Priority Queue - Max Heap ->"<<maxi.size()<<endl;

    int n = maxi.size();

    //Printing the Max Heap
    for(int i=0; i<n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

     //Adding Elements in the Min Heap
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout<<"Size of the Priority Queue - Min Heap ->"<<mini.size()<<endl;
    int m = mini.size();

    //Printing the Min Heap
    for(int i=0; i<n; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    //Checking the Min Heap is Empty or Not
    cout<<"Empty or Not ->"<<mini.empty()<<endl;

    //Checking the Max Heap is Empty or Not
    cout<<"Empty or Not ->"<<maxi.empty()<<endl;

    return 0;
}