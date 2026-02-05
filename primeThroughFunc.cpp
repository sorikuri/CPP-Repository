#include <iostream>
using namespace std;
void primeFunc (int n){
    int count = 0;
    for (int i = 1; i <=n ; i++){
        if (n % i == 0 ){
        cout << i << " IS THE FACTOR OF " << n << endl;
        count ++;
        }
    }
    if (count == 2){
        cout << "\n" << n << " \nIS THE PRIME NUMBER ";
    }
    else {
        cout << "\n" << n << " \nIS  NOT THE PRIME NUMBER ";
    }
}
int main () 
{
    int a;
    cout <<"ENTER NUMBER = " << endl;
    cin >> a;
    primeFunc (a);
return 0;
}