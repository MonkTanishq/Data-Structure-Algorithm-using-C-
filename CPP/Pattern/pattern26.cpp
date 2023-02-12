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
        int space = i - 1;

        while(space) {

            cout << " ";
            space -= 1;
        }

        //star print

        int j = 1;

        while (j <= n - i + 1) {

            cout << i;
            j += 1;

        }

        cout << endl;
        i += 1;
    }
}