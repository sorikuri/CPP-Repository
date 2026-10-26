#include <iostream>
using namespace std;
int main () 
{
    int size = 7, arr [] = {7,3,7,9,7,2,5};
    int count = 0, target = 7;
    bool found;
    for ( int i = 0; i < size; i++ )
    {
        if (arr[i] == target )
        {
            cout << "Found at " << i <<endl;
            found = true;
            count ++;
        }
    }
    cout << "Occurance of target " << count <<endl;
    if (found == false)
    {
        cout << "Not found even once!" <<endl;
    }
return 0;
}