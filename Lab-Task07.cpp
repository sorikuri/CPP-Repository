#include <iostream>
using namespace std;
void ArrFunc (int Arr[], int size){
    int  sum =0,i;
    cout << "Enter Values of Array : ";
    for (i =0; i < size; i++){
        cin >> Arr [i];
    }
    int *ptr = Arr;
    for (i =0; i < size ; i++){
        sum += *ptr;
        ptr ++;
    }
    cout << "SUM = " << sum << endl;
}
int main ()
{ 
    int size,i, sum =0;
    cout << "Enter size : ";
    cin >> size;
    int Arr [size];
    ArrFunc (Arr, size);
return 0; 
}