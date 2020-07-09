//FA18-BCS-019 AHMED SHABBIR DSA ASSIGNMENT #1 FLIGHT MANAGEMENT SYSTEM
#include <iostream>
using namespace std;
#define size 10

struct Departure { // Departure structure and data
    int flightID,fuel,runwayID,priority = 0;
    string destination;
};

class DepartureQueue{ // Departure Queue
private:
    int counter = 0,tail = 0,Emergency_top = 0;
    Departure DepartureArray[size];
    Departure DepartureStruct;
public:
    int available_space = size - tail;
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
        } else
        if (p == 1) { //if flight emergency and will be added before non emergency flights
            for (int j = tail; j >= Emergency_top; j--) {
                DepartureArray[j + 1] = DepartureArray[j];
            }
            //priority data will be added first
            DepartureArray[Emergency_top].flightID = DepartureStruct.flightID;
            DepartureArray[Emergency_top].fuel = DepartureStruct.fuel;
            DepartureArray[Emergency_top].destination = DepartureStruct.destination;
            DepartureArray[Emergency_top].runwayID = DepartureStruct.runwayID;
            DepartureArray[Emergency_top++].priority = p;
            tail++;
        }
        else {
            // if flight is not emergency and added to tail
            DepartureArray[tail].flightID = DepartureStruct.flightID;
            DepartureArray[tail].fuel = DepartureStruct.fuel;
            DepartureArray[tail].destination = DepartureStruct.destination;
            DepartureArray[tail].runwayID = DepartureStruct.runwayID;
            DepartureArray[tail++].priority = p;
        }
            cout << "Arrival FLight is Added\n";
        available_space--;
    }

    void display(){ // for display of data that user entered
        cout<<"FlightID\tFuel\tDestination\tRunwayID\tPriority\n";
        for (counter = 0; counter <= tail - 1 ; counter++) {
            cout << DepartureArray[counter].flightID << "\t\t";
            cout << DepartureArray[counter].fuel << "\t";
            cout << DepartureArray[counter].destination << "\t\t";
            cout << DepartureArray[counter].runwayID << "\t\t";
            cout << DepartureArray[counter].priority << "\t\n";
        }
        cout << "\n";
    }
    void DepartureInfo(){ // for taking information for user
        cout << "Flight ID:";
        cin >> DepartureStruct.flightID;
        cout << "Fuel:";
        cin >> DepartureStruct.fuel;
        cout << "Destination:";
        cin >> DepartureStruct.destination;
        cout << "Runway ID:";
        cin >> DepartureStruct.runwayID;
    }

    void Emergency() {  // for printing emergency arrivals in reports
        cout<<"FlightID\tFuel\tDestination\tRunwayID\tPriority\n";
        for (int i = Emergency_top; i < tail; i++) {
            if(DepartureArray[i].priority == 1){
                cout << DepartureArray[i].flightID << "\t\t";
                cout << DepartureArray[i].fuel << "\t";
                cout << DepartureArray[i].destination << "\t\t";
                cout << DepartureArray[i].runwayID << "\t\t";
                cout << DepartureArray[i].priority << "\t\n";
            } else
                cout << "No emergency Flights!!!\n";
        }
    }
};