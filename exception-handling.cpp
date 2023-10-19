#include <iostream>
using namespace std;

int main(){

    try{
        int age;
        cout<<"Enter you age: ";
        cin>>age;
        if (age>18){
            cout<<"Access granted, you are old enough"<<endl;
        }
        else{
            throw 505;
        }
    }

    catch(...){
        cout<<"Access denied you must be 18 to enter. \n";
    }


}