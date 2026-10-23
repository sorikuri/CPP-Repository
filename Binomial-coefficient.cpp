#include <iostream>
using namespace std;
int n,r;
int FuncForFact1 (int n){
    int fact1 = 1;
    for (int i =1 ; i <=n; i++){
    fact1 = fact1 * i;
    }
    return fact1;
}
int FuncForFact (int r){
    int fact = 1;
    for (int i =1 ; i <=r; i++){
    fact = fact * i;
    }
    return fact;
}
int FuncForBico ( int n , int r ){
    int Fact_n =  FuncForFact1 (n);
    int Fact_r = FuncForFact (r);
    int Fact_CO = FuncForFact (n - r);
    int Combination = (Fact_n / (Fact_r * Fact_CO));
    return Combination ;
}
int main () 
{ 
 cout << "Enter value of n = " ;
 cin >> n;
 cout << FuncForFact (n) << endl;
 cout << "Enter value of r = " ;
 cin >> r;
 cout << FuncForFact1 (r) << endl; 
 cout << "Combination value = " << FuncForBico (n , r);
return 0;
}