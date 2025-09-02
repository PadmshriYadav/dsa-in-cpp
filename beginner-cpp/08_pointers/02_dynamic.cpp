#include <iostream>

using namespace std;

//datatype of what its points
string* collectionOfPens(string collection[],int num){
    string* pens = new string[num];
   
    for (int i=0; i<num;i++){
         string color;
        cout<<"what should be the color of "<<(i+1)<<"pen:";
        cin>>color;
        pens[i] = color;


    }
    return pens; //value of pointer, which is the heap address 
}

int main(){
   int num;
   cout<<"no of pens u want :";
   cin>>num;
   string collection[num];//declared array

   string* collectionP = collectionOfPens(collection,num);

   for (int i=0;i<num ; i++){
    cout<< collectionP[i] <<"," <<endl;

   }
     delete[] collectionP;

   

    return 0;
}