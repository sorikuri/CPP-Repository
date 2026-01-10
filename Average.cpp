#include <iostream>
using namespace std;
float num1 , num2, num3;
// function for average
float funcAverage (float num1,float num2,float num3){
    float Average = (num1 + num2 +num3)/3;
    return Average;
}
int  main () 
{ // Taking input from the user 
    cout << " Enter num1 = ";
    cin >> num1;
    cout << " Enter num2 = ";
    cin >> num2;
    cout << " Enter num3 = ";
    cin >> num3;
    cout << "Average = " << funcAverage (num1, num2, num3);
return 0;
}