//No Return Value (void)
//function does not return,its return type must be void
/*
returnType fn_name(parameter){
    //body of fn
}*/


// functions must be defined outside of other functions.

#include <iostream>
#include <string>
using namespace std;

//1-no argument,no return

void randomText( ){
    cout<<"5 stars for better handwriting!!"<<endl;
}

//argument ,no return
void sayHello(string name){
    cout<<"hellow"<<name<<endl;
}



//no argumt,return

int fixedNum(){
    return 40;
}

//argum,return

int sumNum(int i,int j){
    return i+j;
}

int main(){


    cout<<sumNum(5,6)<<endl;
    
    return 0;
}


