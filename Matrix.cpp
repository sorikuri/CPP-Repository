#include <iostream>
using namespace std;
int main () 
{
    int i, j;
    int rows = 3, columns =3 , a [rows][columns], b [rows] [columns] , c [rows] [columns];
    cout << "Enter Number  for martix a = ";
    for (i = 0; i < 3; i++ ){
        for (j = 0; j < 3; j++){
            cin >> a [i][j];
        }
    }   
    for (i = 0; i < 3; i++ ){
        for (j = 0; j < 3; j++){
            cout << a [i][j] << " " ;
        }
        cout << endl;
    }
    cout << "Enter Number for matrix b  = ";
    for (i = 0; i < 3; i++ ){
        for (j = 0; j < 3; j++){
            cin >> b [i][j];
        }
    }
    for (i = 0; i < 3; i++ ){
        for (j = 0; j < 3; j++){
            cout << b [i][j] << " " ;
        }
        cout << endl;
    }
    
    for (i =0 ; i< 3; i++){
        for (j=0; j<3 ; j++){
        c[i][j] = a [i][j] + b [i] [j];
        }
    }
    cout << "Summation of Matrixes are = ";
    for (i =0 ; i< 3; i++){
        for (j=0; j<3 ; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}