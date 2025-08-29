//arthemic +-/*%
//assigmnt +=,-=,/=,*=,%=
//relational >=,<=,==
//logical &&,||
//bitwise 


#include <iostream>

using namespace std;

int main(){
    float price =45.2f;

// increasing price by 10 %
float newPrice;
newPrice = (price*(((float)10)/100))+price;
cout<<"new price is:"<<newPrice<<endl;

//apply discount if total price is equal or above 100

int perBottle =20, bottles;
float totalBottle,discountPrice;
string userStatus;

cout<<"whats ur status?(regular/new)"<<"\n";
cin>>userStatus;
cout<<"one bottle is $"<<perBottle<<"\n"<<"how many bottles you want?"<<"\n";
cin>>bottles;
totalBottle=perBottle*bottles;
// cout<<"your total is:$"<< totalBottle<<"\n";
discountPrice = totalBottle-(totalBottle*(((float)10)/100));

if (totalBottle <= 100){
    cout<<"since ur totl is mor than 100\n your new price is $"<<discountPrice<<"\n";
}
else if (totalBottle>=120 && userStatus=="regular" ){
     cout<<"since ur regular \n your new price is $"<<discountPrice<<"\n";
}
else{
    cout<<"your total is:$"<< totalBottle<<"\n";
}
    return 0;
}



