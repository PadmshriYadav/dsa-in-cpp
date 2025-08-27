#include <iostream>

using namespace std;
int main() {

    int ten = 10;
   double tendouble = ten; // Implicit 10.0

   cout << tendouble <<endl; //10

   double num = 9.99;
   int numint = (int)num; //explicit 

    cout << numint <<endl;//9
    return 0;
}