#include <iostream>
using namespace std;
#define size 10

struct Arrival {
    int flightID,fuel,runwayID,priority = 0;
    string destination;
};
class ArrivalQueue{ //Arrival Queue
private:
    int counter = 0,front = 0,tail = 0,Emergency_top = 0;
    Arrival ArrivalArray[size];
    Arrival arrivalStruct;
public:
    int Available_space = size - tail;
    bool isFull(){
        if(tail >= size){
            return true;
        } else
            return false;
    }
    bool isEmpty(){
        if (tail <= 0){
            return true;
        } else
            return false;
    }

    void Enqueue(){
        if(isFull()){
            cout << "Arrival FLights are full!!\n";
        } else
            ArrivalArray[tail].flightID = arrivalStruct.flightID;
        ArrivalArray[tail].fuel = arrivalStruct.fuel;
        ArrivalArray[tail].destination = arrivalStruct.destination;
        ArrivalArray[tail].runwayID = arrivalStruct.runwayID;
        ArrivalArray[tail++].priority = arrivalStruct.priority;
        cout << "Arrival FLight is Added\n";
        Available_space--;
    }

    void display(){
        for (counter = 0; counter <= tail - 1; counter++) {
            cout << ArrivalArray[counter].flightID;
            cout << " ";
            cout << ArrivalArray[counter].fuel;
            cout << " ";
            cout << ArrivalArray[counter].destination;
            cout << " ";
            cout << ArrivalArray[counter].runwayID;
            cout << " ";
            cout << ArrivalArray[counter].priority;
            cout << " ";
        }
        cout << "\n";
    }
    void ArrivalInfo(){
        cout << "Flight ID:";
        cin >> arrivalStruct.flightID;
        cout << "Fuel: ";
        cin >> arrivalStruct.fuel;
        cout << "Destination:";
        cin >> arrivalStruct.destination;
        cout << "Runway ID:";
        cin >> arrivalStruct.runwayID;
        cout << "Enter Priority:";
        cin >> arrivalStruct.priority;
    }
};