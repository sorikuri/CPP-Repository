#include <iostream>
using namespace std;
float h, b;
float triangleArea (float Height, float Base){       
    float Area = (h * b)/2;
    return Area;
}    
int main () 
{cout << " Enter Height = ";
    cin >>  h ;
    cout << " Enter Base = ";
    cin >>  b ;
    cout << triangleArea( h , b );
return 0;
}