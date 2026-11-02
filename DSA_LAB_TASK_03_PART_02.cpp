#include <iostream>
using namespace std;
int Swap_count = 0, compare_count = 0;
void bubbleSort (string A[], int s)
{
    for (int i =0; i < s-1; i++)
    { 
        for (int j = 0; j < s-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                swap (A[j], A[j+1]);
                Swap_count ++;
            }
            compare_count ++;
        }
    }
}
void printBubbleSort (string A[], int s)
{
    for (int i = 0; i < s; i ++)
    {
        cout << A[i]  << endl;
    }
    cout << "Count : " << Swap_count <<endl;
    cout << "Comparison Count: " << compare_count <<endl;
}
int main () 
{
    // int Size = 6 ;
    // string Arr [] = {"B", "A", "C", "E", "D","F"};
    // bubbleSort (Arr, Size);
    // printBubbleSort (Arr, Size);
    int Size = 3 ;
    string Arr [] = {"Banana", "Cat", "Apple"};
    bubbleSort (Arr, Size);
    printBubbleSort (Arr, Size);
return 0;
}
