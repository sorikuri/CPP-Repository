#include <iostream>
using namespace std;
// This Function is to Find the Largest Value in Array
int findLargest (int arr[], int size){
    int i, Largest = arr [0];
    for (int i=1; i <=size; i++){
       if (arr [i]> Largest){
        Largest = arr [i];
       }
    }
    return Largest ;
}
// This Function is to Find the Smallest Value in Array
int findSmallest (int  arr[], int size){
    int i, Smallest = arr [0];
    for (int i=1; i <= size; i++){
    if (arr[i] < Smallest){
        Smallest = arr [i];
       } 
    }
    return Smallest ;
}
// Total Number of Even Number in Array
int countEven (int *arr, int size){
    int i, Even = 0;
    for (i =0  ; i < size; i++){
        if (arr[i]% 2 == 0 && Even++){ 
            cout <<arr[i] << "  is Even ."<< endl;
        }
    }
    return Even;
}
// Reverse Order of Array
void displayReverse (int *arr, int size){
    for (int i = 10; i >=0 ; i--){
        cout << arr [i] << " ";
    }
}
int main () 
{
    int arr [] = {10,20 ,30 ,35, 67, 40,44, 98,29,6,10};
    int size = sizeof (arr)/ sizeof (arr[0]);
    cout <<"Largest " <<  findLargest (arr , size)<< endl;
    cout <<"Smallest " << findSmallest (arr , size )<< endl;
    cout <<"Even = " <<  countEven (arr, size) << endl;
    cout << "Reverse of Array = ";
    displayReverse (arr, size);
return 0;
}