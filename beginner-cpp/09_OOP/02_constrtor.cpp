//A constructor---> automatically called whenever an object is created
//Dog (){}
#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Dog {
    
    public: // fully accessible anywhere

    //data memebrs/structure (attributes or properties)
     string name;
     vector<string> treat;
     int age;

     // with parametr constructor
     Dog( string dogName, vector<string> dogTreat,int dogAgw){          
     name = dogName;
          
     treat =  dogTreat ;
          
     age = dogAgw;
    cout<<"constructor called"<< endl;

     }

     //member function/behaviour(methods or functions)

     void aboutDogs(){
        cout << name << " barks like a bird !!. \n her/his age is:"<<age <<endl;
        cout << "treats :";
        for (string dog_treat :treat){
            cout << dog_treat<<" ";
        }

     }
};

int main (){
    //object
    Dog dog1("mini",{"a","b","c"},3);
    dog1.aboutDogs();

}

