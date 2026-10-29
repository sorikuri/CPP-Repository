// Binary Search Algorithm
#include <iostream>
using namespace std;
int BinarySearch (int A[],int s, int T)
{
    int start  = 0, end = (s-1);
    while (start <= end)
    {
        int mid = start + ((end - start)/2);
        cout << "Starting index: " <<start<< endl;
        cout << "Ending index: " << end << endl;
        cout << "Middle index" << mid << endl;
        if (T > A [mid])
        {
            start = mid + 1;            
        }
        else 
        if (T < A[mid])
        {
            end = mid - 1;
            
        }
        else
        {
            cout << "Middle index: " << mid << endl;
            cout << "Found at: ";
            return mid ;
        }
    }
}
int main () 
{
    int size = 7;
    int arr[] = {5,10,15,20,25,30,35};
    int target = 5;
    cout << BinarySearch (arr, size, target);    
return 0;
}