//FA18-BCS-019 AHMED SHABBIR DSA ASSIGNMENT #1 FLIGHT MANAGEMENT SYSTEM
#include <iostream>
#include "ArrivalQueue.cpp"
#include "DepartureQueue.cpp"
using namespace std;

int main() {
    ArrivalQueue ArrivalLane1;
    ArrivalQueue ArrivalLane2;
    DepartureQueue DepartureLane1{};
    DepartureQueue DepartureLane2{};

    int choice; // for user choice for Menu

    do{
        m: cout << "-------Menu------\n" //Menu start
                   "Press 1 for Arrival\n"
                "Press 2 for Departure\n"
                "Press 3 for Reports\n"
                "Press 4 to Exit\n";
        cin >> choice; //user input
        if(choice > 4){ // for invalid input in case user enter number greater than 4
            cout << "Invalid Choice!!\n"
                    "Try Again!!\n";
            goto m; //user will be redirected to menu
        }
        if(choice == 1){ // for arrival menu
            int p;
            if(ArrivalLane2.Available_space > ArrivalLane1.Available_space){ // for load balancing
                ArrivalLane2.ArrivalInfo();
                cout << "Press 1 for Emergency Flight and Press 0 for regular Flight:\n";
                cin >> p;
                ArrivalLane2.Enqueue(p);
                ArrivalLane2.display();
            } else {
                ArrivalLane1.ArrivalInfo();
                cout << "Press 1 for Emergency Flight and Press 0 for regular Flight:\n";
                cin >> p;
                ArrivalLane1.Enqueue(p);
                ArrivalLane1.display();
            }
        } else if(choice == 2){ // for departure menu
            int priority;
            if(DepartureLane2.available_space > DepartureLane1.available_space){ // for load balancing
                DepartureLane2.DepartureInfo();
                cout << "Press 1 for Emergency Flight and Press 0 for regular Flight:\n";
                cin >> priority;
                DepartureLane2.Enqueue(priority);
                DepartureLane2.display();
            } else {
                DepartureLane1.DepartureInfo();
                cout << "Press 1 for Emergency Flight and Press 0 for regular Flight:\n";
                cin >> priority;
                DepartureLane1.Enqueue(priority);
                DepartureLane1.display();
            }
        } else if(choice == 3){ // for reports
            cout << "---------REPORTS-------\n"
                    "Press 1 for Emergency Arrivals:\n"
                    "Press 2 for Emergency Departures:\n"
                    "Press 3 to view all Flights:\n";
            cin >> choice;
            if (choice == 1){
                ArrivalLane1.Emergency();
                ArrivalLane2.Emergency();
            } else if (choice == 2){
                DepartureLane1.Emergency();
                DepartureLane2.Emergency();
            } else if (choice == 3){
                cout << "Arrival Lane 1:\n";
                ArrivalLane1.display();
                cout << "Arrival Lane 2:\n";
                ArrivalLane2.display();
                cout << "Departure Lane 1:\n";
                DepartureLane1.display();
                cout << "Departure Lane 1:\n";
                DepartureLane2.display();
            }
        }
    }
    while (choice != 4);
    return 0;
}