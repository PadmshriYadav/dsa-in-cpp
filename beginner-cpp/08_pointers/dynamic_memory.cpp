// dynamic_memory---->keywords new and delete

#include <iostream>

int* prepareChaiOrders(int cups) {
    int* orders = new int[cups];
    for (int i = 0; i < cups; i++) {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main() {
    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++) {
        std::cout << "Cups: " << i + 1 << " has " << chaiOrder[i] << " ml\n";
    }

    delete[] chaiOrder;// deallocate the dynamically allocated memory


    return 0;
}