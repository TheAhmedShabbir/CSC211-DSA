#include <iostream>
#define Size 50
#define totalFiles 5
using namespace std;

struct FData{
    char Data;
    int nextIndex;
};

struct File{
    char fileName[50];
    char fileExt[4];
    int start;
};

class FileManagement {
private:
    FData fileData[Size];
    FILE fileInfo[totalFiles];
public:

    int createFile(char FileName[],char ext[],char FileData[]){

    }

    bool deleteFile(char FileName[],char ext[]){

    }

    bool viewFile(char FileName[],char ext[]){

    }
};

