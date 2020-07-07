#include <iostream>
#include "ArrivalQueue.cpp"
#include "DepartureQueue.cpp"

using namespace std;

int main() {
    int choice,back;
    ArrivalQueue ArrivalLane1{};
    ArrivalQueue ArrivalLane2{};
    DepartureQueue DepartureLane1{};
    DepartureQueue DepartureLane2{};

    cout << "-------Menu------\n"
            "Press 1 for Arrival\n"
            "Press 2 for Departure\n"
            "Press 3 for Emergency\n"
            "Press 4 for Reports\n"
            "Press 5 for Exit\n";
    cin >> choice;

    switch (choice){
        case 1:
            int a;
            cout << "Press 1 for Add Flight\n"
                    "Press 0 to go back\n";
            cin >> a;
            if (a == 1){
                ArrivalLane1.Enqueue(2);
                ArrivalLane1.display();
            } else
                cout << "Invalid Choice!!\n";
            break;
        case 2:
            int b;
            cout << "Press 1 for Add Flight\n"
                    "Press 2 for cancel Flight\n"
                    "Press 0 to go back\n";
                    cin >> b;
                    switch (b){
                        case 0:
                            break;
                        case 1:
                            DepartureLane1.Enqueue(1);
                            DepartureLane1.display();
                            break;
                        case 2:
                            DepartureLane1.Dequeue();
                            DepartureLane1.display();
                            break;
                        default:
                            cout << "Invalid Choice!!\n";
                    }
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            break;
        default:
            cout << "Invalid Choice!!\n"
                    "Please Try Again!\n";
    }
    return 0;
}