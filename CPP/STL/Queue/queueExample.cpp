#include<iostream>
#include<queue>
using namespace std;

//Complexity -> O(1)
int main()
{
    //First In, First Out (FIFO)
    //Creating a Queue of String
    queue<string> q;


    //Adding Elements in the Queue
    q.push("One");
    q.push("Two");
    q.push("Three");

    //Checking the Size of the Queue -> 3
    cout<<"Size of Queue Before Pop ->"<<q.size()<<endl;

    //Checking the First Element of the Queue -> One (FIFO Concept)
    cout<<"First Element ->"<<q.front()<<endl;

    //Removing the Element from the Queue -> One will be removed because It is the First Element of the Queue.
    q.pop();

    //Checking the First Element of the Queue After POP -> Two
    cout<<"First Element After Pop ->"<<q.front()<<endl;

    //Checking the Size of the Queue After Pop -> 2
    cout<<"Size of Queue After Pop ->"<<q.size()<<endl;

    return 0;
}