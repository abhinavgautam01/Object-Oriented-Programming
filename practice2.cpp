#include <iostream>
using namespace std;
class Base{
    public:
    void area(int side){
        cout<<"Area of square is : "<<side*side<<endl;
    }
    void area(int length, int breadth){
        cout<<"Area of rectangle is : "<<length*breadth<<endl;
    }
    void area(double radius){
        cout<<"Area of circle is : "<<radius*radius*3.14<<endl;
    }
};
int main(){
    Base obj;
    obj.area(2);
    obj.area(2,4);
    obj.area(2.5);
}