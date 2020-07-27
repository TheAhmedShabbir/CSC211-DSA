#include <iostream>
#include "FileManagement.cpp"
#define Size 50
#define totalFiles 5
using namespace std;

int main() {
    int choice,counter = 0;
    char fName[Size],fExt[4];
    FileManagement File{};

    cout << "------Menu-----\n"
            "Press 1 to create file\n"
            "Press 2 to delete file\n"
            "Press 3 to view file\n";
    cin >> choice;

    if (choice == 3){
        cout << "Enter File Name \n";
        cin >> fName;
        cout << "Enter File extention \n";
        cin >> fExt;
        File.viewFile(fName,fExt);
    } else
        cout << "Invalid choice!!\n"
                "Try Again!!\n";

    return 0;
}
