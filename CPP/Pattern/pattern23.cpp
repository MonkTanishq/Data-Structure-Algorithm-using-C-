#include <iostream>
using namespace std;

int main()
{

    int n, i = 1;
    cout << "Enter the value: ";
    cin >> n;

    while (i <= n)
    {

        //space print
        int space = n - i;

        while(space) {

            cout << " ";
            space -= 1;
        }

        //star print

        int j = 1;

        while (j <= i) {

            cout << "*";
            j += 1;

        }

        cout << endl;
        i += 1;
    }
}