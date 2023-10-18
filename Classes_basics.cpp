// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Car{
    private:
    int cost;
    public:
        Car(){
        cout << "Hello World!"<<endl;
    }
    string brand = "Ford";
    void honk(){
        cout<<"Honking"<<endl;
    }
    
    public: 
    void setter(int x){
        cost=x;
    }
    
    public:
    int getter(){
        return cost;
    }
};

// another base class
class Car2{
    public:
    void someotherfunction(){
        cout<<"Some another function"<<endl;
    }
};

// Derived class
class Toyota: public Car{
    public: 
    string model = "Corolla";
    
};

// Grand child class -- this is multilevel inheritance
class Model2011: public Toyota{
};

// Multiple inheritance -- this is deriving from multiple classes
class vehicle: public Car, public Car2{
};

int main() {
    // Write C++ code here
   // Car Obj1;
   
   cout<<"\n"<<"Accessing private member using setter/getter"<<endl;
    Model2011 Obj2;
    //Obj1.cost = 1;
    Obj2.setter(500);
    cout<<Obj2.getter()<<endl;
    
    cout<<"\n"<<"Grand child (multi-level) class calling function of base class"<<endl;
    Obj2.honk();
    cout<<Obj2.model+" "+Obj2.brand<<endl;
    
    cout<<"\n"<<"Multiple inheritance"<<endl;
    vehicle Obj3;
    Obj3.someotherfunction();
    Obj3.honk();
    
    return 0;
}