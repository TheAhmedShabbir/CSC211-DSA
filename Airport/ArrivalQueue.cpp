#include <iostream>
using namespace std;
#define size 10

struct Arrival {
    int flightID,fuel,runwayID;
    string destination;
};
class ArrivalQueue{
private:
    int counter = 0,front = 0,tail = 0;
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
            cout << "Queue is full!!\n";
        } else
            ArrivalInfo();
        ArrivalArray[tail].flightID = arrivalStruct.flightID;
        ArrivalArray[tail].fuel = arrivalStruct.fuel;
        ArrivalArray[tail].destination = arrivalStruct.destination;
        ArrivalArray[tail].runwayID = arrivalStruct.runwayID;
        cout << "FLight Added\n";
    }
    void Dequeue(int flightID){
        if (isEmpty()){
            cout << "Arrival is Empty!!\n";
        } else
            //int num = ArrivalArray[front++];
        counter--;
    }
    void display(){
        for (counter = 0; counter <= tail ; counter++) {
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
