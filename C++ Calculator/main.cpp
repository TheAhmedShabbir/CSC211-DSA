#include <iostream>
using namespace std;

int main(){
    int num1,num2,op,r = 0,result[10];
    char menu;

    cout << "Press 1 to use Calculator\nPress 2 for History\n";
    cin >> op;
    if (op == 1){
            cout << "Enter first number:\n";
            cin >> num1;
            cout << "Enter second number:\n";
            cin >> num2;
        for (int i = 0; i < 2 ; ++i) {
            int array[2] = {num1,num2};
            cout << array[i] << " ";
        }

        cout << "Press a for addition\nPress s for subtraction\nPress m for multiplication\nPress d for division\n";
        cin >> menu;

        switch(menu){
            case 'a':
                r = num1 + num2;
                result[0] = {r};
                cout << result[0];
                break;
            case 's':
                r = num1 - num2;
                result[1] = {r};
                cout << result[1];
                break;
            case 'm':
                r = num1 * num2;
                result[2] = {r};
                cout << result[2];
                break;
            case 'd':
                r = num1 / num2;
                result[3] = {r};
                cout << result[3];
                break;
            default:
                cout << "invalid!";
        }
    }
    else if (op == 2){

        for (int i = 0; i < 4; i++) {
            result[i] = {r};
            cout << result[i];
        }
    }
    else
        cout << "Invalid";

    return 0;
}