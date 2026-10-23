#include <iostream>
using namespace std;
int evenNumFinding (int Arr [], int size){
    int count = 0;
    for (int i = 0; i < size ; i++){
       int num = Arr [i];
        if (num % 2== 0){
            count ++;
        }
    }
    
    return count;
}
int main () 
{
    int size ;
    cout << "Enter size = ";
    cin >> size;
    int Arr [size];
    cout << "Enter array elements: " ;
    for (int i = 0; i < size; i++){
        cin >> Arr [i];
    } 
    int result = evenNumFinding (Arr, size);
    cout << "COUNT = " << result;
return 0;
}