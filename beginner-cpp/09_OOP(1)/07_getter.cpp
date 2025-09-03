// Setters and getters are methods used to control access to a class's private member
#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Juice{

    private:
       string name;
       int glasses;
       vector<string> material;

    public:
        
    //deafult constructor
    Juice(){
        name = "unknown";
        glasses = 1;
        material = {"ice"};
    }
    //parametr constructor
    Juice( string juiceName,int juiceNum ,vector<string> juiceMaterial){
        name = juiceName;
        glasses = juiceNum;
        material = juiceMaterial;
    }
    //getter
    string getJuiceName(){
        return name;
    }
    //setter for name
    void  setJuiceName( string jName){
        name = jName;
    }
    //getter 
    vector<string> getjuiceMaterial(){
        return material;
    }
    //setter for matrial
    void setJuiceMaterial( vector<string> jMaterial){
        material = jMaterial;

    }
    void displayAll(){
        cout <<"your juice name is ;"<<name<<"\n the glasses u want is:"<<glasses<<endl;
        cout<<"materials are:";
         for (string mat : material) {
         cout << mat << " ";
    }
    }
};
 int main(){

    Juice juice1;
    juice1.setJuiceName("mango");
    juice1.setJuiceMaterial({"water","milk"," sugar"});

    cout << "Juice Name: " << juice1.getJuiceName() << endl;

    cout << "Juice Materials: ";
    vector<string> materials = juice1.getjuiceMaterial();
    for (const string& mat : materials) {
        cout << mat << " ";
    }
    
    Juice juice2("apple",5 ,{});
    juice2.displayAll();

     Juice juice3; // Correct declaration for the default constructor
    juice3.displayAll();

    return 0;
 }
            