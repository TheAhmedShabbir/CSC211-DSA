#include <iostream>
#include "ArrivalQueue.cpp"
#include "ArrivalStruct.cpp"
#include "DepartureQueue.cpp"
#include "DepartureStruct.cpp"

using namespace std;

int main() {
    ArrivalQueue arrival;
    DepartureQueue departure;
    int choice;
    cout << "--------MENU---------\n"
            "Press 1 for Departure\n"
            "Press 2 for Arrival\n"
            "Press 3 for Emergency\n"
            "Press 4 for Reports\n";
    cin >> choice;

    switch(choice){
        case 1:

            break;
        case 2:
            arrival.Enqueue(1);
            break;
    }
    return 0;
}