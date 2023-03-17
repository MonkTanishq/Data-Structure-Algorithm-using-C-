#include<iostream>
#include<set>
using namespace std;

int main()
{
    //Element should be Unique
    //Implementation BTS using BST
    //Can't Modify Elements - You can only Add or Delete
    //Elements will Return in the Sorted Order
    //Set is Slow in Comparison of UnOrdered Set

    //Creating a Set
    set<int> s;

    //Inserting Elements in the Set
    //Complexity of insert() -> O(log n)
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for(auto i :s)
    {
        cout<<i<<endl;
    }

    s.erase(s.begin());
    for(auto i :s)
    {
        cout<<i<<endl;
    }cout<<endl;

    cout<<"5 is present or not ->"<<s.count(5)<<endl;

    //Complexity of insert(), find(), count(), erase() -> O(log n)
    //Complexity of size(), end(), begin(), other -> O(1)
    return 0; 

}