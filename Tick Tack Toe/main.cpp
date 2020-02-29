#include <iostream>
using namespace std;

int main() {
    char array[9] = {},choice;
    int box;

    do {
//choose symbol
        cout << "Choose your Symbol 'x' and 'o': \n";
        cin >> choice;
//position
        if (choice == 'x') {
            do {
            cout << "Enter in which box you want to put sign: \n";
            cout << "boxes: 1st 2nd 3rd 4th 5th 6th 7th 8th 9th\n";
            cin >> box;

            if (box == 1) {
                array[0] = 'x';
            }
            if (box == 2) {
                array[1] = 'x';
            }
            if (box == 3) {
                array[2] = 'x';
            }
            if (box == 4) {
                array[3] = 'x';
            }
            if (box == 5) {
                array[4] = 'x';
            }
            if (box == 6) {
                array[5] = 'x';
            }
            if (box == 7) {
                array[6] = 'x';
            }
            if (box == 8) {
                array[7] = 'x';
            }
            if (box == 9) {
                array[8] = 'x';
            }
            cout << array[0] << "     |" << array[1] << "     |" << array[2];
            cout << "\n______";
            cout << "|______";
            cout << "|______\n";
            cout << array[3] << "     |" << array[4] << "     |" << array[5];
            cout << "\n______";
            cout << "|______";
            cout << "|______\n";
            cout << array[6] << "     |" << array[7] << "     |" << array[8] << "\n";
            }
            while (box != 9);
            //result
            if (array[0] == array[1] && array[1] == array[2]){
                cout << "x wins";
                break;
            }
            if (array[3] == array[4] && array[4] == array[5]){
                cout << "x wins";
                break;
            }
            if (array[6] == array[7] && array[7] == array[8]){
                cout << "x wins";
                break;
            }
        }
        else
            cout << "Invalid input..\nPlease try again!\n";
    }
    while (choice != 'x' && choice != 'o');
    return 0;
}