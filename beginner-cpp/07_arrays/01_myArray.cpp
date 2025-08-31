//char name[10] = "John";
//'J''o''h''n''\0''\0''\0'\0''\0,'\0'
//int scores[] = {100, 95, 80, 75, 90}
//int scores[5];

// Double quotes are use for string literal.""
// Single quotes are use for character literal.'' 


#include <iostream>
#include<string>
    
using namespace std;
int main (){
    string myColor[4]={"pinky","red","yellow","orange"};     
    //   cout<<myColor<<endl; the entire array of strings, myColor, at once. C++ doesn't have a built-in way to do it
     for (int i=0; i<4; i++){
        cout << myColor[i] << endl;
     }

    return 0;

}