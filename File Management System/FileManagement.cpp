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
    int counter;
public:

    int createFile(char FileName[],char ext[],char FileData[]){
        for(counter = 0; counter <= totalFiles; counter++){
            fileInfo[counter].fileIndex = -1;
        }
        fileInfo[4].start = -3;

        for (counter = 0; counter <= 100; counter++) {
            fileData[counter].nextIndex = -1;
        }
        fileData[99].nextIndex = -3;
    }

    bool deleteFile(char FileName[],char ext[]){

    }

    bool viewFile(char FileName[],char ext[]){
        if(FileName[counter] != fileInfo->fileName && ext[counter] != fileInfo->fileExt) {
            cout << "File not Exist!!\n";
        } else
            cout << fileData->Data;
    }
};

