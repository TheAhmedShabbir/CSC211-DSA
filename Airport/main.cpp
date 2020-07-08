#include <iostream>
#include "ArrivalQueue.cpp"
#include "DepartureQueue.cpp"
using namespace std;

int main() {
    ArrivalQueue ArrivalLane1{};
    ArrivalQueue ArrivalLane2{};
    DepartureQueue DepartureLane1{};
    DepartureQueue DepartureLane2{};

    int choice;

    do{
        m: cout << "Press 1 for Arrival\n"
                "Press 2 for Departure\n"
                "Press 3 for Reports\n"
                "Press 4 for Emergency\n"
                "Press 5 to Exit\n";
        cin >> choice;
        if(choice > 5){
            cout << "Invalid Choice!!\n"
                    "Try Again!!\n";
            goto m;
        }
        if(choice == 1){
            ArrivalLane1.ArrivalInfo();
            ArrivalLane1.Enqueue();
            ArrivalLane1.display();
        } else if(choice == 2){
            DepartureLane1.DepartureInfo();
            DepartureLane1.Enqueue();
            DepartureLane1.display();
        }
    }
    while (choice != 5);
    return 0;
}