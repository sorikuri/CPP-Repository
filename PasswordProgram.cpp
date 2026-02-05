#include <iostream>
using namespace std;
int main () 
{
    int Password = 1234, pass; 
    do {
        cout << "ENTER PASSWORD: " <<endl;
        cin >> pass;
    }
    while (pass != Password);
    cout << "LOGIN IN SUCCESSFULLY!";
return 0;
}