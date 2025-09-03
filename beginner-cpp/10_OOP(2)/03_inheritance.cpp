//virtual keyword allows a function in a base class to be overridden by a derived class
//= 0 to a virtual function's declaration makes it a pure virtual function


#include <iostream>
#include <string>

using namespace std;
 
class Books{

    // protected:
    public:
    string genre;
    string bookName;
    int year;

     virtual void bookGenre() const{
        cout<<"this "<<bookName<<" is "<< genre<<endl;
     }
     virtual ~Books(){}

      void about(){
        cout<<bookName<<",this book is made up of pages"<<endl;
    }
};

class Kids: public Books{
    public:
     void aboutBook(){
        cout<<"this book is:"<<bookName<<endl;
        cout<<"this book have been written in"<<year<<endl;
     }
     void bookGenre() const override /* final*/{
        cout<<"this kids book named "<<bookName<<" is "<< genre<<endl;

     }
    };


class Teenager: public Kids{
    public:
    
     void bookGenre() const override  {
        cout<<"this teenager book named "<<bookName<<" is "<< genre<<endl;

     }

};

int main() {
    Kids kidsBook;
    kidsBook.bookName = "three pigs";
    kidsBook.year = 1983;
    kidsBook.genre = "funny";

    
    kidsBook.about();  // inherited from the base class
    kidsBook.bookGenre();//this kids book named three pigs is funny
    kidsBook.aboutBook(); // specific to the derived class
    
   Teenager teen1;
   teen1.bookName = "three house";
    teen1.genre = "expensive-boring";
    teen1.bookGenre();
     teen1.about();
   
    return 0;}

//parent class VS abstract class
// parent class can be instantiated (you can create an object of it)
// abstract class cannot..its a special case of base class

// protected--> internal workings of a class and its children..wont work in main


// base class/superclass /parent class