#include <iostream>
using namespace std;
int main () 
{
    int target, arr [] = {12,45,23,67,89,34,56,78,90,11};
    bool found = false ;
    cout << "Enter Number for search: " <<endl;
    cin >> target ;
    for (int i =0; i < 10; i++ )
    {
        if (target == arr[i])
        {
            cout << "Found at " << i <<endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Not found!"<<endl;
    }
return 0;
}