// if, if-else, and switch


#include <iostream>

using namespace std;

int main(){

    // char srnum; ASCII value of that character, not the integer
    int srnum;
    cout<<"our menu have 3 type of tea. type accordingly\n"<<"(1)lemonlemon\n(2)blacktea\n(3)greentea\n"<<"\n";
    cin>>srnum;

    switch (srnum) {
        case 1:
            cout<<"lemon tea \n";
           break;
        case 2:
            cout<<"black tea \n";
           break;
        case 3:
            cout<<"green tea \n";
           break;
        default:
              cout<<"idiott!!make it ur selffff\n";
    }
    return 0;
}