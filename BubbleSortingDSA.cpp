#include <iostream>
using namespace std;
void bubbleSort (int A[], int s)
{
    int temp;
    for (int i =0; i < s-1; i++)
    {   bool isSwap = false;
        for (int j = 0; j < s-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                // temp = A[j+1];
                // A[j+1] = A[j];
                // A[j] = temp;
                swap (A[j], A[j+1]);
                isSwap = true;
            }
        }
        if (isSwap == true)
        {
            return;  
        }
    }
}
void printBubbleSort (int A[], int s)
{
    for (int i = 0; i < s; i ++)
    {
        cout << A[i] ;
    }
    cout << "\n" << endl;
}
int main () 
{
    int Size = 5;
    int Arr [] = {1,2,3,4,5};
    bubbleSort (Arr, Size);
    printBubbleSort (Arr, Size);
return 0;
}