#include <iostream>
#include "FileManagement.cpp"
#define Size 50
#define totalFiles 5
using namespace std;

int main() {
    int choice;
    char fName[Size],fExt[4],fData[100];
    FileManagement File{};
    do {
            cout << "------Menu-----\n"
                    "Press 1 to create file\n"
                    "Press 2 to delete file\n"
                    "Press 3 to view file\n"
                    "Press 4 to Exit\n";
            cin >> choice;

            if (choice == 1){
                cout << "Enter File Name \n";
                cin >> fName;
                cout << "Enter File extension \n";
                cin >> fExt;
                cout << "Enter File Data \n";
                cin >> fData;

                File.createFile(fName, fExt, fData);
            }
            else if (choice == 2){
                cout << "Enter File Name \n";
                cin >> fName;
                cout << "Enter File extension \n";
                cin >> fExt;

                File.deleteFile(fName, fExt);
            }
            else if (choice == 3){
                cout << "Enter File Name \n";
                cin >> fName;
                cout << "Enter File extention \n";
                cin >> fExt;
                File.viewFile(fName, fExt);
            } else if(choice == 4){
                break;
            } else
                cout << "Invalid choice!!\n"
                        "Try Again!!\n";
    } while (choice != 1 | choice != 2 || choice != 3 || choice != 4);
    return 0;
}
