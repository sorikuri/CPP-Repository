#include <iostream>
using namespace std;
int Swap_count = 0, compare_count = 0;
void bubbleSort (int A[], int s)
{
    int temp = 0;
    for (int i =0; i < s-1; i++)
    {  // bool isSwap = false; 
        for (int j = 0; j < s-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                // swap (A[j], A[j+1]);
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                //isSwap = true;
                Swap_count ++;
            }
            compare_count ++;
        }
        // if (isSwap == false) // when the element is sorted so just exit the loop.
        // {
        //     return;  
        // }
    }
}
void printBubbleSort (int A[], int s)
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
    int Size = 10 ;
    int Arr [] = {4,3,7,9,1,2,6,8,5,10};
    bubbleSort (Arr, Size);
    printBubbleSort (Arr, Size);
return 0;
}