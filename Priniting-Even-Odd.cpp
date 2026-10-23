#include <iostream>
using namespace std;
int main () 
{
    int choice, n,i, N;
    do { 
        cout << "1. Print even numbers from 1 to N " << endl;
        cout << "2. Print odd numbers from 1 to N " << endl;
        cout << "3. Exit" << endl;
        cout << "Enter you number in between (1-3) ";
        cin >> choice;
    switch (choice){
        case 1: cout << "Enter N = ";
        cin >> N;
        for (i = 1; i <=N ; i++){
        if (i % 2 == 0){   
                cout << "Print Even Numbers = " << i << endl;
            }
        }
        break;

        case 2: cout << "Enter N = ";
        cin >> N;
        for (i = 1; i <=N ; i++){
        if (i % 2 != 0){   
                cout << "Print Odd Numbers = " << i << endl;
            }
        }
        break;

        case 3:
        cout << "PLEASE EXIT IMMEDIATELY !!! " << endl;
        break;

        default :
        cout << " INVALID CHOICE " ;
        }
    }
    while (choice != 3 );
    
    
return 0;
}

    