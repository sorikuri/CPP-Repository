#include <iostream>
using namespace std;
void BubbleSort (int *Arr, int size){
    int temp, i , j;
    for ( i = 0; i < size -1; i++){
        for (j =0; j < size-i-1; j++){
            if (Arr [j] > Arr [j+1]){
                // temp = Arr [j]; This can also work to swap the array elements in ascending order
                // Arr [j] = Arr [j+1];
                // Arr [j+1] = temp;
                swap (Arr [j], Arr [j+1]);
            }
        }
    }
}
void PrintofArray (int *Arr, int size){
    for (int i =0; i < size; i++){
        cout << Arr [i] << " ";
    }
}
int main () 
{
    int size , i;
    cout << "Enter Size = ";
    cin >> size ;
    int Arr [size];
    cout << "Enter Elements for Array = " << " ";
    for (i=0 ; i < size ; i++){
        cin >> Arr [i]; 
    }
    BubbleSort (Arr, size);
    PrintofArray (Arr, size);
return 0;
}