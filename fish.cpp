#include <iostream>
using namespace std;
int main () 
{
    char ch;
    cout<<"ch\n";
    cin>>ch;
    if(ch >=65 && ch <=91){
        cout<<"char is upper case\n ";
    }
    if (ch >= 97 && ch <=122){
        cout<< "char is lower case\n";
    }
return 0;
}