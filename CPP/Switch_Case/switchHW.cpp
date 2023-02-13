#include<iostream>
using namespace std;

int main() {

    int total_amount;
    int Rs100, Rs50, Rs20, Rs10;

    cout << "Enter the total amount: ";
    cin >> total_amount;

    switch(1)
    {
        case 1: Rs100 = total_amount / 100;
                total_amount %= 100;
                cout << "Number of Rs100 Note: " <<Rs100<<endl;

        case 2: Rs50 = total_amount / 50;
                total_amount %= 50;
                cout << "Number of Rs50 Note: " <<Rs50<<endl;

        case 3: {Rs20 = total_amount / 20;
                total_amount %= 20;
                cout << "Number of Rs20 Note: " <<Rs20<<endl;}

        case 4: {Rs10 = total_amount / 10;
                total_amount %= 10;
                cout << "Number of Rs10 Note: " <<Rs10<<endl;} 

    }
 
    return 0;


}