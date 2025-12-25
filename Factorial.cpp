#include <iostream>
using namespace std;
int main () 
{ 
    int number;
    int factorial = 1;
    cout << "Enter non negative number ";
    cin >> number;
    if (number < 0){
        cout << "No factorial for negatiive integer";
    } 
    else{
    for (int i =1 ; i <= number ; i++){
        factorial *= i;
    }
}
    cout << "Factorial of "<< number <<" is " << factorial;
return 0 ;
}