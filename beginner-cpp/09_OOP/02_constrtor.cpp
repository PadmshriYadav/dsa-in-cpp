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

     // without parametr constructor
     Dog(){          
     name = "nameless" ;
          
     treat = {"sweet","bun"};
          
     age = 1;
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
    Dog dog1;
    dog1.name = "mini" ;
    dog1.treat = {"a","b","c"};
    dog1.age = 3;
    dog1.aboutDogs();

    cout << "\n\n";

    Dog dog3;
    dog3.name ="silly";
     dog3.aboutDogs();
    return 0;
}


// constructor called
// mini barks like a bird !!.
//  her/his age is:3
// treats :a b c


// constructor called
// silly barks like a bird !!.
//  her/his age is:1
// treats :sweet bun