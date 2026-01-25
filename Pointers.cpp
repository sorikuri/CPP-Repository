#include <iostream>
using namespace std;
int main () 
{   // Task - 01
    int a = 90;
    int *b = &a;
    cout << "Address of Variable a = "  << b << endl;
    cout << "Value of Variable a = "  <<*b << endl;
    // Modification of variable value 90 by using pointer // 
    *b = 76;
    cout << "Value of Variable a = "  <<*b << endl;
return 0;
}