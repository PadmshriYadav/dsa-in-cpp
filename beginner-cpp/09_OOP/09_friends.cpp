//friend  granted access to the private and protected

#include <iostream>

using namespace std;
class Vehicle{
    private:
       int wheels;
    public:
      string name;
      int code;
    //main concter  
    // Vehicle( const string& n, int c,int w){ name = n;code = c; wheels = w;}  
     Vehicle( const string& n, int c,int w): name(n),code(c),wheels (w){}  
    
     //friend function declaration
     friend void displayVehicle( const Vehicle& v)

 }; 
    //friend function defini
    void displayVehicle( const Vehicle& other){
        cout<< other.name <<" have"<<other.wheels<<"no of wheels"<<"\n";
    }


 int main(){
    Vehicle car("porsche",451,4);
    displayVehicle(car);
     Vehicle bike("yamaha",071,2);
    displayVehicle(bike);


return 0;
 }