// int *ptr;* is declaration and  accessing the value(dereferenced)
// (&) memory address of a variable


#include <iostream>

using namespace std;


int main(){
 int x = 10;//value of x
 int *ptr = &x; // &x gets the memory address of x (07xffeertgyftf)
 //int *ptr.declaration...
 // *ptr de refenced valuevalue 
 //&ptr....address of the pointer variable ptr , not the address it's pointing (&x)


       
 //array nd pointers

 
//  arr --->address &arr[0]
// *(arr + i) ----> arr[i]

int marks[]={25,12,31};

cout<< marks<<"\n";//0x7ffee142b6a8
cout<< &marks<<"\n";//0x7ffee142b6a8


cout<< *marks<<"\n";//25

cout<<*marks+1<<"\n";//26

cout<<*(marks+1)<<"\n";//12

//new address =  ptr + (n * sizeof(data_type))

    return 0;
}

