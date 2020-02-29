#include <iostream>
using namespace std;

int main() {
    char array[3][3] = {},choice;
    int box;

//choose symbol
    cout << "Choose your Symbol 'x' and 'o': \n";
    cin >> choice;

//position

    if (choice == 'x' || choice == 'o') {
        cout << "Enter in which box you want to put sign: \n";
        cout << "boxes: 1st 2nd 3rd 4th 5th 6th 7th 8th 9th\n";
        cin >> box;

        if (box == 1) {
            array[0][0] = 'x';
        }
        if (box == 2) {
            array[0][1] = 'x';
        }
        if (box == 3) {
            array[0][2] = 'x';
        }
        if (box == 4) {
            array[1][0] = 'x';
        }
        if (box == 5) {
            array[1][1] = 'x';
        }
        if (box == 6) {
            array[1][2] = 'x';
        }
        if (box == 7) {
            array[2][0] = 'x';
        }
        if (box == 8) {
            array[2][1] = 'x';
        }
        if (box == 9) {
            array[2][2] = 'x';
        }
    }

//_____board______

    cout << array[0][0] << "     |" << array[0][1] << "     |" << array[0][2];
    cout << "\n______";
    cout << "|______";
    cout << "|______\n";
    cout << array[1][0] << "     |" << array[1][1] << "     |" << array[1][2];
    cout << "\n______";
    cout << "|______";
    cout << "|______\n";

    cout << array[2][0] << "     |" << array[2][1] << "     |" << array[2][2] << "\n";

    return 0;
}
