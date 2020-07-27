//FA18-BCS-019 AHMED SHABBIR FILE MANAGEMENT SYSTEM
#include <iostream>
#define Size 50
#define totalFiles 5
using namespace std;

struct FData{
    char Data;
    int nextIndex;
};

struct File{
    char fileName;
    char fileExt;
    int start, fileIndex;
};

class FileManagement {
private:
    FData fileData[100];
    File fileInfo[totalFiles];
public:
    void status(){ // This will set the status of all indexes to -1 means it is available
        for(int counter = 0; counter < totalFiles; counter++){
            fileInfo[counter].fileIndex = -1;
        }
        fileInfo[4].fileIndex = -3;

        for (int counter = 0; counter < 100; counter++) {
            fileData[counter].nextIndex = -1;
        }
        fileData[99].nextIndex = -3;
    }
    bool createFile(char FileName[],char ext[],char FileData[],int space){// this will create file
        int i = 0;
        if (fileInfo[i].fileIndex == -1 || fileData[i].nextIndex == -1){
            for (i = 0; i < space; i++) {
                fileInfo[i].fileName = FileName[i];
                fileInfo[i].fileExt = ext[i];
                fileInfo[i].start = fileData[i].nextIndex;
                fileData[i].Data = FileData[i];
            }
            fileData[i].nextIndex = -2;
            fileInfo[i].fileIndex = i+1;
            cout << "file created!!\n";
        } else
            cout << "File not created!!\n";
    }

    void deleteFile(char FileName[],char ext[]){// this will delete the file and data
        int counter = 0;
        if(FileName[counter] != fileInfo[counter].fileName || ext[counter] != fileInfo[counter].fileExt) {
              cout << "File not Exist!!\n";
        } else
            for (counter = 0; counter < 100; counter++) {
                fileData[counter].nextIndex = -9;
                fileData[counter].Data = 0;
            }
        fileInfo[counter].fileIndex = -9;
        cout << "File deleted\n";
    }

    void viewFile(char FileName[],char ext[]){// this will view the file data
        int counter = 0;
        if(FileName[counter] != fileInfo->fileName || ext[counter] != fileInfo->fileExt) {
            cout << "File not Exist!!\n";
        } else if(fileData[counter].nextIndex == -9){
            cout << "File deleted!!\n";
        }else
            for (int i = 0; i < 100; i++) {
                cout << fileData[i].Data;
                if (fileData[i].nextIndex == -2 && fileData[i].nextIndex == -1){
                    break;
                }
            }
            cout << "\n";
    }
};