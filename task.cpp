#include <iostream>
using namespace std;
int main () 
{
    int n, a;
    do{
        cout <<"1- Even numbers of your choice from 1 - N"<<endl;
        cout<<"2- Odd numbers of your choice from 1 - N"<<endl;
        cout<<"3- Exist"<<endl;
        cout<<"Enter case number ";
        cin>>n;

        switch (n)
        {
            case 1:
            cout << "Enter Numbers  "<<endl;
            cin >> a;
            for (int i = 0; i <= a; i++)
            {
                if (i%2 == 0)
                {
                    cout<<i<<" ";
                } 
            }
            cout<<endl<<endl;
            break;
            case 2:
            cout << "Enter Numbers  "<<endl;
            cin >> a;
            for (int i =0; i<= a; i++){
                if (i%2 != 0)
                {
                    cout<<i<<endl;
                }
            }
            break;

            case 3:
            cout <<"Invalid choice"<<endl;
            break;

            default:
            cout<< " Get out"<<endl;   
        }
    }
    while ( n!= 4 );

return 0;
}