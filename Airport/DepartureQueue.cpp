#include <iostream>
using namespace std;
#define size 10

struct Departure {
    int flightID,fuel,runwayID,priority = 0;
    string destination;
};

class DepartureQueue{
private:
    int counter = 0,front = 0,tail = 0;
    Departure DepartureArray[size];
    Departure DepartureStruct;
public:
    int available_space = size - tail;
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
            cout << "Departure flights are Full!!\n";
        } else
            DepartureArray[tail].flightID = DepartureStruct.flightID;
        DepartureArray[tail].fuel = DepartureStruct.fuel;
        DepartureArray[tail].destination = DepartureStruct.destination;
        DepartureArray[tail].runwayID = DepartureStruct.runwayID;
        DepartureArray[tail].priority = DepartureStruct.priority;
        cout << "Departure flight is added!!\n";
        available_space--;
    }
    int Dequeue(int num){
        if (isEmpty()){
            return -1;
        } else
           // num = DepartureArray[front++];
        counter--;
        return num;
    }

    void display(){
        for (counter = 0; counter <= tail - 1 ; counter++) {
            cout << DepartureArray[counter].flightID;
            cout << " ";
            cout << DepartureArray[counter].fuel;
            cout << " ";
            cout << DepartureArray[counter].destination;
            cout << " ";
            cout << DepartureArray[counter].runwayID;
            cout << " ";
            cout << DepartureArray[counter].priority;
            cout << " ";
        }
        cout << "\n";
    }

    void DepartureInfo(){
        cout << "Flight ID:";
        cin >> DepartureStruct.flightID;
        cout << "Fuel:";
        cin >> DepartureStruct.fuel;
        cout << "Destination:";
        cin >> DepartureStruct.destination;
        cout << "Runway ID:";
        cin >> DepartureStruct.runwayID;
        cout << "Enter Priority: ";
        cin >> DepartureStruct.priority;
    }
};