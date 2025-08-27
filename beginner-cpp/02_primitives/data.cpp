#include <iostream>

using namespace std;
int main() {
    int numberOfStudents = 30;
    int score = -15; //unsigned negative--garbage value
    short age = 10;//small whole num
    float temperature = 25.5f; // 7 significant digits
    double subtotal = 45.75;//  17 significant digits
    char grade = 'A';// 17 decimal digits
    char symbol = '#';
    bool isRaining = true; //0=false," " not allowed

    cout << "grade is: " << grade <<" and score is"<< score <<endl;

   return 0;
}