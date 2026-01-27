#include <iostream>
using namespace std;
void increment (int *num){
    *num +=  +1;
    
}
int main ()
{ 
    int num =10;
    increment (&num);
    cout << num;
return 0; 
}