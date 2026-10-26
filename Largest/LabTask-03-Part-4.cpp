#include <iostream>
using namespace std;
int main () 
{
    int arr []= {101,105,112,120,134,140};
    int size = 6, Roll_Number;
    bool found = false;
    cout << "Enter Roll Number " << endl;
    cin >> Roll_Number;
    for ( int i = 0; i < size; i++)
    {
        if (arr[i] == Roll_Number)
        {
            cout << "Found it at " << i << endl;
            found = true ;
            break;
        }
    }
    if (found == false)
    {
        cout << "Roll Number Not found! " << endl;
    }

return 0;
}