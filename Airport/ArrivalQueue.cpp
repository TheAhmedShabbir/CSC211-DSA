#include <iostream>
#include "ArrivalStruct.cpp"

using namespace std;
#define size 10

class ArrivalQueue{
private:
    int counter,ArrivalArray[size],front,tail;
public:
    bool isFull(){
        if(tail > size){
            return true;
        } else
            return false;
    }
    bool isEmpty(){
        if (counter <= 0){
            return true;
        } else
            return false;
    }

    void Enqueue(int flightID){
        if(isFull()){
            cout << "Queue is full!!\n";
        } else
            ArrivalArray[tail++] = flightID;
        cout << "FLight Added\n";
    }
    void Dequeue(int flightID){
        if (isEmpty()){
            cout << "Arrival is Empty!!\n";
        } else
            int num = ArrivalArray[front++];
        counter--;
    }
    void display(){
        for (counter = 0; counter <= size ; counter++) {
            if(ArrivalArray[counter] == 0){
                cout << " ";
            } else
        cout << ArrivalArray[counter];
            cout << " ";
        }
        cout << "\n";
    }
};
