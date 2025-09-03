#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student{
public:
    string* name;
    int usn;
    vector<string> subjects;
     
    Student( const Student& other){
        name = new string(*other.name);
        usn = other.usn;
        subjects = other.subjects;
      }

    Student(string studentName, int studentClass,vector<string> studentSubjects) {
    name = new string(studentName);
    usn = studentClass;
    subjects = studentSubjects;
}  
    ~Student(){
        delete name;
        cout<<"destructor called"<<endl;
    }
    void displayInfo(){
        cout<<"name of student is:"<<*name<<"  and usn is:"<<usn<<endl;
        cout<<"list of subjects:";
        for (string sub: subjects){
            cout<<sub<<" ";
        }
    }
};

int main(){
    //object1
    Student student1("mini", 451, {"maths", "science"});
    student1.displayInfo();

    cout<<"\n";

    //copying object
    Student copiedStudent1 = student1;
    copiedStudent1.displayInfo();

     cout<<"\n\n chnge in original name\n";

    *student1.name ="Asus";
    student1.displayInfo();
     cout<<"\n";
    copiedStudent1.displayInfo();

     cout<<"\n\n chnge in copied name\n";
    
    
    *copiedStudent1.name ="rohit";
     student1.displayInfo();
      cout<<"\n";
    copiedStudent1.displayInfo();
      cout<<"\n";
     


      return 0;}