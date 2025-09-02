//class(cookie cutter) defines structure((attribute of object) behaviour(actions or functions object can perform)
// ------>object(cookie)unique

// objects created from the same class will have the same structure and behavior.
// difference lies in their state or identity.


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

     Dog dog2;
    dog2.name = "funni" ;
    dog2.treat = {"x","z","y"};
    dog2.age = 5;
    dog2.aboutDogs();

    
    return 0;
}


// mini barks like a bird !!. 
//  her/his age is:3
// treats :a b c 

// funni barks like a bird !!. 
//  her/his age is:5
// treats :x z y