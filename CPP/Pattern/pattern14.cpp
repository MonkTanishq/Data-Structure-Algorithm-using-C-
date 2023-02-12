#include <iostream>
using namespace std;

int main()
{

    int n, i = 1;
    char start = 'A';
    cout << "Enter the value: ";
    cin >> n;

    while (i <= n)
    {

        int j = 1;

        while (j <= n)
        {
            cout << start << " ";
            start += 1;
            j += 1;
        }

        cout << endl;
        i += 1;
    }
}