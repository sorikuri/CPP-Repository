#include <iostream>
using namespace std;
void Addmarks (int& marks){
    int grace ;
    cout << "Enter grace marks" << endl;
    cin >> grace;
    marks += grace;
}
int main () 
{
    int marks;
    cout << "enter marks" << endl;
    cin >> marks;
    cout << "result before grace marks = "<< marks << endl;
    Addmarks (marks);
    cout << "result after grace marks = "<< marks << endl;
return 0;
}