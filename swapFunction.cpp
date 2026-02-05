#include <iostream>
using namespace std;
void swapFunc (int a , int b){
    int temp = b;
    b = a;
    a = temp ;
    cout << "a = " << a << "\tb= " << b <<endl;
}
int main () 
{
    int a = 30, b =40;
    cout << "a = " << a << "\tb= " << b <<endl;
    swapFunc (a,b);
    // swap (a,b);
    // cout << "a = " << a << "\tb= " << b;
return 0;
}