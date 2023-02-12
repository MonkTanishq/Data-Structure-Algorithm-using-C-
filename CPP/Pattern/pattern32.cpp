#include <iostream>
using namespace std;

int main()
{

    int n, i = 1, k = 1;
    cout << "Enter the value: ";
    cin >> n;

    while (i <= n)
    {

        // space print (1st triangle)
        int j = 1;

        while (j <= n - i + 1)
        {

            cout << j << " ";
            j += 1;
        }

        int space = i - 1;

        while (space)
        {

            cout << "* ";
            space -= 1;
        }

        cout << endl;
        i += 1;

    }

    while (k <= n) {

        int   space = k - 1;

            while (space)
            {

                cout << "* ";
                space -= 1;
            }

        int  j = 1;

            while (j <= n - k + 1)
            {

                cout << j << " ";
                j += 1;
            }

            cout <<endl;
            k += 1;
          
    }

    
}