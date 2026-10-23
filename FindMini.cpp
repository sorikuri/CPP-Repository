#include <iostream>
using namespace std;
int num1, num2, num3;
int findMax (int num1, int num2,int num3 ){
   if (num1 > num2 && num1 > num3){
    cout << num1 <<" " << "is greater"<<" " ;
    return num1;
}
   
   else 
   if (num2 > num1 && num2 > num3){
    cout << num2 <<" " << "is greater "<<" ";
       return num2;
   }
   else {
    cout << num3 <<" " <<" is greater "<<" ";
    return num3;
   }
}
int main () 
{
    cout << " Enter num1 = ";
    cin >> num1;
    cout << " Enter num2 = ";
    cin >> num2;
    cout << " Enter num3 = ";
    cin >> num3;
    cout << findMax (num1, num2, num3);
return 0;
}