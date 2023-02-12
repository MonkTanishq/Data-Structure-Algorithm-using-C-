#include<iostream>
using namespace std;

int main() {

    int n, i=1;
    cout << "Enter the value: ";
    cin >> n;

    while (i <= n){

        int j = i;
        
        while (j < i*2){

            cout << j << " ";
            
            j += 1;
            
        }

        cout <<endl;
        i += 1;
        
        
    }


}