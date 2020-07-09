#include <iostream>
using namespace std;
#define size 10

struct Arrival {
    int flightID,fuel,runwayID,priority = 0;
    string destination;
};
class ArrivalQueue{ //Arrival Queue
private:
    int counter = 0,front = 0,tail = 0,top = 0,Stack[size]{};
    Arrival ArrivalArray[size];
    Arrival arrivalStruct;
public:
    bool isFull(){
        if(tail > size){
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
    }
    void Emergency(int fID){
        if (isEmpty()){
            cout << "Empty!!\n";
        } else
            for (counter = 0; counter < tail; counter++) {
                if (fID == ArrivalArray[counter].flightID){
                    ArrivalArray[counter].priority = 1;
                }
            }
    }
    void display(){
        for (counter = 0; counter <= tail - 1; counter++) {
            if (ArrivalArray[counter].priority == 1){

            } else
                cout << ArrivalArray[counter].flightID;
            cout << " ";
            cout << ArrivalArray[counter].fuel;
            cout << " ";
            cout << ArrivalArray[counter].destination;
            cout << " ";
            cout << ArrivalArray[counter].runwayID;
            cout << " ";
        }
        cout << "\n";
    }
    void ArrivalInfo(){
        cout << "Flight ID:";
        cin >> arrivalStruct.flightID;
        cout << "Fuel:";
        cin >> arrivalStruct.fuel;
        cout << "Destination:";
        cin >> arrivalStruct.destination;
        cout << "Runway ID:";
        cin >> arrivalStruct.runwayID;
    }
};