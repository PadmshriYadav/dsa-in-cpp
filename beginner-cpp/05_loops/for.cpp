//for---no of time is known

#include <iostream>

int main(){
    for (int i = 0; i < 5; i++) {//last value wont show
    
    std::cout << i << std::endl;
}


char chr_array[6] = {'a','s','d','f','g','h'};

//C-style array.??
for (char i =0;i<6;i++){
    std::cout << chr_array[i] << std::endl;


}
    return 0;
}