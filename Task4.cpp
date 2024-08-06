#include <iostream>
using namespace std;
int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {
    return a * b; 
}
int main() {
    int intResult;
    double doubleResult;
    intResult = multiply(9,7);
    cout << "The product of 9 and 7 (int) is: " << intResult << endl;
    doubleResult = multiply(5.6, 8.7);
    cout << "The product of 5.6 and 8.7 (double) is: " << doubleResult << endl; 
 return 0;  
}
