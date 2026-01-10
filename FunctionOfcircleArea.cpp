#include <iostream>
using namespace std;
float circleArea (float pi, float r){   
    float Area = pi * (r*r);
    return Area;
}
int main (){
    float  pi = 3.14, r;
    cout << " Enter the Radius = ";
    cin >> r;
    cout << circleArea(pi , r);
    return 0;
}