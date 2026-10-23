#include <iostream>
using namespace std;
int main () 
{
    int choice;
    int car =0 , bus =0 , truck =0;
    int totalAmount =0;
    while (true){
    cout <<  "Toll Plaza\n";
    cout <<  "car (Rs 100)\n";
    cout <<  "bus (Rs 700)\n";
    cout <<  "truck (Rs 800)\n";
    cout <<  "government vehicle (Rs 0)\n";
    cout << "Enter your choice of vehicle ";
    cin >> choice ;

    switch (choice)
    {
        case 1:
        car++;
        totalAmount += 100;
        cout << "Car passed token colleckted";
        break;

        case 2:
        bus++;
        totalAmount += 700;
        cout << "Bus passed token colleckted";
        break;

        case 3:
        truck++;
        totalAmount += 800;
        cout << "Truck passed token colleckted";
        break;

        case 4:
        cout << "Ending system";
        cout <<  "car (Rs 100)\n"<<car;
        cout <<  "bus (Rs 700)\n"<<bus;
        cout <<  "truck (Rs 800)\n"<<truck;
        cout <<"total amount collected "<<totalAmount <<endl;
        break;
        
        default:
        cout <<"Invalid choice try again";

    }
    }
return 0;
}