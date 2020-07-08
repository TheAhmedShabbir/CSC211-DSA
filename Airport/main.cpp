#include <iostream>
#include "ArrivalQueue.cpp"
#include "DepartureQueue.cpp"
using namespace std;

int main() {
    ArrivalQueue ArrivalLane1{};
    ArrivalQueue ArrivalLane2{};
    DepartureQueue DepartureLane1{};
    DepartureQueue DepartureLane2{};

    ArrivalLane1.Enqueue();
    ArrivalLane1.display();

    return 0;
}