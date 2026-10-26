#include <iostream>
using namespace std;
int main () 
{
    int size = 10, arr [size];
    cout << "Enter Values for Array : " <<endl;
    for (int i =0; i < size; i ++)
    {
        cin >> arr[i];
    }
    int target;
    bool found = false;
    cout << "Enter Element for Search: " <<endl;
    cin >> target;
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