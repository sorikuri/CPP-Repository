#include <iostream>
using namespace std;
int main () 
{
    int i = 1, n = 20, sum = 0;
    while ( i <= n){
        // sum += i;
        // i ++;
        if (i % 2 != 0){
        sum += i;
        i ++;
        
    }
}
cout<<sum<<" ";
return 0;
}