#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6 using Binary Search -> "<<binary_search(v.begin(), v.end(), 6)<<endl;

    cout<<"Lower Bound for 6 ->"<<lower_bound(v.begin(), v.end(), 6) - v.begin()<<endl;

    cout<<"Upper Bound for 6 ->"<<upper_bound(v.begin(), v.end(), 6) - v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max ->"<<max(a, b)<<endl;
    cout<<"Min ->"<<min(a, b)<<endl;
    
    swap(a, b);
    cout<<"After Swap ->"<<a<<" "<<b<<endl;

    string abcd = "abcd";
    cout<<"String is ->"<<abcd<<endl;
    reverse(abcd.begin(), abcd.end());
    cout<<"String After Reverse is ->"<<abcd<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After Rotate Vector:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(), v.end());

    cout<<"After Sorting Vector:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}