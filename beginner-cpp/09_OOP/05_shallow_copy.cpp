// object contains pointers
// copying : shallow copy or deep copy. 


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student{
    public:
    string name;
    int* usn;
    vector<string> subjects;
     

    Student(){}

      Student( string studentName , int studentClass ,vector<string> studentSubjects){
        name = studentName;
        usn = new int(studentClass);//allocate memory
        subjects = studentSubjects;
      }

      // Destructor to free the allocated memory
    ~Student() {

        delete usn;
        cout<<"destructor called"<<endl;
    }


    void displayInfo(){
        cout<<"name of student is:"<<name<<"  and usn is:"<<*usn<<endl;
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
    cout<<"\n\n\n";

    //shallow coppy

    copiedStudent1.name ="rohit";//chnge in copied
    *copiedStudent1.usn = 507;
    copiedStudent1.displayInfo();
     cout<<"\n";

    student1.displayInfo();//caused  no chnged in originl name n subject....bt chnge in usn

    //---------------******behavior of a double-free is undefined******----------
    //this will error cause, after copiedStudent1. executes delete usn;, which successfully frees the memory that was allocated for the USN.
    // student1. It also tries to execute delete usn; on the very same memory address.
    //Attempting to delete memory that has already been deleted is a "double free"/causes to crash

    return 0;
}