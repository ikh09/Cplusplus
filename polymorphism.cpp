// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Car{
   
    public:
    void honk(){
        cout<<"Honking"<<endl;
    }
};

// Derived class
class Toyota: public Car{
    public:
        void honk(){
        cout<<"Toyota Honking"<<endl;
    }
};

// Another Derived class
class Honda: public Car{
    public:
        void honk(){
        cout<<"Honda Honking"<<endl;
    }
};


int main() {
    
    //Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.):
    
    cout<<"\n"<<"Plymorphism Example"<<endl;
    Car c;
    Toyota t;
    Honda h;
    c.honk();
    t.honk();
    h.honk();
    return 0;
}