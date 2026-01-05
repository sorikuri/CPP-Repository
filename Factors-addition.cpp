#include <iostream>
using namespace std;
int main () 
{ 
    int n = 15, sum =0;
    for ( int i = 1 ; i <= n ;i++){
        if (n%i == 0){
            cout << "Factors of n are :  ";
            cout << i << endl;
            sum =  sum +i ; 
        }
    }
    cout << "Sum of Factors are :";
            cout << sum  << endl;
return 0;
}
