#include <iostream>

using namespace std;
int main() {
    int numberOfStudents = 30;

    int score = -15; //-15
    // `int` is signed(stors neg vlues) by default...-15 is a valid value.
    // `unsigned int`-15 would wrap around based on its bit representation
    
    float temperature = 25.5f; // 7 significant digits
    double subtotal = 45.75;//  17 significant digits
    char grade = 'A';// single chr
    char symbol = '#';
    bool isRaining = true; // 0=false, any non-zero=true

    std::cout << "Grade is: " << grade << " and score is " << score << std::endl;

    cout << "grade is: " << grade <<" and score is"<< score <<endl;
    // An unsigned int cannot store negative values.
}