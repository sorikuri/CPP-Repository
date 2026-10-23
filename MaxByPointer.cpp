#include <iostream>
using namespace std;
void ArrFunc (int *Arr, int size){
    int  i;
    cout << "Enter Values of Array : ";
    for (i =0; i < size; i++){
        cin >> Arr [i];
    }
    int *ptr = &Arr[0] ;
    for (i =1 ; i < size ; i++){
        if (Arr [i] > *ptr  ){
        *ptr = Arr [i];
    }
    }
    cout << *ptr << endl;
}  
int main ()
{ 
    int size ;
    cout << "ENTER SIZE = ";
    cin >> size;
    int Arr[size];
    ArrFunc (Arr, size);
return 0; 
}