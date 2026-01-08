#include <iostream>
using namespace std;
int main () 
{ 
    int n , factor = 1;
    cout << " Enter number = ";
    cin >> n;
    for ( int i = 1 ; i <= n ;i++){
        if (n%i == 0){
            cout << "Factors of " << n << " are ";
            cout << i << endl;
            factor = factor * i ; 
        }
    }
    cout << "factor of Factors are : ";
            cout << factor  << endl;
            if (factor >= n){
                cout << n << " is an abundant number.";
            }
            else {
                cout << n << " is not an abundant number.";
            }
return 0;
}