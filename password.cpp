#include <iostream>
using namespace std;
int main () 
{
    char ch1, ch2,ch3, ch4, ch5, ch6 , ch7, ch8 ;

    cout << " Enter Password:";
    cin >> ch1 >> ch2 >> ch3 >>ch4 >> ch5 >> ch6 >> ch7 >> ch8;
    if (ch1 >= '0' && ch1 <= '9'||
        ch2 >= '0' && ch2 <= '9'||
        ch3 >= '0' && ch3 <= '9'||
        ch4 >= '0' && ch4 <= '9'||
        ch5 >= '0' && ch5 <= '9'||
        ch6 >= '0' && ch6 <= '9'||
        ch7 >= '0' && ch7 <= '9'||
        ch8 >= '0' && ch8 <= '9') {
            cout << "It's a Strong Password";
        }
        else {
            cout <<"It's a Weak Password";
        }

return 0;
}