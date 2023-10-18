// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Car{
    private:
    int cost;
    
    protected:
    int salary;
    
    void honk(){
        cout<<"Honking"<<endl;
    }
};

// Derived class
class Toyota: public Car{
    public:
    void setter(int s){
        salary=s;
    }
    public:
    int getter(){
        return salary;
    }
    
    void someotherfunction(){
        cout<<"Some another function"<<endl;
    }
};


int main() {
    
    cout<<"\n"<<"Accessing protected member of base class in derived class"<<endl;
    Toyota t;
    t.setter(5000);
    cout<<t.getter();
    
    return 0;
}