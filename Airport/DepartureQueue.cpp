#include <iostream>
using namespace std;
#define size 10

class DepartureQueue{
private:
    int counter,DepartureArray[size],front,tail;
public:
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

    void Enqueue(int flightID){
        if(isFull()){
            cout << "Departure flight is Full!!\n";
        } else
            DepartureArray[tail++] = flightID;
        cout << "Departure flight is added!!\n";
    }
    int Dequeue(int num){
        if (isEmpty()){
            return -1;
        } else
            num = DepartureArray[front++];
        counter--;
        return num;
    }

    void display(){
        for (counter = 0; counter <= size ; counter++) {
            if(DepartureArray[counter] == 0){
                cout << " ";
            } else
                cout << DepartureArray[counter];
            cout << " ";
        }
        cout << "\n";
    }
};

