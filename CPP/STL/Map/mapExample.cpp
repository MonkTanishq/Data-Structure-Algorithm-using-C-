#include<iostream>
#include<map>
using namespace std;

int main()
{
    //Data is Stored in the Key->Value Form
    //Every Key is Unique and only Point a Single Value
    //Two Keys can Point a Single Value 
    //For Example a->Hello and b->Hello but if a->Hello it can not point a->World
    //Same Key can not Point to Double Values

    //Creating a Map
    map<int, string> m;

    //Inserting value in the Map with Unique Keys
    m[1] = "hello";
    m[2] = "world";
    m[12] = "universe";

    //Another way to Inserting Value in the Map using insert()
    m.insert({5, "dhoni"});

    //Printing
    //It will print in Sorted Order
    cout<<"Before Earse"<<endl;
    for(auto i:m)
    {   
        //i.first -> It will Print the Keys
        //i.second -> It will Print the Values
        cout<<i.first<<" "<<i.second<<endl; //
    }

    cout<<"Finding 12 ->"<<m.count(12)<<endl; // It will return 1 means 12 is present.

    m.erase(12);
    cout<<"After Erase"<<endl;

    for(auto i:m)
    {   
        //i.first -> It will Print the Keys
        //i.second -> It will Print the Values
        cout<<i.first<<" "<<i.second<<endl; //
    }

    auto it = m.find(5);
    for(auto i = it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }

    //Complexity of insert(), erase(), find(), count() -> O(log n)
    return 0;
}