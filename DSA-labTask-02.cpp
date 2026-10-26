#include <iostream>
using namespace std;
int main () 
{
    // Task 01 
    // int size, Temp = 0;
    // cout << "Enter size: " <<endl;
    // cin >> size;
    // int arr [size];
    // cout << "Enter Array Elements :" <<endl;
    // for (int i = 0; i < size ; i ++)
    // {
    //     cin >> arr [i] ;
    // }
    // for (int i = 0; i < size/2; i ++)
    // {
    //     Temp = arr [i];
    //     arr [i] =  arr [size -1 -i];
    //     arr [size -1 -i] = Temp;
    // }
    // cout << "Array Elements are:" <<endl;
    // for (int i = 0; i < size ; i ++)
    // {
    //     cout << arr[i] << endl;
    // }


    //Task 02
    // cout << "Enter size: " <<endl;
    // cin >> size;
    // int arr [size];
    // cout << "Enter Array Elements :" <<endl;
    // for (int i = 0; i < size ; i ++)
    // {
    //     cin >> arr [i] ;
    // }
    // int smallest = INT32_MAX, largest = INT32_MIN;
    // for (int i = 0; i < size; i ++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //     }
    // }
    // cout << "Smallest Number in Array is: " << smallest <<endl;
    // for (int i = 0; i < size; i ++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // cout << "Largest Number in Array is: " << largest <<endl;

    //Task -03
    int size;
    cout << "Enter size: " <<endl;
    cin >> size;
    int arr [size];
    cout << "Enter Array Elements :" <<endl;
    for (int i = 0; i < size ; i ++)
    {
        cin >> arr [i] ;
    }
    int Even_count = 0, Odd_count = 0;
    for (int i = 0; i < size ; i ++)
    {
        if (arr[i]%2 == 0)
        {
            Even_count ++;
        }
        else 
        {
            Odd_count ++;
        }
    }
    cout << "Total Even Number in Array are: " << Even_count << endl;
    cout << "Total Odd Number in Array are: " << Odd_count << endl;
    

return 0;
}