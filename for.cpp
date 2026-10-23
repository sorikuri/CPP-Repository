#include <iostream>
using namespace std;
int main () 
{
    int n  , i;
    for ( int i =2; i*i <= n - 1 ; i ++ ){
        cout << " n =" ;
        cin>> n;
        if(n % i  == 0)
        {
            cout<< "It's not a Prime number."<<endl;
            break;
        }
        else {
            cout<<" It's a Prime Number."<<endl;
        }       
    }
return 0;
}