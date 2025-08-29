//  lambda expression
//  function without a name.

//----no use for now

#include <iostream>

using namespace std;

int helloChai(){//fn declare outside

}

int main(){

    //lamda
   auto preparedBus = [](int i){
     cout << "preparing" << i<< " buses for departure" << endl;

   };
    
   preparedBus(4);
    return 0;
}