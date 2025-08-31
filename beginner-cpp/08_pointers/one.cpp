// int *ptr;* is declaration and  accessing the value.
// (&) memory address of a variable


#include <iostream>

using namespace std;


int main(){
 int x = 10;
 int *ptr = &x; // &x gets the address ,x to store in ptr



 //array nd pointers

 
//  arr --->address &arr[0]
// *(arr + i) ----> arr[i]

int marks[]={25,12,31};

cout<< *marks<<"\n";//25

cout<<*marks+1<<"\n";//26

cout<<*(marks+1)<<"\n";//12


//new address is ptr + (n * sizeof(data_type))

  

    return 0;
}

