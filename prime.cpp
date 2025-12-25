#include <iostream>
using namespace std;
int main () 
{
    int n ;
    cout << " n =" ;
    cin>> n;
    if ( n % 2 && n % n-1 != 0){
        cout << " It's a Prime number. "<<endl; 
    }
    else {
        cout <<" It's not a Prime number."<<endl;
    }
return 0;
}