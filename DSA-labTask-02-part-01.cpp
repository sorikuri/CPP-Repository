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
        {
            cout << "Total Comparison count are: " << comparison_count <<endl;
            cout << "Found at: ";
            return mid ;
        }
    }
    return -1;
}
int main () 
{
    int size = 10;
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int target = 70;
    cout << BinarySearch (arr, size, target);    
return 0;
}

