#include <iostream>
using namespace std;
int main () 
{
    int n , sum = 0;
    cout << "Enter any interger = ";
    cin >> n;
    for (int num = 0; num <= n; num = num +2){
        // cout << "Number = " << num;
        sum += num;
        cout << "Sum of Numbers are = " << sum;
    }
return 0;
}