// dynamic_memory---->keywords new and delete


#include <iostream>

 using namespace std;

//taking  memory refrence (int*)
int* prepareChaiOrders(int cups) {

    //dynamic memory
    //The & operator is used to get the address of a variable in static memory (the stack), 
    // while new is used to allocate memory on the heap and get its address.
    int* orders = new int[cups]; //&....first element refrence
    
    for (int i = 0; i < cups; i++) {
        orders[i] = (i + 1) * 10; //orders[i] is used to access the memory on the heap
    //   orders[0] (or *(orders + 0))
    }
    return orders;
}

int main() {
    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++) {
        cout << "Cup" << i + 1 << " has " << chaiOrder[i] << " ml\n";
    }

    delete[] chaiOrder;// deallocate the dynamically allocated memory


    return 0;
}