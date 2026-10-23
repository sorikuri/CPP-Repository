#include <iostream>
using namespace std;
int main () 
{
    char ch;
    cout << "ENTER ANY CHARACTER = ";
    cin >> ch ;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        cout << ch << " ITS AN ALPHABET";

    }
    else if (ch >= '0' && ch <= '9'){
        cout << ch << " ITS A NUMBER";
    }
    else {
        cout << ch << " ITS A SPECIAL CHARACTER";
    }
return 0;
}