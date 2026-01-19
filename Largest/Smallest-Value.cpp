#include <iostream>
using namespace std;
int main () 
{
    int i , smallest = INT16_MAX, largest = INT16_MIN;
    int num =7;
    int array [num] = {29,67,45,90,67,-34,-6};
    for (i= 0; i < 7; i++ ){
        if (array [i] < smallest ){
            smallest = array [i];
        }
        if (array [i]> largest){
            largest = array [i];
        }
    }
    cout << "Smallest Value = " << smallest << endl;
    cout << "Largest Value = " << largest << endl;
return 0;
}