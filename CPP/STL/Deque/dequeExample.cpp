#include<iostream>
#include<deque>
using namespace std;

//Complexity of Every Function is -> O(1)
int main()
{
    //Deque Implemented using Fixed Static Array
    //Insertion or Deletion on Both the End is Possible in Deque
    //It is Dynamic
    //Random Access Possible using at()
    //Also known as Doubly Ended Queue

    deque<int> d;

    //Pushing from the Back Side using push_back()
    d.push_back(1);

    //Pushing from the Front Side using push_front()
    d.push_front(2);

    //Printing the Deque
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    //Removing Element form Deque from back which means -> 1 removed
    d.pop_back();

    //Removing Element form Deque from front which means -> 2 removed
    d.pop_front();

    //Printing Element of the First Index of Deque using at()
    cout<<"Printing First Index Element ->"<<d.at(1)<<endl;

    //Deque is Empty or Not Check using empty()
    cout<<"Empty or Not -> "<<d.empty()<<endl;

    //Access First Element using front()
    cout<<"First Element: "<<d.front()<<endl;

    //Access Last Element using back()
    cout<<"Last Element: "<<d.back()<<endl;


    cout<<"Before Erase Size ->"<<d.size()<<endl;

    //In this erase(), you have to give "Kaha se Kaha tak Delete Karna hai Basically Range"
    //After Erase Size will be ZERO(0)
    //But maxSize, max means the Memory Allocated to your Deque, The Starting and Ending Size/Amounts are same.
    //Complexity of Erase -> O(n)  
    d.erase(d.begin(), d.begin() + 1);

    cout<<"After Erase Size ->"<<d.size()<<endl;

    return 0;
}
