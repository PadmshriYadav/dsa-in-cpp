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
    Juice():Juice("unknown",0,{"nothing"}){}
    

    //deligating constructotr
      Juice( const string& name): Juice(name,1,{"water","ice","sugar"}) {}

    //parametr main constructor
    Juice( const string& juiceName,int juiceNum ,const vector<string>& juiceMaterial){
        name = juiceName;
        glasses = juiceNum;
        material = juiceMaterial;
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
    juice1.displayAll();
    cout <<"\n\n ";

    //
    Juice preMade("already made");
    preMade.displayAll();

    return 0;
 }