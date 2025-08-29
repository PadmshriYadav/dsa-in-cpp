#include <iostream>
#include <string>

using namespace std;
int main() {
    
    // string favoriteTea = "lemon \"tea\"is good ";//escape chrt
    // string Tea = "for health";
    // string favorite = " bad in tast \n";//escape sequ
    // cout<<favoriteTea << favorite  << Tea <<endl;

string userWork;
string process;

 cout<<"whats should i do?\n";
 getline(cin,userWork);

 cout << "how should i do?\n";
// cin >> process;//>> reads until it encounters the first whitespace character,better use getlinne(cin,storingvariable) for string
getline(cin,process);
 cout<<"i should "<<userWork<<" by "<<process << endl;
 

string tea;
float price;
char rate;

cout<<"what type of tea you enjoy\n";
getline(cin,tea);

cout<<"how much should i pack for you?(rupee)\n";
cin >>price;
cout<<"how much do you rate our cafe\n";
cin >>rate;

//users pov
cout<<"i would like "<<tea<<"and give it for only  "<<price<<"/- . \nits nice here.its a "<<rate<< "\n";

// increasing price by 10 %



   return 0;
}