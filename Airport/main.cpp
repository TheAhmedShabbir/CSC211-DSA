#include <iostream>
#include "ArrivalQueue.cpp"
#include "DepartureQueue.cpp"

using namespace std;

int main() {
    ArrivalQueue ArrivalLane1{};
    ArrivalQueue ArrivalLane2{};
    DepartureQueue DepartureLane1{};
    DepartureQueue DepartureLane2{};

    ArrivalLane1.display();
    ArrivalLane1.Enqueue(1);
    ArrivalLane1.display();
    ArrivalLane1.Enqueue(2);
    ArrivalLane1.display();
    ArrivalLane1.Enqueue(3);
    ArrivalLane1.display();

    DepartureLane1.display();
    DepartureLane1.Enqueue(5);
    DepartureLane1.display();
    DepartureLane1.Enqueue(6);
    DepartureLane1.display();
    DepartureLane1.Enqueue(7);
    DepartureLane1.display();
    return 0;
}