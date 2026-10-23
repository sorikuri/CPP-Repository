#include <iostream>
using namespace std;
int main () 
{   
    float a , b;
    char ch ;
    cout << "Enter any value :";
    cin >> a ;
    cout << "Enter any value : ";
    cin  >> b ;
    cout << "Enter desired case : ";
    cin >> ch;
    switch (ch ){
        case 'a':
        cout << "Addition : ";
        cout << a+b;
        break ;
        case 's':
        cout << "Subtraction :";
        cout << a-b;
        break ;
        case 'm':
        cout << "Multiplication :";
        cout << a*b;
        break ;
        case 'd':
        cout << "Division :";
        cout << a/b;
        break ;
        default :
        cout << " I'm  a default case";
    }
return 0;
}













// int n = 5;
//     char ch = 'A';
//     for (int i =0; i<n; i++){
//         for (int j =0; j<n; j++){
//             cout << ch << " " ;
//             ch++;
//         }
//         cout << endl;
//     }






// int a = 5;
//     int b = 4;
//     cout << a +b ;

    // char ch ;
    // char a, b, c,d ,e ;
    // cout << " enter Password" << " ";
    // cin >> a >> b >> c >> d >> e;
    // cout <<a<<b<<c<<d<<e  ;   





    
    // int temp;
    // cout << "Enter Temperature in Celsius :"<< " ";
    // cin>> temp;
    // if (temp  <= 0){
    //     cout << " It's Freezing outside. ";
    // }
    // else if (temp >0 && temp <=15){
    //     cout << " It's Cold outside. ";
    // }
    // else if (temp > 15 && temp <= 30 ){
    //     cout << "It's Warm outside. ";
    // }
    // else {
    //     cout << " It's Hot outside. ";
    // }