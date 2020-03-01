#include <iostream>
using namespace std;
char array[9] = {};
void board();
void checkWin();
char player1 = 'x', computer = 'o';

int main() {
    int player2;
    int i = 0, box;

    while (i < 5) {
        board();

        //player 1 play
        cout << "Enter where to put X (1 - 9): \n";
        cin >> box;
        array[box - 1] = player1;

        //player 2 play
        b: player2 = rand() % 10;

         if (array[player2 - 1] == player1){
           goto b;
        }
        array[player2 - 1] = computer;
        board();
    i++;
    }
    checkWin();
    return 0;
}
void board(){
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

void checkWin(){
    if (array[0] == player1 && array[1] == player1 && array[2] == player1) {
        cout << player1 <<" won";
    }
    if (array[0] == computer && array[1] == computer && array[2] == computer){
        cout << computer <<" won";
    }
    if (array[3] == player1 && array[4] == player1 && array[5] == player1) {
        cout << player1 <<" won";
    }
    if (array[3] == computer && array[4] == computer && array[5] == computer) {
        cout << computer <<" won";
    }
    if (array[6] == player1 && array[7] == player1 && array[8] == player1) {
        cout << player1 <<" won";
    }
    if (array[6] == computer && array[7] == computer && array[8] == computer) {
        cout << computer <<" won";
    }
    if (array[0] == player1 && array[3] == player1 && array[6] == player1) {
        cout << player1 <<" won";
    }
    if (array[0] == computer && array[3] == computer && array[6] == computer) {
        cout << computer <<" won";
    }
    if (array[1] == player1 && array[4] == player1 && array[7] == player1) {
        cout << player1 <<" won";
    }
    if (array[1] == computer && array[4] == computer && array[7] == computer) {
        cout << computer <<" won";
    }
    if (array[2] == player1 && array[5] == player1 && array[8] == player1) {
        cout << player1 <<" won";
    }
    if (array[2] == computer && array[5] == computer && array[8] == computer) {
        cout << computer <<" won";
    }
    if (array[0] == player1 && array[4] == player1 && array[8] == player1) {
        cout << player1 <<" won";
    }
    if (array[0] == computer && array[4] == computer && array[8] == computer) {
        cout << computer <<" won";
    }
    if (array[2] == player1 && array[4] == player1 && array[6] == player1) {
        cout << player1 <<" won";
    }
    if (array[2] == computer && array[4] == computer && array[6] == computer) {
        cout << computer <<" won";
    }
}