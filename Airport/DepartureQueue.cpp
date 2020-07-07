#include <iostream>
using namespace std;
#define size 20
class DepartureQueue{
private:
    int counter,DepartureArray[size],front,tail;
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
            return "Departure Lane is Full!!\n";
        } else
            DepartureArray[tail++] = num;
            return "Flight is added in Departure!\n";
    }
    int Dequeue(){
        if (isEmpty()){
            return -1;
        } else
            int Dnum = DepartureArray[front];
            front++; counter++;
        return 2;
    }

    void display(){
        for (counter = 0; counter <= size ; ++counter) {
            if(DepartureArray[counter] == 0){
                cout << " ";
            } else
                cout << DepartureArray[counter];
                cout << " ";
        }
    }
};

