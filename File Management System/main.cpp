#include <iostream>
#include "FileManagement.cpp"
using namespace std;

int main() {
    int choice;
    FileManagement File{};


    cout << "------Menu-----\n"
            "Press 1 to create file\n"
            "Press 2 to delete file\n"
            "Press 3 to view file\n";
    cin >> choice;

    if(choice == 1){
        File.createFile();
    }
    else if (choice == 2){
        File.deleteFile();
    }
    else if (choice == 3){
        File.viewFile();
    } else
        cout << "Invalid choice!!\n"
                "Try Again!!\n";

    return 0;
}
