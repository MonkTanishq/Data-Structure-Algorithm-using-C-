#include<iostream>
#include<list>
using namespace std;

//Complexity of Every Function is -> O(1)
int main()
{
    //By the use of Doublely-Linked-List, List STL has been made.
    //We can't use at() in List.
    //Suppose we have to find 4th element, we have to travel to reach there.

    //Creating a List named l;
    list<int> l;

    //Copying the List into the Another List
    list<int> l1(l);

    //Initializing List with the 5 Elements and value 100
    list<int> a(5,100);

    //Adding Element from the Back Side
    l.push_back(1);

    //Adding Element from the Front Side
    l.push_front(2);

    //Printing the List
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    //Deleting the Element
    //In this erase(), you have to give "Kaha se Kaha tak Delete Karna hai Basically Range"
    //After Erase Size will be ZERO(0)
    //Complexity of erase() -> O(n)
    l.erase(l.begin()); //2 deleted here.

    //Checking Size of List
    cout<<"Size of List: "<<l.size();

    return 0;
}