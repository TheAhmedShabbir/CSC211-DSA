#include <iostream>

const int size = 10;
class ArrivalQueue {
public:
    int counter;
    int array[size] = {};
    void Enqueue(int num) {
        for(counter = 0; counter > size; counter++){

        }
    }

    bool isFull() {
        if (counter >= size){
            return true;
        }
        else
            return false;
    };
};