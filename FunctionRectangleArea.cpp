#include <iostream>
using namespace std;
float l, w;
float rectangleArea (float Length, float Width){       
    float Area = (l * w);
    return Area;
}    
int main () 
{
    cout << " Enter Length = ";
    cin >>  l ;
    cout << " Enter Width = ";
    cin >>  w ;
    cout << rectangleArea(l , w );
return 0;
}