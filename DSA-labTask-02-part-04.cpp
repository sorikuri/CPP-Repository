// Binary Search Algorithm
#include <iostream>
using namespace std;
int BinarySearch (int A[],int s, int T)
{
    int start  = 0, end = (s-1);
    int checks = 0 ;
    while (start <= end)
    {
        int mid = start + ((end - start)/2);
        checks ++;
        cout << "Middle index: " << mid << endl;
        cout << "Middle Index element " << A [mid] << "\n"<<endl;
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
            cout << "Found at: ";
            return mid;
        }
    }
    cout << "Not Found" <<endl;
    cout << "Total checks: " << checks <<endl;
    return -1;
}

int main () 
{
    int size = 8;
    int arr[] = {2,8,14,20,26,32,38,44};
    int target = 42;
    cout << BinarySearch (arr, size, target);    
return 0;
}