//pill capsule----> holds everythig in one neat package
//  inside the capsule is the private data,
//Swallowing it is a public method only way to use the medicine.

//to implement---->Declare Member Variables as Private,
// writing public methods called setters and getters.
//use constructors properly 

#include <iostream>
#include <string>

using namespace std;
 
class Factory {
    private:
      int empID;
      string empName;
      double empSalary;
    public:
    Factory(){}
    //constructor
    Factory(int id ,const string& name, double salary):empID(id),empName(name),empSalary(salary){}
    
    //getting name
    string getEmpName( ){
        return empName;
    }
    //setting name
    void setEmpName(string name){
         if (!name.empty()) { //how you controlllll n access ur code 
            empName = name;
        } 
        else {
            cout << "ghost?? or whatt..where your namee mff" << endl;
        }
    }

    //getting  salary
    double getEmpsalary( ){
        return empSalary;
    }
    //setting salary
    void setEmpSalary(double salary ){
        if (salary >= 0) {
            empSalary = salary;
        } 
        else {
            cout << "thats zero moneyyy...add real moneyy" << endl;
        }
    }
   //getting  id
    int getEmpID( ){
        return empID;
    }
    //setting salary
    void setEmpId(double id ){
           empID = id;
    }

       void aboutEmployee(){
        cout << "Employee ID:" << empID <<"\temployee name:"<<empName<<"\tand his salary is:"<<empSalary<<endl;
    }
};



int main(){
      Factory emp1(445,"raghu",4500.00);
    //   emp1.aboutEmployee();

      Factory emp2(446, "ram", 3500.00);

    if (emp2.getEmpID() > emp1.getEmpID()){
    cout << "emp2 is older employee" << endl;
    } 
    else {
    cout << "emp1 older employee" << endl;
    }
    emp2.setEmpName("");


    return 0;
}