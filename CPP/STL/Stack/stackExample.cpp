#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //Last In, First Out (LIFO) Concept
    //Creating a stack of string
    stack<string> s;

    //Adding Elements in the Stack
    s.push("One");
    s.push("Two");
    s.push("Three");

    //Finding the Top Element of the Stack -> Three(LIFO-Concept)
    cout<<"Top Element -> "<<s.top()<<endl;

    //Removing Element from the Stack -> Three will be removed because it's the Top Element of the Stack
    s.pop();
    cout<<"Top Element -> "<<s.top()<<endl; //Now It is -> Two

    //Checking the Size of the Stack
    cout<<"Size of Stack -> "<<s.size()<<endl;

    //Checking the Stack is Empty or Not -> It will Return False(0) because Two Elements are there in the Stack.
    cout<<"Empty or Not -> "<<s.empty()<<endl; 

    return 0;
}