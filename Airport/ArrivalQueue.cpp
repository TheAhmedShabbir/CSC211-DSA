#include <iostream>
using namespace std;
#define size 20
class ArrivalQueue{
private:
    int counter,ArrivalArray[size],front,tail;
public:
    bool isFull(){
        if(counter >= size){
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
    bool Enqueue(int num){
        if(isFull()){
            return "Cannot add Flight. Lane is Full";
        }
        else
            ArrivalArray[tail++] = num;
        return "Flight added!!";
    }

    int Dequeue(){
        if (isEmpty()){
            cout << "Arrival is Empty!!";
        } else
            int num = ArrivalArray[front];
            front++; counter++;
            return 1;
    }

    void display(){
        for (counter = 0; counter <= size ; ++counter) {
            if(ArrivalArray[counter] == 0){
                cout << " ";
            } else
            cout << ArrivalArray[counter];
            cout << " ";
        }
    }
};
