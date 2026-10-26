#include <iostream>
using namespace std;
int main () 
{   int arr[] = {4,8,4,6,4,9,7};
    int target = 4;
    bool found = false;
    for (int i = 6 ;i >= 0 ; i --)
    {
        if (arr[i] == target)
        {
            cout << "Found at " << i << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "Not Found! " <<endl;
    }

return 0;
}