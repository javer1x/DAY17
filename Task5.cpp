#include <iostream>  
using namespace std; 
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int number = 5; 
    int result;
    result = factorial(number);
    cout << "The factorial of " << number << " is: " << result << endl;
    return 0;
}