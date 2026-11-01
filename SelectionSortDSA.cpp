#include <iostream>
using namespace std;
void SelectionSort (int arr[], int n)
{
    for (int i =0; i < n-1; i ++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap (arr[i], arr[smallest]);
    }
}
void printSelectionSort (int arr[], int s)
{
    for (int i =0; i < s; i ++)
    {
        cout << arr[i] <<endl;
    }
}
int main () 
{
    int SIZE = 5;
    int Arr[] = {4,1,5,3,2};
    SelectionSort(Arr, SIZE);
    printSelectionSort (Arr, SIZE);
return 0;
}