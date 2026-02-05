#include <iostream>
using namespace std;
void LeapYear (int year){
    if (year % 4 == 0){
        cout << year << "\t is leap year";
    }
    else {
       cout << year << "\t is not a leap year"; 
    }
}
int main () 
{
    int year;
    cout << "ENTER YEAR FOR CHECKING = ";
    cin >> year ;
    LeapYear (year);
return 0;
}