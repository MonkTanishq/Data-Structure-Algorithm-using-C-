#include <iostream>
using namespace std;

int main()
{

    int n, i = 1;
    cout << "Enter the value: ";
    cin >> n;

    while (i <= n)
    {

        //space print (1st triangle)
        int space = n - i;

        while(space) {

            cout << "  ";
            space -= 1;
        }

        //print 2nd triangle

        int j = 1;

        while (j <= i) {

            cout << j<< " ";
            j += 1;

        }

        //print 3rd triangle

        int k = 1; 

        while (k <= i - 1) {

            cout << i - k << " ";
            k += 1;
        }

        /*
            //Instead of using another variable k, we can also do it by-

            //1st option(logic) 

            int k = i - 1;

            while (k) {

                cout << k << " ";
                k -= 1;
            }

            //2nd option(logic)

            j = i - 1;

            while (j >= 1){
                cout << j << " ";
                j -= 1;
            }
        */

        cout << endl;
        i += 1;
    }
}