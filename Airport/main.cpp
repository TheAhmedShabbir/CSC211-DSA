#include <iostream>
#include "ArrivalQueue.cpp"
#include "DepartureQueue.cpp"
using namespace std;

int main() {
    ArrivalQueue ArrivalLane1;
    ArrivalQueue ArrivalLane2;
    DepartureQueue DepartureLane1{};
    DepartureQueue DepartureLane2{};

    int choice;

    do{
        m: cout << "-------Menu------\n"
                   "Press 1 for Arrival\n"
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
            if(ArrivalLane2.Available_space > ArrivalLane1.Available_space){
                ArrivalLane2.ArrivalInfo();
                ArrivalLane2.Enqueue();
                ArrivalLane2.display();
            } else {
                ArrivalLane1.ArrivalInfo();
                ArrivalLane1.Enqueue();
                ArrivalLane1.display();
            }
        } else if(choice == 2){
            if(DepartureLane2.available_space > DepartureLane1.available_space){
                DepartureLane2.DepartureInfo();
                DepartureLane2.Enqueue();
                DepartureLane2.display();
            } else {
                DepartureLane1.DepartureInfo();
                DepartureLane1.Enqueue();
                DepartureLane1.display();
            }
        } else if(choice == 3){
            cout << "Reports:\n";
            cout << "Arrival Lane 1:\n";
            ArrivalLane1.display();
            cout << "Arrival Lane 2:\n";
            ArrivalLane2.display();
            cout << "Departure Lane 1:\n";
            DepartureLane1.display();
            cout << "Departure Lane 2:\n";
            DepartureLane2.display();
        } else if (choice == 4){
            ArrivalLane1.display();
        }
    }
    while (choice != 5);
    return 0;
}