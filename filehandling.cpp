#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    cout << "Hello" << endl;
    // ofstream onFile;
    ifstream inFile;
    string str;

    // onFile.open("file.txt");
    // onFile.open("C:\\Users\\adhir\\Desktop\\test.txt");
    inFile.open("file.txt");

    //to write
    // onFile << "Printed in file";

    //to read
    // inFile >> str;
    // cout << str; 

    while(getline(inFile,str)){
        cout << str;
    }

    // cout << "File updated" << endl;

    inFile.close();
}
