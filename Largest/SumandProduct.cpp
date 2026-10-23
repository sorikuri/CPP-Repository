#include <iostream>
using namespace std;
int SumFunc (int *Arr, int size){
    int sum = 0,i;
    for (i =0; i < size; i++){
        sum += Arr[i];
    }
    return sum;
}
int ProductFunc (int *Arr, int size){
    int Product = 1, i;
     for (i =0; i < size; i++){
        Product *= Arr[i];
    }
    return Product;
}
int main () 
{ 
    int size = 5;
    int Arr [size] = {1, 2, 3, 4, 5};
    cout << SumFunc (Arr, size) << endl;
    cout << ProductFunc (Arr, size);

return 0;
}