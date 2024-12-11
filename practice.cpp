#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound()=0;
};

class Dog: public Animal
{
    public:
        Dog(){
            cout<<"Dog Constructor called...!"<<endl;
        }
        void sound(){
            cout<<"Dog barks..!"<<endl;
        }
        ~Dog(){
            cout<<"Dog Class : Destructor called...!"<<endl;
        }
};

class Cat : public Animal{
    public:
        Cat(){
            cout<<"Cat Constructor called...!"<<endl;
        }
        void sound(){
            cout<<"Cat meows..!"<<endl;
        }
        ~Cat(){
            cout<<"Cat Class : Destructor called...!"<<endl;
        }
};

int main(){
    Animal* ptr1, *ptr2;
    {
        Dog dog1;
        ptr1=&dog1;
        ptr1->sound();
    }
    Cat cat1;
    ptr2=&cat1;
    ptr2->sound();
}