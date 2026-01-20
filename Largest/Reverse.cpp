#include <iostream>
using namespace std;
// Function for reversing  an Array.
void ReverseFunc (int *Arr, int size){
    int start = 0, end = size -1;
    while (start < end ){ // In condition not <=, it only be use in case of odd array.
        swap (Arr[start], Arr [end]);
        start ++, end --;
    }
}
int main () 
{
    int size = 20;
    int Arr [size] = {1, 5, 6, 4, 9, 2, 10, 34, 54, 23, 60,45, 58, 30, 78, 22, 45,3 ,1 ,3};
    ReverseFunc (Arr , size ) ;
    for (int i =0; i < size; i++){
        cout << Arr [i] << " ";
    }
return 0;
}