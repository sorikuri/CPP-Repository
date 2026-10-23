#include <iostream>
using namespace std;
int main () 
{
    int A[10], sum =0, average, i ;
    cout << "Enter Number = " << endl;
    for (int i =0 ; i < 10; i++){
      cin >> A[i] ; 
      cout << "Elements are = "<<A[i] << endl;
    }
    // cout << A[i];
    for (i = 0; i <10 ;i++){
    sum += A[i];
    }
    average = sum / 10;
    cout << "Sum = "<< sum << endl;
    cout << "Average = " << average ;
return 0;
}