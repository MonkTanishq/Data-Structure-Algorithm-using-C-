#include <iostream>
using namespace std;

int main()
{

    int n, i = 1, k = 1;
    cout << "Enter the value: ";
    cin >> n;

    while (i <= n) {

        int j = 1;

        while (j <= n - i + 1) {

            cout << j << " ";
            j += 1;
        }

        j = 1;

        while (j <= (i - 1) * 2){

            cout << "* ";
            j += 1;
        }

        j = n - i + 1;

        while (j >= 1) {

            cout << j << " ";
            j -= 1;
        }

        cout <<endl;
        i += 1;
    }
    

    
}