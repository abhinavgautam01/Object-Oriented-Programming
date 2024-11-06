#include <iostream>
using namespace std;
class student{
    private:
    string name;
    string rollNumber;
    float marks;
    public:
    void setStudentsInfo(){         //(string studentName,int studentRollNumber, float studentMarks)
        cout<<"Enter student's Name: ";
        getline(cin, name);
        cout<<"Enter student's Roll Number: ";
        cin>>rollNumber;
        cout<<"Enter student's Marks: ";
        cin>>marks;
        // name=studentName;
        // rollNumber=studentRollNumber;
        // marks=studentMarks;
    }
    void display() const{
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student student1;
    student1.setStudentsInfo();
    student1.display();
    return 0;
}