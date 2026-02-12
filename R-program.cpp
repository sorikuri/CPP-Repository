#include <iostream>
using namespace std;
int print (int n) {
    if (n > 0){
        cout << n << " "  ;
    }
    else {
        return -1;
    }
    print (n-1);
}
int main () 
{
    int n = 10;
    cout << print (n);
return 0;
}