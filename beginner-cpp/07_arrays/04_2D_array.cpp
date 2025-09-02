// 2D ---[][]row-column

#include <iostream>

using namespace std;

int main(){

    int studentSlot[3][2] = 
    {{1,2},//slot1
    {4,5}, //slot2
    {6,7}}; //slot3
    
    for( int i =0; i<3; i++){
            cout<<"slot "<<(i+1) <<": ";
        for (int j=0; j<2; j++){
            cout<< studentSlot[i][j] ;
              if (j == 0){
                cout<<",";
            };

        }
        cout<<"\n";
    }

    return 0;
}