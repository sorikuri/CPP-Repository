// Binary Search Algorithm
#include <iostream>
using namespace std;
int BinarySearch (int A[],int s, int T)
{
    int start  = 0, end = (s-1);
    int comparison_count = 0;
    while (start <= end)
    {
        int mid = start + ((end - start)/2);
        comparison_count ++;
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
        if (T == A[mid])
        {
            cout << "Total Comparison count are: " << comparison_count <<endl;
            cout << "Found at index: ";
            return mid ;
        }
        else
        {
            cout << "Target not found!" <<endl;
        }
    }
}
int main () 
{
    int size;
    cout << "Enter Size: " <<endl;
    cin >> size;
    int arr[size];
    cout << "Enter Array Elemets in Ascending Order: " << endl;
    for (int i = 0; i < size; i ++)
    {
        cin >> arr[i] ;
    }
    int target;
    cout << "Enter Target: " << endl;
    cin >> target;
    cout << BinarySearch (arr, size, target);    
return 0;
}