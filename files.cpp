#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int  main(){

    // create a txt file
    ofstream MyWriteFile ("filename.txt");

    // write to the file
    MyWriteFile <<"Files can be tricky, but it is fun enough";

    // close the file
    MyWriteFile.close();

    // create a text string, which is used to output the text file
    string Mytext;

    ifstream MyReadFile("filename.txt");

    while (getline(MyReadFile, Mytext)){
        // output text from file
        cout<<Mytext;
    }

    // close the file
    MyReadFile.close();
}