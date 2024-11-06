#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int rollNumber;
    float marks;
    public:
    void setstudents(string studentName, int studentRollNumber, float studentMarks){
        name=studentName;
        rollNumber=studentRollNumber;
        marks=studentMarks;
    }
    void display() const{
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student student1;
    student1.setstudents("Abhinav",3,7.98);
    student1.display();
    return 0;
}