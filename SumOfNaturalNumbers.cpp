#include <iostream>
using namespace std;
int n;
int sumofNatNumb (int n){
        int sum = (n * (n+1))/2 ;
        return sum ;
    }
int main () 
{
    cout << "Enter number = ";
    cin >> n;   
    cout << "Sum of Natural Number = " << sumofNatNumb (n) ;
return 0;
}