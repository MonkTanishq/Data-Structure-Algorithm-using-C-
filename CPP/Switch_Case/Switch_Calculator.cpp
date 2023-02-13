#include<iostream>
using namespace std;

int main() {

    int a,b;
    char operation;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the Operation you want to perform: ";
    cin >> operation;

    switch( operation )
    {
        case '+': cout<< "Answer is: " <<(a+b)<<endl;
                  break;
        case '-': cout<< "Answer is: " <<(a-b)<<endl;
                  break;
        case '*': cout<< "Answer is: " <<(a*b)<<endl;
                  break;
        case '/': cout<< "Answer is: " <<(a/b)<<endl;
                  break;
        case '%': cout<< "Answer is: " <<(a%b)<<endl;
                  break; 
        default: cout<< "Please enter a valid operation!"<<endl;

        return 0;
    }
 


}