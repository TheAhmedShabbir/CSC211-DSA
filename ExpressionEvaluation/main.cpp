#include <iostream>
#include "stack.cpp"
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}

int precedence(char opr){
    if(opr == '-'){
        return 1;
    }
    else if(opr == '+'){
        return 2;
    }
    else if(opr == '*'){
        return 3;
    }
    else if(opr == '/'){
        return 4;
    } else
        return -1;
}
