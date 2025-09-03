#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student{
    public:
    string name;
    int usn;
    vector<string> subjects;
     

    Student(){}

      Student( string studentName , int studentClass ,vector<string> studentSubjects){
        name = studentName;
        usn = studentClass;
        subjects = studentSubjects;
      }

    void displayInfo(){
        cout<<"name of student is:"<<name<<"  and usn is:"<<usn<<endl;
        cout<<"list of subjects:";
        for (string sub: subjects){
            cout<<sub<<" ";
        }
    }
};

int main(){
    //object1
    Student student1("mini",451,{"maths","science"});
    student1.displayInfo();

    cout<<"\n";

    //copying object
    Student copiedStudent1 = student1;
    copiedStudent1.displayInfo();

     cout<<"\n";

    student1.name ="Asus";
    student1.displayInfo();
     cout<<"\n";

    copiedStudent1.displayInfo();
     cout<<"\n";
    
    copiedStudent1.name ="rohit";
    copiedStudent1.displayInfo();
     cout<<"\n";
      student1.displayInfo();

    //--- variables r stored directly within the object's memory on the stack, they are completely independent

    return 0;
}