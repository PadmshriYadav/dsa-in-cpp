
#include <iostream>
#include <string>

using namespace std;

//doesnt work
    
void addColor(string color[] , int num ){
     
    for ( int i = 0 ; i< num ; i++){
        cout<<"the"<<i+1<<" color should be:";
        string userColor;
        getline(cin,userColor);

        color[i]= userColor;
         cout<<"\n";

     

    }
  
}
using namespace std;
int main(){

    int num;
    cout << "enter  no of ur color :";
    cin>>num; // cin leaves \n.. cin.ignore()
    cin.ignore();
    
   string colorName [num];

    addColor(colorName,num);

  
    return 0;
}


