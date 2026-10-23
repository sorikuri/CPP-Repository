#include <iostream>
using namespace std;
int main () 
{
    int n, i;
    cout << "Enter Number n = " ;
    cin >> n;
    int A [n];
    cout << "Enter Array elements ";
    for (int i = 0; i < n; i++){
        cin >> A [i];
        cout << "Array = " << A [i] <<endl;
        if (A [i]%2 == 0){
        cout << A[i] << " " <<"is Even number "<< endl;
    }
    else {
         cout << A[i] << " " <<"is Odd number "<< endl;
    }
    }
    
return 0;
}