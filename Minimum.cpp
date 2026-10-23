#include <iostream>
using namespace std;
int num1, num2, num3;
int findMini (int num1, int num2,int num3 ){
   if (num1 < num2 && num1 < num3){
    cout << num1 <<" " << "is smallest"<<" " ;
    return num1;
}
   
   else 
   if (num2 < num1 && num2 < num3){
    cout << num2 <<" " << "is smallest "<<" ";
       return num2;
   }
   else {
    cout << num3 <<" " <<" is smallest "<<" ";
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
    cout << findMini (num1, num2, num3);
return 0;
}