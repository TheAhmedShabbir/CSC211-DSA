//FA18-BCS-019 AHMED SHABBIR DSA ASSIGNMENT #1 FLIGHT MANAGEMENT SYSTEM
#include <iostream>
using namespace std;
#define size 10

struct Arrival { // Arrival Structure and data
    int flightID,fuel,runwayID,priority = 0;
    string destination;
};
class ArrivalQueue{ // Arrival Queue
private:
    int counter = 0,tail = 0,Emergency_top = 0;
    Arrival ArrivalArray[size];
    Arrival arrivalStruct;
public:
    int Available_space = size - tail;
    bool isFull(){ // for check if queue is full or not
        if(tail >= size){
            return true;
        } else
            return false;
    }
    bool isEmpty(){ // for check if queue is empty or not
        if (tail <= 0){
            return true;
        } else
            return false;
    }

    void Enqueue(int p){ // for input data into queue
        if(isFull()){ // for check if queue is full or not
            cout << "Arrival FLights are full!!\n";
        } else // if queue is empty
        if (p == 1) {//if flight emergency and will be added before non emergency flights
            for (int j = tail; j >= Emergency_top; j--) {
                ArrivalArray[j + 1] = ArrivalArray[j];
            }
            //priority data will be added first
            ArrivalArray[Emergency_top].flightID = arrivalStruct.flightID;
            ArrivalArray[Emergency_top].fuel = arrivalStruct.fuel;
            ArrivalArray[Emergency_top].destination = arrivalStruct.destination;
            ArrivalArray[Emergency_top].runwayID = arrivalStruct.runwayID;
            ArrivalArray[Emergency_top++].priority = p;
            tail++;
        }
        else { // if flight is not emergency and added to tail
            ArrivalArray[tail].flightID = arrivalStruct.flightID;
            ArrivalArray[tail].fuel = arrivalStruct.fuel;
            ArrivalArray[tail].destination = arrivalStruct.destination;
            ArrivalArray[tail].runwayID = arrivalStruct.runwayID;
            ArrivalArray[tail++].priority = p;
        }
         cout << "Arrival FLight is Added\n";
        Available_space--; // size of queue will be reduced as data is entered
    }
    void display(){ // for display of data that user entered
        cout<<"FlightID\tFuel\tDestination\tRunwayID\tPriority\n";
        for (counter = 0; counter <= tail - 1; counter++) {
            cout << ArrivalArray[counter].flightID << "\t\t";
            cout << ArrivalArray[counter].fuel << "\t";
            cout << ArrivalArray[counter].destination << "\t\t";
            cout << ArrivalArray[counter].runwayID << "\t\t";
            cout << ArrivalArray[counter].priority << "\t\n";
        }
        cout << "\n";
    }
    void ArrivalInfo(){ // for taking information for user
        cout << "Flight ID:";
        cin >> arrivalStruct.flightID;
        cout << "Fuel: ";
        cin >> arrivalStruct.fuel;
        cout << "Destination:";
        cin >> arrivalStruct.destination;
        cout << "Runway ID:";
        cin >> arrivalStruct.runwayID;
    }

    void Emergency() { // for printing emergency arrivals in reports
        cout<<"FlightID\tFuel\tDestination\tRunwayID\tPriority\n";
        for (int i = Emergency_top; i < tail; i++) {
            if(ArrivalArray[i].priority == 1){
                cout << ArrivalArray[i].flightID << "\t\t";
                cout << ArrivalArray[i].fuel << "\t";
                cout << ArrivalArray[i].destination << "\t\t";
                cout << ArrivalArray[i].runwayID << "\t\t";
                cout << ArrivalArray[i].priority << "\t\n";
            } else
                cout << "No emergency Flights!!!\n";
        }
    }
};