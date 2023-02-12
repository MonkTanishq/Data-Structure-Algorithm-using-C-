#include<iostream>
using namespace std;

int main() {

    int n, i=1,count = 1;
    cout << "Enter the value: ";
    cin >> n;

    while (i <= n){

        int j = 1;
        
        while (j <= n){

            cout << count << " ";
            j += 1;
            count += 1;
            
        }

        cout <<endl;
        i += 1;
        
        
    }


}